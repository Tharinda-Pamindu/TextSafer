# TextSafer

**DotCPlus Workshop Series Final Assessment — ARICT**

TextSafer is a robust C++ application designed for the DotCPlus workshop series, integrating modern C++ and .NET with C++/CLR. This project demonstrates secure text processing, advanced application architecture, and interoperability between native and managed code.  

## Table of Contents

- [Features](#features)
- [Getting Started](#getting-started)
- [Installation](#installation)
- [Usage](#usage)
- [Architecture](#architecture)
- [Contributing](#contributing)
- [Authors](#authors)
- [Acknowledgements](#acknowledgements)

---

## Features

- **Secure Text Processing**: Handles text input and output securely using C++ best practices.
- **C++/CLR Integration**: Demonstrates interoperability between native C++ and .NET managed code.
- **Modular Design**: Code organized for extensibility and maintainability.
- **Cross-Platform Fundamentals**: C++ core designed for portability (with .NET features for Windows).

## Getting Started

These instructions will help you set up and run TextSafer on your local machine for development, testing, and demonstration.

### Prerequisites

- C++17 or later
- .NET Framework (if using C++/CLR modules)  
- Visual Studio 2019+ (recommended for C++/CLR projects)
- CMake 3.15+ (optional for cross-platform builds)

### Installation

1. **Clone the Repository**
    ```bash
    git clone https://github.com/Tharinda-Pamindu/TextSafer.git
    cd TextSafer
    ```

2. **Build the Project**
   - **Native C++:**  
     Open in Visual Studio and build the solution.
   - **CMake (Optional):**  
     ```bash
     mkdir build && cd build
     cmake ..
     cmake --build .
     ```

3. **Configure .NET (C++/CLR) Modules**
   - Ensure .NET is enabled for your build environment if using C++/CLR.

## Usage

- Run the compiled executable (`TextSafer.exe` or platform equivalent).
- Follow on-screen prompts for input and text processing tasks.
- Example:
    ```
    > TextSafer.exe
    Enter your text:
    [user input]
    Processed output: [secure output]
    ```

## Architecture

- **src/** – Core C++ source files
- **include/** – Headers and interfaces
- **clr/** – C++/CLR modules for .NET integration
- **tests/** – Unit and integration tests

Key modules:
- `TextProcessor` — Secure text handling
- `ClrBridge` — C++/CLR interoperability
- `Utils` — Helper functions and utilities

## Contributing

We welcome contributions! Please follow these guidelines:

1. Fork the repo and create your branch (`git checkout -b feature/AmazingFeature`)
2. Commit your changes (`git commit -m 'Add some AmazingFeature'`)
3. Push to the branch (`git push origin feature/AmazingFeature`)
4. Create a Pull Request

## Authors

- **Tharinda Pamindu**  
  [GitHub](https://github.com/Tharinda-Pamindu)

## Acknowledgements

- DotCPlus Workshop Series
- ARICT Community
- Open-source C++ and .NET libraries

---

> For questions or support, please open an [issue](https://github.com/Tharinda-Pamindu/TextSafer/issues).
