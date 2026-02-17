# Binary Search C++ Implementation

A robust, verified implementation of the Binary Search algorithm in C++17. This project serves as a template for high-integrity algorithm development using modern CI/CD practices.

## 🚀 Key Features
* **Logarithmic Efficiency:** Verified $O(\log n)$ complexity through internal step-counting tests.
* **Memory Safety:** Continuously monitored via **AddressSanitizer (ASan)** to prevent leaks and overflows.
* **Automated Validation:** Integrated with **GoogleTest (gTest)** and **GitHub Actions**.
* **Clean Build System:** Powered by **CMake** with automatic dependency management.

---

## 🛠 Project Structure
```text
├── .github/workflows/
│   └── ci.yml             # GitHub Actions CI/CD Pipeline
├── CMakeLists.txt         # Main build configuration
├── include/
│   └── binary_search.h    # Algorithm header (O(log n) contract)
├── src/
│   └── binary_search.cpp  # Implementation logic
└── tests/
    └── test_logic.cpp     # Unit tests and complexity assertions
