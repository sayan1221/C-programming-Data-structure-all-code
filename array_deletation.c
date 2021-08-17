#include<stdio.h>
#include<conio.h>
void main()
{
 int p,i,a[20],n;
 clrscr();
 printf("\n Enter the size of the aray\t");
 scanf("%d",&n);
 printf("\n\n Enter the no. of elements one by one \t");
 for(i=0;i<n;i++)
 {
 scanf("%d",&a[i]);
 }
 printf("\n\n Enter the position of deletion\t");
 scanf("%d",&p);
 for(i=p;i<n;i++)
 {
 a[i]=a[i+1];
 }
 printf("\n The array list after Deletion are\t");
 for(i=0;i<n-1;i++)
 {
 printf("\n%d ",a[i]);
}
 getch();
 }
