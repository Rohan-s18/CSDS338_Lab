//  Author: Rohan Singh
//  12/28/2022
//  This file will demonstrate how Strudts work and how they can be used in C


//  Imports
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


//  This is an example of a struct in C, Structs help us hold data of any kind
//  The struct 'Employee' will hold a string name, int age and string id
struct Employee{

    //Field for name, age and id
    char* name;
    int age;
    char* id;

    //This will be exmplained later
    char* superpower;
};


//  This method will print the employee id card using a Struct
void print_employee_card(struct Employee employee);

//  This method will print the employee id card using a reference to a Struct
void print_employee_ptr_card(struct Employee* employee_ptr);

//  This method will change the superpower of the Employee
void change_superpower(struct Employee employee, char* superpower);

//  This method will change the superpower for the reference to the Employee
void change_ptr_superpower(struct Employee* employee, char* superpower);



//  Main method
int main(){

    //Initializing a Struct
    struct Employee zoe = {.name = "Zoe", .age = 19, .id = "zkw3"};
    struct Employee ashraf = {.name = "Ashraf", .age = 20, .id = "aei10"};

    //Using the print employee card method
    print_employee_card(ashraf);

    //Using the print employee card method using references
    print_employee_ptr_card(&ashraf);

    //Using the change_superpower method
    change_superpower(zoe,"High Fives");
    printf("Zoe's superpower is: %s\n",zoe.superpower);

    //You might have noticed that Zoe's superpower is NULL, this is because in C copies of objects are given as arguments
    //Hence to actually modify the object you must provide a reference to it

    //Using the change_ptr_superpower method
    change_ptr_superpower(&ashraf, "Taking Naps");
    printf("Ashraf's superpower is: %s\n",ashraf.superpower);

    //You can see Ashraf's superpower because we provided the reference to the object hence, the object itself could be acessed
    
    change_ptr_superpower(&zoe,"High Fives");
    printf("Zoe's superpower is: %s\n",zoe.superpower);


    return 0;

}


//  Implementing the print employee card method
void print_employee_card(struct Employee employee){

    //You can access the data from the Employee instance using the "." operator
    char* str_name = employee.name;
    char* str_id = employee.id;
    int age = employee.age;

    //Printing the data
    printf("Employee details:\n\tName: %s\n\tId: %s\n\tAge: %d\n\n",str_name,str_id,age);

}


//  Implementing the print employee ptr card method
void print_employee_ptr_card(struct Employee* employee_ptr){

    //To access the the data from the refered object you can use the "*"" followed by the "." operators
    char* str_name = (*employee_ptr).name;

    //An equivalent and widely used shortcut for this is the "->" operator 
    char* str_id = employee_ptr->id;
    int age = employee_ptr->age;

    //Printing the data
    printf("Employee details:\n\tName: %s\n\tId: %s\n\tAge: %d\n\n",str_name,str_id,age);

}


//  Impelementing the change superpower method
void change_superpower (struct Employee employee, char* superpower){

    //Accessing the field and changing the superpower to the provided one
    employee.superpower = superpower;

}


//  Implementing the pointer version of the superpower method
void change_ptr_superpower (struct Employee* employee, char* superpower){

    //Accessing the field and changing the superpower to the provided one
    employee->superpower = superpower;

}






