//This is a first program in C language. 
// For absolute beginners

#include <stdio.h>
// Telling the compiler to include the standard input output header file before compiling the program.
// anything starting with a # is called a preprocessor directive and is a 
//   command to the compiler to do something before compiling the program.


//main function - where the execution of program begins
int main()
{
    printf("Hello World\n");
      // The printf function prints the string on screen
      // \n adds a new line after the string is printed. 
      // "\n" is called an escape sequence. 

    return 0; 
      // This integer value is returned to the operating system upon program termination
}

/* There are curerntly 2 instructions in the main function. 
  The first one is to print 'Hello World' and a new line.
  The second one is to return 0 to the operating system.

  Here, only one library is used which is stdio.h. 
  This library contains the definition of the printf function. 
  This library is not a part of the C language 
    but is a part of the C standard library.

  There is only one function in this program which is the main function.
  The main function is the entry point of the program and is mandatory for all C programs.
  The execution of the program starts from the main function.



*/