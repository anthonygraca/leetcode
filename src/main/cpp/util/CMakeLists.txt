file(GLOB LEETCODE_UTILS_SRC_FILES "*.h")

foreach(file ${LEETCODE_UTILS_SRC_FILES})
    register_library(${file})
endforeach()
