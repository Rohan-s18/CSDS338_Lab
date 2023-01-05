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

## Cool Linux Commands
If you haven't already checked the basic commands in the Week 0 module, please check those out, because we will getting into more advanced stuff now.  

### This is a cheat sheet for the basic Linux File/Directory Structure commands:  
  - **cd \<dirname\>**  
    Changes directory to dirname.    
  - **cd ..**                   
    Goes back one step in the directory tree.    
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


## Contact 
Like all weeks, I will be going through the Lab content in my office hours of the same week, so if you have any questions just let me know over there. Additionally you can send me an email at:  
rxs1182@case.edu  
rohan.b.singh54@gmail.com  

