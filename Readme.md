## compile & run
- .c .h both are C extenstions. .h is used for definitions.
- we should first compile c code in to machine code using a c compiler.
- I use gcc as a c compile. writing command: `gcc -o compiledname src.c`
- then we can simply run unit executable file.

## includes
- you can not use simplest function `printf()` without includin it.
- in C you first should tell what we need, what we are using, to compiler find the included functions specific place.
- `#include ` is the key word when we want to inlcude something. in Js same can be import.
- `#inlcude <stdio.h>` inlcudes, or make available, visible for the file all the functions from IO header.
- To see where the gcc finds the header file you can run command `gcc -E -x c -v -`
  #include "..." search starts here:
  #include <...> search starts here:
  /usr/lib/gcc/x86_64-linux-gnu/9/include
  /usr/local/include
  /usr/include/x86_64-linux-gnu
  /usr/include

  in my case thats the folders gcc finds the include functions

- we can also inlcude our own files ` #include "./myfile.c" `

## memory
- Before understand static typing it is important to understand how memory allocation works
- for example int [INTEGER] has assigned a 4 bytes (Based on OS it is different). so when we are creating a new variable int we allocate in memory (RAM) 4 bytes where we store the value.
- `int x = 1` we alocate 4 byte in memory and store 1 there [0000 0000 0000 0000 0000 0000 0000 0001]
- Size of the int: 4 bytes
- Size of the float: 4 bytes
- Size of the char: 1 byte -----> char letter = "a" ---> [0000 0000] ---> so C allocates 8 bit memory location to store a characters
- ` sizeof(int)` this way we can see what size memory will be allocated in memory for integer Data types
- we can access the address also in memory.
- Each value has its own address. and values are splited in 8 bits. 1 byte. And each byte has an Address
- `Byte address: ` === `0x7fff2c9adb44` looks exaclty like this.
- in C we can get variable address in memory by using `&`
- `&myVar` returns the addres of the first byte in memory. what it means first byte? as we said integers are stored in 4 bytes. when we try to get address of the variable which stores the variable we get only first byte and we know that next 3 bytes are owned by this variable.
- int num = 982372819383481; this number is stored 00000000 00101010 101010010 01010101010
- `&num == 0x7fff2c9adb44` 0x7fff2c9adb44 shows the location of the first byte and we can just fast way access the memory without taking hole number, hole 4 bytes. because address of the first byte is enough because we know that next 3 bytes is alos owned by this variable.

- to read from pointer a value u should use `*` in front of the variable.
-`*pointer` returns the actual value

## static typing
- static typing means when we are creating a variable we are allocate a memory for the specific data type by decliring the variable TYPE
- ` int x = 10; ` we are sayng to CPU, allocate a memory of size of 4 bytes in this case where it will store value of 10
- Static typing means this : describe variable type.

## types for printef
- Called as string formatters: when you are givving an argument to the printf function you have to specifi how to format.
- ` %d ` === `int`
- ` %c ` === `char`
- ` %s ` === `char* string pointer`
- ` %zu ` === `size_t`
- ` %f ` === `float`
- ` %p ` === `memory address`

## strings
- In C we can store string as a characters of array.
- char strArr[byteslength] and then assign as in each eandex new chars.
- char str[6] and then str[0] = "T"; str[1] = "s"
- to access the value we use type casting of `s`. printf("%s", str); or we can access the addres by using %p
- `printf('Address is %p', str)`
- `printf('Address is %p', &str[0])`
- `printf('Value is %s', str)`

- there is easy way/syntax to not mannually do it and let C does it for us.
- char *myString = "Hello"; but it still is saved as an array of chars.
- we do not have access on length property for example but we can easyly implement by checking the end of the string using `\0`.
- `#include <string.h>` in header file string we can find helpfull function for that strlen() returns size_t %zu

## memory Allocation
- computer architecture is a important topic to unterstand to understand c
- how computer stores for example number.
- int x = 3500; computer stores it in 4 bytes. based on you cpu
- In C we also have access to the address. which is hxidecimal value.
- we can store the as many pointer as we want.
- `int *pointer = &x` it means this variable `pointer` reference to the same value in memory.
- int in front of refenrece/pointer creator `*` (star in front of the variable name means that that is the pinter) and `int` means that the acctual value will be int.

- As a memory allocation place we have `stack` and `heap`
- stack size is small about (8mb) if we allocate stack variables and we overeceed to the 8mb our application throws error.
- But to allocate memory in heap we have no limitatoin. and the way to alloc memory is malloc() function
- `malloc(bytessize)` stdlib gives us the possibility to allocate the memory in `heap`.
-
- In C as we saw we can take Adresses, Store addresses, give Adresses as parameters.
- `void modify(int * n) { }` expects a parameter which will be reference/pointer/adress to the int value.
- we are expecting that on that location in memory, on that adress we have stored a digit and we are gettign its adress as an argument.
- `*n = 1000;` with this line we are changing the actual value on that adress. so if anything else, any other variable was looking/ refered to that location in memory, had reference to that location, they all will see updated value. because adress of for example adress 0x12fe23 looks 1000 value.
- in Javascript for example we can only do it for Objects. Non primitiv data types. because js does not suport adress locations for stack memories. 
- For primitiv values in js we only have access on values but not pointers.
- `let a = 5; let b = a;` it means that b is created as anew variable which looks different adress in memory whic stores 5; a and b are looking diferent adresses
- adress of a and adress of b are different.

## reading arguments
- main function takes `argc` arguments count and `argv` arguments array.
- we are giving it to the process as in Node.js