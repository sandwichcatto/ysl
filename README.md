# YSL (YCCE Student Language)
This repository contains the source code for YSL interpreter.
**YSL** is a lightweight, experimental programming language designed to be a fully fledged language for the students of IIT Wanadongri.  

---

## Requirements

- C++23 compatible compiler 
- CMake ≥ 4.1

---

## Build Instructions

1.  Clone the repository:
```bash
git clone https://github.com/sandwichcatto/ysl.git
cd ysl
```
2.  Generate build files and compile:
```bash
cmake -B build -S .
cmake --build build
```
3.  Run the interpreter:
```bash
./build/bin/ysl examples/print.ysl
```



## Contributing
Feel free to fork this repository, submit issues, or contribute to the project by creating pull requests.
