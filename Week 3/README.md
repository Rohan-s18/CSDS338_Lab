# Week 3 
## Author: Rohan Singh  

Hello there!  
In this weeks lab we will talk about Pointers in C. Pointers are probably the most core concept to understand in C, its probably as important as knowing what classes and objects are in Java. Throughout this lab we will be using pointers in many different places, so it is extremely important that you thoroughly understand pointers.  

Learning C without understanding pointers is like drinking Swiss miss, it is something, but the entire experience is shitty and makes you question the existence of a higher power.  


## Pointers
Pointers are objects that hold the memory address of a variable. Pointers can point to varibales as well as functions. In other words, pointers themselves don't store the value, but rather point to the object storing the value (same thing for pointers to functions).  

In the words of Anthony DeMello: *"When the sage points at the moon, all that the idiot sees is the finger."*

## Writing and Compiling code in C
Here is a brief description on how to write/compile/run the code for your lab: 
  - **Connecting to the EECSLab server:** Instructions for this are on Canvas and will be demonstrated in class. For this lab you may run the code locally, but in future labs you may want to connect to the EECSLab server.    
  - **Opening VIM:** You should write your code using VIM, this is how you would use it-
    > vim filename.extenstion  
  - **Editing the file:** Once you open the file using vim, to enter the edit mode in VIM, you will have to do the following-  
    > :set paste <enter/return>  
    > i <enter/return>    
  - **Leaving the file:** Once you have edited the file, you can exit vim using-  
    > <esc>  
    > :wq  
  - **Compiling the code:** After writing your code you can compile your C code using the following command-  
    > cc filename.c  
  - **Running the compiled code:** To run the code you just comiled in C, you should-  
    > ./a.out  

If you are stuck on any of these steps, please check out the contact section to reach out to me.  

## Files
This weeks lab modules will demonstrate how to work with pointers in C.  
**Note:** You should look at them in the order in which they are listed here (Not the order in which they are in the directory).  

Files:
  - **intro.c**: This program is an introduction to pointers, how to declare them and how to dereference them.  
  - **array_pointers.c:** This program demonstrates the array-pointer equivalence.  
  - **void_pointer.c:** This program demonstrates the use of void pointers in C.  
  - **reference_methods.c:** This program demonstrates how to use references in methods (and also why).  
  - **funct_ptr.c:** This program demonstrates how to use pointers to functions.  



## Contact
If you face any problems during this lab, you may come to my office hours, meet me in class or drop me an email at:  
rxs1182@case.edu  
rohan.b.singh54@gmail.com


































































