cmake -S . -B build
cmake --build build
cd build && ./unit_tests
