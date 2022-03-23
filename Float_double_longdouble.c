#include<stdio.h>
int main()
{
  int a=5.0/6.0;
  float b=5.0/6.0;
  double c=5.0/6.0;
  long double d=5.0/6.0;
  printf("%d",a);
  printf("\n%.2f",b);
  printf("\n%.5lf",c);
  printf("\n%.Lf",d);
  return 0;
}