# This removes the headache of including 'cmake/internal.cmake' file
# inside the 'cpp' and 'test' folder. I know this is a weird design but
# allow me to refactor project's source tree I have a better design in my
# mind.
include("cmake/internal.cmake")

add_subdirectory(main)
