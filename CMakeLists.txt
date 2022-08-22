# Set the minimum version of CMake that can be used
# To find the cmake version run
# $ cmake --version

cmake_minimum_required(VERSION 3.5)

set(MY_VERSION "0.0.1")
message(STATUS "Leetcode: ${MY_VERSION}")


project(Leetcode
        VERSION ${MY_VERSION}
        LANGUAGES C CXX        
)

# debug
#SET(CMAKE_BUILD_TYPE "Release") 


#-Wall warning all
#-w ignore all warning
#-Werror make all warning to error
#SET(CMAKE_CXX_FLAGS_DEBUG "$ENV{CXXFLAGS} -std=c++17 -O0 -w -g")
#SET(CMAKE_CXX_FLAGS_RELEASE "$ENV{CXXFLAGS} -std=c++17 -O0 -w -g")
#SET(CMAKE_CXX_FLAGS "$ENV{CXXFLAGS} -std=c++17 -O0 -w -g")

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_EXTENSIONS OFF)
set(CMAKE_CXX_STANDARD_REQUIRED ON)


find_package(GTest REQUIRED)

set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)


include_directories("${PROJECT_SOURCE_DIR}/src/Bean")
include_directories("${PROJECT_SOURCE_DIR}/src/Easy")

#add_subdirectory(${PROJECT_SOURCE_DIR}/src/Bean)
#add_subdirectory(${PROJECT_SOURCE_DIR}/src/Easy)
#(${PROJECT_SOURCE_DIR}/src/*)

#include_directories(${GTEST_INCLUDE_DIRS})



add_subdirectory(./test)

#add_executable(unittest "./test/unittest.cpp" ${Test_SOURCES})
#target_link_libraries(unittest ${GTEST_LIBRARIES}  pthread)
#set_target_properties( unittest PROPERTIES RUNTIME_OUTPUT_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}/test/bin)
