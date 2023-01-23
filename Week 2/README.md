# Week 2
## Author: Rohan Singh
Hey There!  
Welcome to Week 2 of the CSDS 338 Lab. This week we will learn about the basics of C. I will start off by explaining what C is, followed by instructions on how to use VIM to code on the EECSLab server, and then finally you can start off with C. Syntactically speaking, the basics of C are very easy to grasp if you are familiar with Java and it will be extemely easy if you already know C++  

## What is C?
C is a procedural programming language that provides low-level access to the features of the system, such as memory, kernels etcetera. Lets break that down one-by-one, C is a procedural programming language, which means that it doesn't have objects (so no OOP in C). Secondly, C being a low-level programming language means that C can be used directly to access hardware. So you can't create web applications using C, but you can create smaller embedded systems using C.  

You might be thinking, why do we care about C? like most jobs don't require you to know C. C is a relatively simple language with its core philosophy being that the programmer is smarter than the language. You might think that the 2 things that I just mentioned show C is a bad light, but it does the exact opposite, it also means that C has no runtime dependencies and that C can be used to make other languages (like Java, C++, Python etc.), giving it the title of the mother of all languages.  

 As mentioned before, C gives you direct access to various parts of a machine that higher level programming languages like Java or C# cannot. Which means that all current operating systems are written in C. Attempts have been made to write operating systems in object-oriented languages—for example, Sun's Spring OS was written in C++, and in the mid-'90s.  


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


## Files
This weeks Lab module contains the following files to demonstrate some of the basics of C. You should take a look at them and try to code them out by yourself and then refer to the files again if you get stuck.  
This weeks files are:  
  - **helloworld.c:** This file contains simple Hello World code in C.  
  - **flowstatements.c:** This file will be used to demonstrate simple flow statements in C.  
  - **arithmetic.c:** This file is completely empty, follow the instructions to try out some basic C programming.  
  - **circulararray.c:** This file includes the implementation of the Circular Array (aka circular queue) in C.  
  - **Live Demo: prime.c** This file contains code for finding nprime numbers in C. This code is slightly different from the rest, so  I will be demonstrating them in my office hours.   

## Group Task
With your group members, you will have to write C code that will replicate the functionality of the demonstrated code. You are free to use any of the C-libraries that you want. Try thinking about the logic in Java (if you are more comfortable in Java than you are in C), and then try translating the code from Java to C.


## Contact
Like all weeks, I will be going through the Lab content in my office hours of the same week, so if you have any questions just let me know over there. Additionally you can send me an email at:  
rxs1182@case.edu  
rohan.b.singh54@gmail.com  



