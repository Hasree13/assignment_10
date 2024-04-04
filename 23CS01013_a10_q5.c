#include<stdio.h>
int main(){

    enum PayType{HOURLY, SALARY};
    enum PayType e1,e2;
    union EmpDetails{
        float hwage;
        double sal;
        enum PayType e1;
    };

    struct Employee{
        int empid;
        char name[50];
        enum PayType e2;
        union EmpDetails d;
    };

    struct Employee e={12,"Rita",0,{500.12}};
    printf("Emplyee details:\n");
    printf("ID: %d",e.empid);
    printf("\nName: %s",e.name);
    if (e.e2==0)
    printf("\nHourly wage: %.2f",e.d.hwage);
    else
    printf("\nSalary: %.6ld",e.d.sal);
    return 0;
}