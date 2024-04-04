#include<stdio.h>
int main()
{
    struct s{
        int a;
        int b;
        char c;
    };

    union u{
        int x;
        int y;
        char z;
    };

    printf("Size of structure: %u",sizeof(struct s));
    printf("\nSize of union: %u",sizeof(union u));
    return 0;
}