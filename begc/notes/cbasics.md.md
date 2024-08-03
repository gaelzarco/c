#BeginningC 
### Compilation

#### A the core of the C programming language exists the multi-file structure of a program.

- C permits separate compilation.
- Programs are split into separate source files and can be compiled independently.
- Idea is that the files will be linked together using any link editor or loader your OS provides.

Compiling is hard-work and this philosophy is meant to speed things up.

- In Linux, GCC is the bundled with the operating system
- Compiling generates an executable
- MacOS's XCode automatically allows you to write code and save it with a .c extension

### Compilation looks like this:

`Source File` -> `Preprocessor` -> `Compiler` -> `Assembler` -> `Linker`

```bash
# Standard gcc compilation
$ gcc <filename>.c -o <filename>
```
- `-Wall` enables all compiler's warning messages
- `-save-temps` saves all temp files
- `-o` specifies output location
- `./<filename>` executes the program

Pre-processing is the first phase
    - Removes comments
    - Expands macros
    - Expands included files
    - Conditional compilation
    - Pre-processed output is store in `filename.i`

## Features

- Procedural Language
    - Executed from top to bottom
    - Code divided into reusable procedures/functions
    - Local and global variables
    - Loops, conditionals, branches to control execution flow
- Low Level
- Modular
- Statically Typed
- General Purpose
- Built-in Operators
- Libraries with rich functions
- Easy to Extend

### Abstract

Has several standard versions, the most common of which are C89/C90, C99, C11, and C18

View the following resource for information regarding these versions: ![C Standard](https://www.geeksforgeeks.org/c-programming-language-standard/?ref=next_article)

C programs are versatile and high-performance and is ideal for systems/embedded programming. All facets of software, networking and graphics make use of C

##### Disadvantages

- Manually allocate memory (can lead to memory safety bugs)
- No Object-Oriented Programming
- No built-in support for concurrency
- High learning curve

### Header Files

```c
// Header in a C program
#include <stdio.h>
```
##### Header files begin with the extension .h which contain C function declarations and macro definitions that are shared between source files.

Lines that begin with `#` are processed by a __preprocessor__ 
    - __Preprocessors__ are programs invoked by the C compiler.
    - In the example above, the preprocessor copies the preprocessed code of `stdio.h` into our file.
    - __.h files are called header files__ 
    - Other common header files:
        - stddef.h: Useful types and macros
        - stdint.h: Exact width integer types
        - stdio.h: Core input and output funtions
        - stdlib.h: Numeric conversion functions, pseudo-random number generator, and mem alloc
        - string.h: String handling functions
        - math.h: Common math functions

```c #include ``` is known as a directive. It tells the compiler for include a file. What follows after that is the file we wish to include

### Statements

##### Statements in C are always terminated with semicolons.

##### The return statement type depends on the function return type. ```c return 0; ``` typically means successful execution
