# Week 7
## Author: Rohan Singh  

Hey There!   
This week we will be looking back at Bash Scripting, so if you missed that, please check out Week 4. We will also talk about 
the AWK Command and using it in scripts. Awk is mostly used for pattern scanning and processing. It searches one or more files to see if they contain lines that matches with the specified patterns and then perform the associated actions. 

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


