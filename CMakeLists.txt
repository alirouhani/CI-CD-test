cmake_minimum_required(VERSION 3.14)
project(BinarySearchCI)

set(CMAKE_CXX_STANDARD 17)

# 1. Download GoogleTest automatically
include(FetchContent)
FetchContent_Declare(
  googletest
  URL https://github.com/google/googletest/archive/refs/heads/main.zip
)
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
FetchContent_MakeAvailable(googletest)

# 2. Include our headers
include_directories(include)

# 3. Create the library (our algorithm)
add_library(algo_lib src/binary_search.cpp)

# 4. Create the test executable
enable_testing()
add_executable(unit_tests tests/test_logic.cpp)
target_link_libraries(unit_tests algo_lib gtest_main)

# 5. Tell CMake to discover tests
include(GoogleTest)
gtest_discover_tests(unit_tests)
