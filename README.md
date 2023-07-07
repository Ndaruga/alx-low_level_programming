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
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 main_file.c other_files.c -o a
```
This command is used to compile the C files `main_file.c` and `other_files.c` into an executable file called `a`.
<br>
Once the above command has executed successfully, an `executable file` appear on your folder. Now use the following command to execute
```
./a
```

The flags `-Wall`, `-pedantic`, `-Werror`, and `-Wextra` are used to enable warning messages in the compiler. The flag `-std=gnu89` specifies that the C standard to use is `C89`.
<br>
The files `{main_file.c}` and `{other_file.c}` are C source code files that contain the code for the program.
<br>
<br>
Here is a breakdown of the meaning of each flag:

* `-Wall` enables all warning messages.<br>
* `-pedantic` enables all warnings that are not strictly required by the C standard, but are considered to be good coding practice. E.g. if you use a variable that is not initialized, or a type cast that is not necessary.<br>
* `-Werror` turns all warnings into errors.<br>
* `-Wextra` enables additional warnings that are not enabled by default.<br>
* `-std=gnu89` specifies that the C standard to use is C89.<br>


### Memory Leaks
>A memory leak is a type of resource leak that occurs when a program fails to release memory that it no longer needs. This can happen when a program allocates memory for an object, but then fails to deallocate the memory when the object is no longer needed.
>

The command used with GCC to check for memory leaks is `-fsanitize=leak`. This flag enables the AddressSanitizer tool, which can detect memory leaks and other memory errors.

To use the `-fsanitize=leak` flag, you need to compile your code with the `gcc` compiler. For example, to compile a C file called `my_program.c` with the `-fsanitize=leak` flag, you would use the following command:

```
gcc -fsanitize=leak my_program.c -o my_program
```

Once you have compiled your code, you can run it with the `valgrind` tool to check for memory leaks. For example, to run the `my_program` executable with `valgrind`, you would use the following command:

```
valgrind --tool=memcheck --leak-check=yes ./my_program
```

If there are any memory leaks in your code, `valgrind` will report them.

Here are some other flags that can be used with `-fsanitize=leak`:

* `-fsanitize-address` enables AddressSanitizer to detect other memory errors, such as use-after-free and double-free errors.
* `-fsanitize-leak-check-heuristic` enables AddressSanitizer to use heuristics to detect memory leaks that are not otherwise detected.
* `-fsanitize-leak-check-after=N` specifies the number of blocks that AddressSanitizer should check for leaks after the program terminates.


### Environment
* Language: C
* OS: Ubuntu 14.04 LTS
* Compiler: gcc 4.8.4
* Style guidelines: [Betty style](https://github.com/holbertonschool/Betty/wiki)
