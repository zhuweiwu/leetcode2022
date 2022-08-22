aux_source_directory(./src DIR_LIB_SRCS)  


add_executable(test "unittest.cpp" ${DIR_LIB_SRCS})

target_link_libraries(test PUBLIC gtest pthread)
