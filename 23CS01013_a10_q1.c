#include<stdio.h>
int main()
{
    union Data{
        int x;
        float y;
        char c;
    } d;

    d.x=5;
    printf("Integer stored in union: %d",d.x);
    d.y=2.35;
    printf("\nFloat stored in union: %f",d.y); //Trying to access the integer value in union now gives error
    d.c='a';
    printf("\nCharacter stored in union: %c",d.c);           
    return 0;

}