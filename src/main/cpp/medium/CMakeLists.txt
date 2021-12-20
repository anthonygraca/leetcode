file(GLOB LEETCODE_MEDIUM_SRC_FILES "*.h")

foreach(file ${LEETCODE_MEDIUM_SRC_FILES})
    register_library(${file})
endforeach()
