#include<stdio.h>
#include<conio.h>
void main()
{
int n;
char value;
printf("enter testcase");
scanf("%d",&n);
while(n>0)
{
printf("enter value");
scanf("%c",&value);
if(value>='A'&&value<='Z'||value>='a'&&vlaue<='z')
{
printf("alphabet");
}
else
{
printf("not");
}
n--;
}
getch();
}
