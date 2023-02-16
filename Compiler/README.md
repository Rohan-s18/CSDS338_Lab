# Compiler
## Author: Rohan Singh
This directory contains the source for the Compiler that we made on the CSDS 338 Lab on (2/15/23). This Compiler isn't designed to be very efficient, but is rather a simple compiler project to demonstrate how compiler design works. 

This compiler is for a language that follows the BASIC syntax https://en.wikipedia.org/wiki/BASIC 

## Using this compiler
To use this compiler, you first have to change the *build.sh* permissions, by:  
  > chmod 777 build.sh

After that, you may write code in a **.snpy** file, you may use *hello.snpy* or *average.snpy* as source code.  


Now, to compile it, run the following command:  
  > ./build.sh <filename\>.snpy
This command will compile the code into a C and Executable file. 

You can then run the compiled code by running this command:  
  > ./<filename\>

## Contact
If you have any questions, please contact me:  
rxs1182@case.edu  
rohan.b.singh54@gmail.com

