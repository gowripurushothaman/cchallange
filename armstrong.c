#include<stdio.h>
#include<conio.h>
int main()
{
int number,sum=0,rem=0,cube=0,count=0,temp,a;
printf("enter the value");
scanf("%d",&number);
temp=number;
a=number;
while(a!=0)
{
a=a/10;
++count;
}
while(number!=0)
{
rem=number%10;
cube=pow(rem,count);
sum=sum+cube;
number=number/10;
}
if(temp==sum)
printf("%d is armstrong number",sum);
else
printf("%d is not armstrong number",sum);
return 0;
}
