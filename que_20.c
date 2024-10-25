//  Write a program of structure for five employee that provides the following information print 
// and display empno, empname, address and age. 

#include <stdio.h>

struct Employee{
    int empno;       
    char empname[20];
    char address[50];
    int age;            
};

int main(){
    struct Employee emp[5];

  
    printf("Enter details for Employees:\n");
    for (int i = 0; i < 5; i++) {
        printf("\nEmployee %d:\n", i + 1);
        
        printf("Enter Emp Number: ");
        scanf("%d", &emp[i].empno);
        
        printf("Enter Emp Name: ");
        scanf(" %[^\n]", emp[i].empname);
        
        printf("Enter Address: ");
        scanf(" %[^\n]", emp[i].address);
        
        printf("Enter Age: ");
        scanf("%d", &emp[i].age);
    }

    
    printf("\nEmployee Details:\n");
    for (int i = 0; i < 5; i++) {
        printf("\nEmployee %d:\n", i + 1);
        printf("Emp Number: %d\n", emp[i].empno);
        printf("Emp Name: %s\n", emp[i].empname);
        printf("Address: %s\n", emp[i].address);
        printf("Age: %d\n", emp[i].age);
    }

    return 0;
}
