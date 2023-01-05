# Week 6 
## Author: Rohan Singh  

Hello there!  
In this weeks lab we will talk learn about File I/O operations in C. This weeks module is not that much of work and it is also not the most important thing in C, but it is pretty useful for the purpose of this class.  

In all UNIX (and UNIX-based) systems, every bit of system information is stored in Files. This makes Reading/Writing to files 
a pretty useful thing to know in C. So don't think of reading files as just reading text, but also reading something a lot more important. So make sure you look at **proc_map_reader.c**

**Note:** This entire module is completely Linux-based, this will not work in Windows/MacOS. 

There are many ways to read and write files in C, but here specifically we will be reading using File Descriptors, An fd is 
a unique integer that can be used to identify an open file of the process.  

These are some fixed file descriptors for a process:    
  - **stdin:** 0
  - **stdout:** 1
  - **stderr:** 2


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
This weeks lab modules will demonstrate how to work with File I/O in C.  
**Note:** You should look at them in the order in which they are listed here (Not the order in which they are in the directory).  

Files:
  - **open_file.c**: This program is an introduction to reading files in C using File Descriptors.  
  - **read_bacnkwards.c:** Same as the last program but backwards.      
  - **proc_map_reader.c:** This program is probably the most important one, because we will be opening a Linux system file
   "/proc/self/maps" file.  
   **Note:** You will have to change the save filepath for this program.     


## Contact
If you face any problems during this lab, you may come to my office hours, meet me in class or drop me an email at:  
rxs1182@case.edu  
rohan.b.singh54@gmail.com