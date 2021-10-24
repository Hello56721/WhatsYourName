# WhatsYourName

[![Build status](https://github.com/Hello56721/WhatsYourName/actions/workflows/cmake.yml/badge.svg)](https://github.com/Hello56721/WhatsYourName/actions/workflows/cmake.yml)

A simple C++ program that asks for your name.

## Getting started

In order to install this, the following dependencies needs to be satisfied:

- CMake
- A C++ Compiler (Any will do)

Once you have installed both of these things, run the following commands in a terminal:

```bash
git clone https://github.com/Hello56721/WhatsYourName.git
cd WhatsYourName
cmake -S. -Bbuild -DCMAKE_BUILD_TYPE=Release
cmake --build build
```

To run this software, run the following commands in the project's root directory (assuming that you have compiled this software with the steps listed above):

```bash
cd build
./whats-your-name
```
