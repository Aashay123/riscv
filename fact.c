#include<stdio.h>
int fact(int n)
{
if n==1
return 0;
else return n*fact(n-1); 
int main()
{
printf("Enter n:\n");
scanf("%d",&n);
printf("fact is %d",fact(n));
return 0;
}
