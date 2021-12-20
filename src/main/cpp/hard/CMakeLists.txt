file(GLOB LEETCODE_HARD_SRC_FILES "*.h")

foreach(file ${LEETCODE_HARD_SRC_FILES})
    register_library(${file})
endforeach()
