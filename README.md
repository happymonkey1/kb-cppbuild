
# kb-cppbuild

Small hobby project to write a simple build system that is both itself written in C++, and uses C++ as the build language.

`kb-cppbuild` is a stb style single header build system.

# Getting Started

## Dependencies

The actual build system requires no dependencies other than the C++ standard library.

Testing for the library depends on [Catch2](https://github.com/catchorg/Catch2).

## Writing the build file

It's awfully empty here...

## Bootstrapping

Currently, the `kb-cppbuild` needs to be bootstrapped. This only needs to be done once (barring any bugs :P)

Bootstrap with g++:
`g++ PATH_TO_CPP_BUILD_SCRIPT -I PATH_TO_CPPBUILD_HEADER -o OUTPUT_NAME -std=c++20`

This creates a build directory `.kb-cppbuild` rooted from the working directory of the initial bootstrap command.

# Subsequent Builds

It's awfully empty here...

# FAQ

- Why another build system?
  - Well, I like to do hobby projects to learn and though, "why not?".
- Need support or found a bug?
  - Feel free to open an issue, however support will most likely be limited.