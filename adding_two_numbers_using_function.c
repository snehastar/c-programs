#include<stdio.h>
sum(int a,int b); // declaring a function
void main()
{
int a,b;
int c;
printf("Type the values of a and b respectively");
scanf("%d %d",&a,&b);
c=sum(a,b);
printf("The sum of a and b is %d",c);
}

// creation of a function sum
sum(int a,int b)
{
int c;
c=a+b;
return(c);
}
