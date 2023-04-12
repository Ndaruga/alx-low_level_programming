# Automatic and Dynamic Memory allocation (malloc) and free

Each program running in a computer, needs some memory to store their inputs as well as outputs.<br>
The <h6>malloc</h6> function in `C` is used to allocate memory to programs during execution. Malloc returns a `pointer` to the reserved space.<br>
When the program execution is completed, you should `free` the memory to return the "borrowed" memory block to the operating system.


## Automatic allocation
When Local variables are declared in `C` then the program automatically takes care of the <strong>memory allocation</strong><br>
Automatic allocation happens when you declare an automatic variable, such as a function argument or a local variable. <br>The space for an automatic variable is allocated when the compound statement containing the declaration is entered, and is freed when that compound statement is exited.

## Dynamic allocation
Dynamic memory allocation is a technique in which programs determine as they are running where to store some information. You need dynamic allocation when the amount of memory you need, or how long you continue to need it, depends on factors that are not known before the program runs.

For example, you may need a block to store a line read from an input file; since there is no limit to how long a line can be, you must allocate the memory dynamically and make it dynamically larger as you read more of the line.

