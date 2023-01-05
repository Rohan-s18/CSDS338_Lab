# Week 8
## Author: Rohan Singh

Hey there!  
In this weeks Lab we will explore Process Cloning, and we will demonstrate using C system calls to fork() and exec().  

The fork() system call creates a child process which is an exact copy of the process whose thread called it. The address space of the child contains copies of the parent's text, BSS, data, dynamic region, and stack. However, since the text is read-only, it's actually shared between the parent and child. The System Call returns Zero in the child and the child's process ID (PID) in the parent. This is one way to see if you are in the parent or child.  

The exec() call replaces the entire contents of the current process's address space with the new process: the Text, BSS, Data region is replaced with that of the new program. The contents of the old process are lost after calls to exec(). 

## Writing and Compiling code in C
Here is a brief description on how to write/compile/run the code for your lab: 
  - **Connecting to the EECSLab server:** Instructions for this are on Canvas and will be demonstrated in class. For this lab you need to connect to the EECSLab server.    
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

## Contact
If you face any problems during this lab, you may come to my office hours, meet me in class or drop me an email at:  
rxs1182@case.edu  
rohan.b.singh54@gmail.com