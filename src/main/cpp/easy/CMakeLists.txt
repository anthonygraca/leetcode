file(GLOB LEETCODE_EASY_SRC_FILES "*.h")

foreach(file ${LEETCODE_EASY_SRC_FILES})
    register_library(${file})
endforeach()
