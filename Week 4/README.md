# Week 4 
## Author: Rohan Singh  

Hello there!  
In this weeks lab we will talk about BASH. The Bourne Again SHell (BASH) is the GNU (GNU stands for Gnu's Not Unix) Projects Shell. BASH is a POSIX compatible shell that uses most of the features of the C Shell (csh) and Korn Shell (ksh). Bash is used in most UNIX-like operating systems like Linux, MacOS (Not Windows).  

Bash Scripts are kinda useful, especially if you want to automate repetitive tasks that are just plain annoying to do everytime. If you use a Mac or Linux, this might be pretty helpful for you personally.  

In this weeks module, we will only cover the basics of writing Bash Scripts (nothing too fancy). 


## Writing Bash Scripts
Here is a brief description on how to write/compile/run the code for your lab: 
  - **Connecting to the EECSLab server:** Instructions for this are on Canvas and will be demonstrated in class. For this lab you may run the code locally, but in future labs you may want to connect to the EECSLab server.    
  - **Opening VIM:** You should write your code using VIM, this is how you would use it-
    > vim filename.extenstion (For bash Scripts the extension is **.sh**)   
  - **Editing the file:** Once you open the file using vim, to enter the edit mode in VIM, you will have to do the following-  
    > :set paste <enter/return>  
    > i <enter/return>    
  - **Adding the path to the bash:** The **Top of each bash script** must start with the location of the bash interpreter. This line is:  
    > #! /path/to/bash/interpreter  

    You can get the path by using the following command:  
    > type bash  

    For the EECSLab server this line should be:  
    > #! /usr/bin/bash  
  - **Leaving the file:** Once you have edited the file, you can exit vim using-  
    > <esc>  
    > :wq  
  - **Adding permisions to the Script:** After writing your script you have to add permisions to run the script by using the following command-    
    > chmod 777 filename.sh    
  - **Running the script:** To run the script you just wrote, you should-  
    > ./filename.sh  

    or 
    > bash filename.sh    

If you are stuck on any of these steps, please check out the contact section to reach out to me.  

## Files
This weeks lab modules will demonstrate how write bash scripts.  
**Note:** You should look at them in the order in which they are listed here (Not the order in which they are in the directory).  

Files:
  - **greeting.sh**: This script illustrates the echo command.  
  - **vargreeting.sh.c:** This script demonstrates the declaration and usage of variables.  
  - **copy.sh:** This script demonstrates the cp command.  
  - **procmap.sh:** This program demonstrates how to use the ">" command and getting pids.    
  - **conditional.sh:** This script demonstrates how to use conditional statements.  
  - **logic.sh:** This script demonstrates how to use logical functions (and/or).  
  - **factorial.sh:** This program demonstrates how to use pointers to use while loops.  



## Contact
If you face any problems during this lab, you may come to my office hours, meet me in class or drop me an email at:  
rxs1182@case.edu  
rohan.b.singh54@gmail.com
