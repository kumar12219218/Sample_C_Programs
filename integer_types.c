#include<stdio.h>
#include<limits.h>
int main()
{
short int x=SHRT_MIN;
short int y=SHRT_MAX;
printf(" range of short integers is %d to %d",x,y);
unsigned short int X=0;
unsigned short int Y=USHRT_MAX;
printf("range of unsigned short integer is from %d to %d ",X,Y);
int a=INT_MIN;
int b=INT_MAX;
printf("\nrange of integer is %d to %d ",a,b);
unsigned int c=0;
unsigned int d=UINT_MAX;
printf("\nrange of unsigned integers is from %u to %u",c,d);
return 0;
}