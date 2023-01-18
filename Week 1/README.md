# Week 1
## Author: Rohan Singh
Hey There!  
Welcome to your first (real) module for the CSDS 338 Lab. In this module we will be exploring some really cool Linux commands and understanding what they do. For the purposes of this class, understanding how Linux works is really integral to understand how most (if not all) POSIX (or equivalent) Operating Systems work. We'll also look at some commonly used OS Jargon, so that you understand what stuff like GNU, UNIX, POSIX etc. actually mean.  

## Connecting to the EECSLab server
Please follow the given steps to connect to the eecslab server:  
  - Connect your device to **CaseWireless**.  
  - If you are using a Windows machine open Command Prompt or Windows Powershell. If you are using a Mac, open the Terminal.  
  - Paste the following command on your terminal/command prompt (use your case id):  
    > ssh *yourcaseid*@eecslab-1.case.edu  
  - Keep your cwru password handy for this step: You will be provided a prompt where you will have to type out your case password.  
  - You should be all set!  
  - Write the following command:  
    > whoami  

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

## Cool Linux Commands
If you haven't already checked the basic commands in the Week 0 module, please check those out, because we will getting into more advanced stuff now.  

### This is a cheat sheet for the basic Linux File/Directory Structure commands:  
  - **cd \<dirname\>**  
    Changes current directory to dirname.    
  - **cd ..**                   
    Goes back one step in the directory tree.    
  - **pwd**  
    Prints the name (and path) to the current working directory.  
  - **cd**                     
    Goes back to the home directory.    
  - **ls -option**  
    Prints out the list of files of the current directory, you can try out options like "-l", "-al" etc.
  - **mkdir \<dirname\>**       
    Creates a directory with the given name.    
  - **pwd**  
    Prints out the current working directory.  
  - **cat \<filename\>**  
    Prints out the content of a file
  - **cp -option \<source\> \<destination\>**  
    Copies a file/folder form source to destination.    
  - **rm -option \<file/folder>**  
    Removes the given file or directory from the system (use option "-r") to remove a directory.  
  - **mv old_filename new_filename**  
    Renames the filename form old_filename to new_filename.  
  - **grep regex file**  
    grep or global regular expression print, prints out the lines which contains the regex pattern.  
  - **lsb_release -a**  
    Linux Distro and release info.  
    
### This is a cheatsheet for basic system information for Linux:
  - **ps**  
    This command Lists out all of the currently running processes.  
  - **cat /proc/pid/maps**  
    Opens the proc map for the process with the given pid (process id).   
  - **top**  
    This command displays CPU and Memory utilization for the system.  
  - **atop**  
    This command displays CPU and Memory utilization for the system.  

### Steam Locomotive
This is my personal favourite command in Linux!  
For this you will first have to:  
  > sudo apt install sl 
  
You will have to out your case password in the prompt.   
After installation, type:  
  > sl

## Operating Systems Jargon
There are a lot of commonly used words in OS that are commonly tossed around by people, I'll try my best to explain some of them.  

### Components of Operating Systems and Computers
  - **Kernel:** It is the link between user-applications and Hardware/Drivers. It is the innermost layer of the OS.  
  - **Shell:** It is the link between users and the OS. It is the outermost layer of the OS.  
  - **Bash:** Bourne-Again Shell, it is a commonly used shell.  
  - **I/O Devices:** Input-Output devices.  
  - **Memory:** aka RAM/Main Memory, it is used to store information for immediate use.   
  - **Storage:** aka Secondary Storage, it is used to store data and programs for later retrieval.  
  - **Cache:** The temporary memory that CPUs have (it is very small).  
  - **CPU:** aka Processor, it is the electronic circuitry that executes instructions comprising a computer program.   
  - **GPU:** Graphics Processing Unit is a specialized processor designed to accelerate graphics rendering.  
  
### Types of Operating Systems (and related stuff)
  - **UNIX:** Multitasking OS developed by Bell Labs developed as a minicomputer operating system.  
  - **UNIX family:** It is a group of operating systems that are derived from the UNIX OS.  
  - **UNIX like:** It is a group of operating systems that are not derived from UNIX directly, but behaves like one.  
  - **POSIX:** Portable Operating System Interface, it is a bunch of standards for maintaining compatibility between operating systems.  
  - **GNU:** Short for GNUs Not Unix, it is a collection of open source software for OS/ Compiler development.  
  - **Linux:** Aka GNU OS or GNU/Linux is a UNIX-like operating system based on the Linux Kernel.    
  - **MacOS:** It is a UNIX operating system developed by apple.   
  - **Windows:** Microsoft's commercial Operating System.   


## Contact 
Like all weeks, I will be going through the Lab content in my office hours of the same week, so if you have any questions just let me know over there. Additionally you can send me an email at:  
rxs1182@case.edu  
rohan.b.singh54@gmail.com  

