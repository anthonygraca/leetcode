# Internal functionalities to register libraries to project 'leetcode' or
# add a test executable to project 'leetcode' without manually writing them
# down each time you add a solution and the corresponding unittest.
# 
# Author: Ayush Joshi <ayush854032@gmail.com>

# Escape sequences for *nix based systems. I don't know how to do this on Windows.
# @TODO(joshiayush): Make it work on windows as well.
if(NOT WIN32)
  string(ASCII 27 Esc)
  set(ColourReset "${Esc}[m")
  set(ColourBold  "${Esc}[1m")
  set(Red         "${Esc}[31m")
  set(Green       "${Esc}[32m")
  set(Yellow      "${Esc}[33m")
  set(Blue        "${Esc}[34m")
  set(Magenta     "${Esc}[35m")
  set(Cyan        "${Esc}[36m")
  set(White       "${Esc}[37m")
  set(BoldRed     "${Esc}[1;31m")
  set(BoldGreen   "${Esc}[1;32m")
  set(BoldYellow  "${Esc}[1;33m")
  set(BoldBlue    "${Esc}[1;34m")
  set(BoldMagenta "${Esc}[1;35m")
  set(BoldCyan    "${Esc}[1;36m")
  set(BoldWhite   "${Esc}[1;37m")
endif()

# Just a utility function to print colored output on the screen on *nix based
# systems, unfortunately there's no support for Windows for now.
# @TODO(joshiayush): Make it work on windows as well.
function(colored_message)
  list(GET ARGV 0 MessageType)
  if(MessageType STREQUAL FATAL_ERROR OR MessageType STREQUAL SEND_ERROR)
    list(REMOVE_AT ARGV 0)
    message(${MessageType} "${BoldRed}${ARGV}${ColourReset}")
  elseif(MessageType STREQUAL WARNING)
    list(REMOVE_AT ARGV 0)
    message(${MessageType} "${BoldYellow}${ARGV}${ColourReset}")
  elseif(MessageType STREQUAL AUTHOR_WARNING)
    list(REMOVE_AT ARGV 0)
    message(${MessageType} "${BoldCyan}${ARGV}${ColourReset}")
  elseif(MessageType STREQUAL STATUS)
    list(REMOVE_AT ARGV 0)
    message(${MessageType} "${Green}${ARGV}${ColourReset}")
  else()
    message("${ARGV}")
  endif()
endfunction(colored_message)

# Function registers the given file as a library to project 'leetcode'.
# 
# This function takes in an absolute file path or relative file path and takes
# the filename component out and removes the last extension of that file name
# to create a library name for that file and adds that file as a library to the
# project 'leetcode'.
# 
# We are doing this so to automate the task of registering each solution file as
# a library to project 'leetcode'.
# 
# Note: This library that just got registered here is used when adding an executable
# for the unit test created for this library. The idea is to name both of the files
# unittest file and the solution file the same just the test file will have a
# trailing '-test' in it to later link the test executable to the correct unittest.
function(register_library filename)
  # We want to take the directory and the last extension component out of the file
  # name.
  get_filename_component(libname ${filename} NAME_WLE)
  # We don't want preceding numbers on our library name so we remove it.
  string(REGEX REPLACE "(^[0-9]+\-)" "" libname ${libname})
  # We also don't want the hyphens (-) so we remove them as well.
  string(REPLACE "-" "" libname ${libname})
  colored_message(STATUS "Adding library ${libname} from file ${filename}")
  add_library(${libname} OBJECT ${filename})
  colored_message(STATUS "Added library ${libname} from file ${filename}")
endfunction(register_library)

# Function registers the given file as a executable to project 'leetcode'.
# 
# This function takes in an absolute file path or relative file path and takes
# the filename component out and removes the last extension of that file name
# to create a executable name for that file and adds that file as an executable
# to the project 'leetcode'.
# 
# We are doing this so to automate the task of registering each unittest file as
# an executable to project 'leetcode'.
# 
# Note: This executable that just got registered here must be linked with the
# corresponding solution file in order to make sure that it links to the
# corresponding solution file make sure to give it a name identical to the solution
# file and just add a trailing '-test' in the unittest file name.
function(register_test_executable filename)
  # We want to take the directory and the last extension component out of the file
  # name.
  get_filename_component(testexecutable ${filename} NAME_WLE)
  # We don't want the preceding numbers on our test executable name.
  string(REGEX REPLACE "(^[0-9]+\-)" "" testexecutable ${testexecutable})
  # Now it's time to determine what the name of our library is going to be so remove
  # the trailing '-test' from the 'testexecutable' that we just created.
  string(REGEX REPLACE "(-test)$" "" libname ${testexecutable})
  # Now remove the hyphens (-) from the test executable name.
  string(REPLACE "-" "" testexecutable ${testexecutable})
  # Now remove the hyphens (-) from the library name.
  string(REPLACE "-" "" libname ${libname})
  colored_message(STATUS "Adding test executable ${testexecutable} from file ${filename}")
  add_executable(${testexecutable} ${filename})
  colored_message(STATUS "Linking libraries gtest_main, ${libname}")
  target_link_libraries(${testexecutable} gtest_main ${libname})
  colored_message(STATUS "Linked libraries gtest_main, ${libname}")
  add_test(NAME ${testexecutable} COMMAND ${testexecutable})
  colored_message(STATUS "Added test executable ${testexecutable} from file ${filename}")
endfunction(register_test_executable)
