# C - Preprocessor

## The compilation process

Compilation is the process of converting a souce code to object code. <br>
The compilation is divided into 4 steps
<li>Pre-processing</li>
<li>Compiling</li>
<li>Assembly</li>
<li>Linking</li>



### Pre-processor
Takes the source code as input, and removes all the commments in the source code.
It then checks for preprocessor directives eg `<stdio.h>` and inerprets them by replacing them with the file's content. This is also called <strong>Expanding the code</strong><br>

### Compiler
Preprocessed code is passed to the compiller to generate an <strong>assembly code</strong>.<br>
Assembly code is a simple English-type language used to write low level instructions. <br>
The compiler parses the source code in one go and tells the user about any syntax errors or warnings in the source code through the terminal window.<br>

### Assembler
The assembly code is converted into <strong>Object code </strong> by the assembler, with the same name as the source code file but with a different extension.<br>
<li>In DOS (Disk Operating system), the extension is `.obj`</li>
<li>In UNIX the extension is `.o`.</li>

### Linker
This is the process of including the library files into the program.<br>
Mainly, all programs written in c use library functions. These library functions are precompiled and the object code stored in a `.lib` or `.a` extension.
The output of the linker is the `.exe` file.

## Macros
The other major use of the preprocessor is to `define macros`.<br>
