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
SET(CMAKE_CXX_FLAGS_DEBUG "$ENV{CXXFLAGS} -std=c++17 -O0 -w -g")
SET(CMAKE_CXX_FLAGS_RELEASE "$ENV{CXXFLAGS} -std=c++17 -O0 -w -g")
SET(CMAKE_CXX_FLAGS "$ENV{CXXFLAGS} -std=c++17 -O0 -w -g")


find_package(GTest REQUIRED)

if(GTest_FOUND)
    message("GTest lib found")
else()
    message( FATAL_ERROR "Cannot find GTest")
endif()



FILE(GLOB SOURCES "src/*/*")
FILE(GLOB Test_SOURCES "test/src/*/*" "test/src/*")

SET(LOCAL_INCLUE /usr/local/include)


include_directories(${GTEST_INCLUDE_DIRS} ${LOCAL_INCLUE})





add_executable(unittest "./test/unittest.cpp" ${SOURCES} ${Test_SOURCES})
target_link_libraries(unittest ${GTEST_LIBRARIES}  pthread)
set_target_properties( unittest PROPERTIES RUNTIME_OUTPUT_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}/test/bin)
