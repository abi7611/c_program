#include<stdio.h>
int main()
{
  int a=45;
  int*ptr;
  printf("%d\n",a);
  printf("%d\n",&a);
  printf("%d\n",ptr);
  printf("%d\n",*ptr);
  printf("%d\n",*(&a));
  printf("%d\n",&ptr);

}
