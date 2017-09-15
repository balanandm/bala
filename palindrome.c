#include<stdio.h>
#include<conio.h>
void main()
{
int n,reverseinteger=0,remaninder,oi;
clrscr();
printf("enter an integer:");
scanf("%d",&n);
oi=n;
while(n!=0)
{
remainder=n%10;
reverseinteger=reverseinteger*10+remainder;
n/=10;
}
if(oi==reverseinteger)
{
printf("%d is palindrome",oi);
}
else
{
printf("%d is not a palindrome",oi);
}
getch();
}
