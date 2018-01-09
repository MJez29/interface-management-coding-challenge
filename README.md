# INTERFACE MANAGEMENT CODING CHALLENGE
## Michal Jez

### Sophie Germain Primes
A sophie germain prime is a prime number `n` where `2n+1` is also a prime number

Think you've found one? Enter `./run' in a terminal in the root directory to build the project
or `./a.out` to run the precompiled source

### Directory Structure

#### `/`
- main.cpp 				- The entry point for the program
- makefile				- The file compiling the C++ files
- cpplint.py			- The program linter
- run					- The script to run/build/lint the program

#### `/prime`
- prime.h				- Contains the prime API
- prime.cpp				- Contains the prime API definitions

#### `/sophie-germain`
- sophie-germain.h		- Contains the sophie germain prime API
- sophie-germain.cpp	- Contains the sophie germain prime API definitions

### Why is DevOps Important for WATonomous

It is important because it takes all the code that the other software teams write and then automatically
builds it and then tests it. It allows the other developers to focus on actually developing the software
that will drive the car rather than waste precious time on menial tasks like compiling and testing.

DevOps also develops tools to enhance the development environment for example by adding a package
manager to ensure that each team uses a consistent version of a tool and don't have to waste time running
download scripts.

DevOps is the glue that brings everything together (well maybe that's ROS...)
