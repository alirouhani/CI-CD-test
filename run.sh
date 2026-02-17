# 1. Configure the project
cmake -S . -B build

# 2. Build the library and test suite
cmake --build build

# 3. Execute tests
cd build && ctest --output-on-failure
