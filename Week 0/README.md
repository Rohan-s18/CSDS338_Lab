# Week 0
## Author: Rohan Singh
Hey There!  
Welcome to Operating Systems!  
I hope you had a great winter break and got osme well-deserved rest.  
The objective of this module is to set you up for the course by helping you connect to the EECSLab server using through an SSH and introducing you to the Linux Command Line Interface (CLI).     

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

## Introduction to the Linux CLI
Unlike the devices that you use on a regular basis using a GUI (grpahical user-interface), for the purposes of this class we will be using a CLI (Command Line Interface), which in simple words processes conmands through text rather than movements (like mouse clicks/scrolling etc.).   
Once you are connected to the eecslab server try running some of these basic Linux Commands:  
  - **uname**  
    This command gives us the username.  
  - **hostname**  
    This command gives you the name of the host.  
  - **id**  
  - **echo \<something\>**  
    This command prints out whatever is in the "something", it could be plain string or something returned by a process.  
  - **history \<num\>**  
    This command gives us the history of the last "num" commands, the argument num must be an integer.  
  - **type \<command\>**  
    This command gives us the location of the the given command (such as date/ps etc).  
    
