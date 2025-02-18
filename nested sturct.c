#include<stdio.h>
struct child
{
    int a;
    char s;
};
struct parent
{
    int b;
    struct child c1;
};
int main()
{
    struct parent p1 = {12,34,'J'};
    printf("Value of b = %d\n",p1.b);
    printf("Value of b = %d\n",p1.c1.a);
    printf("Value of b = %c\n",p1.c1.s);
}
