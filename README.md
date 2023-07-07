# ALX LOW LEVEL PROGRAMMING IN C

## Low Level Programming :octocat:
> Each folder in this repository illustrates an essential concept of programming,
> specific to the C programming language. The file names reference the concepts
> (i.e. pointers, recursion, malloc, free, structures, function pointers, variadic
> functions, linked lists, etc) Inside these folders are files containing bash
> scripts and functions around that particular concept. Some functions are
> re-creations of functions found in the C standard libraries (i.e. _strcpy, _strlen,
> etc).

### Execution

To compile and run the `C` files, the following command is used 
```
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 {main_file.c} {other_files.c} -o {executable_file}
```
This command is used to compile the C files `{main_file.c}` and `{other_files.c}` into an executable file called `{executable_file}`.
<br>
Once the above command has executed successfully, an `{executable_file}` appear on your folder. Now use the following command to execute
```
./{executable_file}
```

The flags `-Wall`, `-pedantic`, `-Werror`, and `-Wextra` are used to enable warning messages in the compiler. The flag `-std=gnu89` specifies that the C standard to use is `C89`.
<br>
The files `{main_file.c}` and `{other_file.c}` are C source code files that contain the code for the program.
<br>
<br>
Here is a breakdown of the meaning of each flag:

>`-Wall` enables all warning messages.<br>
>`-pedantic` enables all warnings that are considered to be pedantic.<br>
>`-Werror` turns all warnings into errors.<br>
>`-Wextra` enables additional warnings that are not enabled by default.<br>
>`-std=gnu89` specifies that the C standard to use is C89.<br>

### Environment
* Language: C
* OS: Ubuntu 14.04 LTS
* Compiler: gcc 4.8.4
* Style guidelines: [Betty style](https://github.com/holbertonschool/Betty/wiki)
