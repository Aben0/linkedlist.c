#include<stdio.h>
#include<conio.h>
int main()
{
int a[20],i,j,n,temp;
clrscr();
printf("enter limit of the array");
scanf("%d",&n);
printf("enter the elements");
for(i=1;i<=n;i++)
{
scanf("%d",&a[i]);
}
printf("\n ARRAY before sorting\n");
for(i=1;i<=n;i++)
{
printf("%d\t",a[i]);
}
for(j=1;j<=n;j++)
{
for(i=1;i<=n-j;i++)
{
if(a[i]>a[i+1])
{
temp=a[i];
a[i]=a[i+1];
a[i+1]=temp;
}
}
}
printf("\n ARRAY after sorting \n");
for(i=1;i<=n;i++)
{
printf("%d\t",a[i]);
}
getch();
}