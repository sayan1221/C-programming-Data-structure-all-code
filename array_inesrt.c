#include<stdio.h>
#include<conio.h>
void main()
{
 int k,p,i,a[20],n;
 clrscr();
 printf("\n Enter the size of the aray\t");
 scanf("%d",&n);
 printf("\n\n Enter the no. of elements one by one \t");
 for(i=0;i<n;i++)
 {
 scanf("%d",&a[i]);
 }
 printf("\n\n Enter the no. to be inserted\t");
 scanf("%d",&k);
 printf("\n\n Enter the position of insertion\t");
 scanf("%d",&p);
 for(i=n-1;i>=p;i--)
 {
a[i+1]=a[i];
if(i==p)
 {
a[i]=k;
}
 }
 printf("\n The array list after insertion are\t");
 for(i=0;i<=n;i++)
 {
printf(" %d ",a[i]);
 }
 getch();
 }
