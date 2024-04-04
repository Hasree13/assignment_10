#include<stdio.h>
int main(){
    union EmpDetails{
        float hwage;
        double sal;
    };

    struct Employee{
        int empid;
        char name[50];
        union EmpDetails d;
    };

    struct Employee e={12,"Rita",{500.12}};
    printf("Emplyee details:\n");
    printf("ID: %d",e.empid);
    printf("\nName: %s",e.name);
    printf("\nHourly wage: %.2f",e.d.hwage);
    return 0;
}