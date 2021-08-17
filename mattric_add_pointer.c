#include<stdio.h>
int main() {
//  int a[10][10],b[10][10],s[10][10];
int r,c,j,i;
int *a,*b,*s;

printf ("enter row and column:");
scanf ("%d%d",&r,&c);

a=(int*)calloc(r+c,sizeof(int));
 b=(int*)calloc(r+c,sizeof(int));
 s=(int*)calloc(r+c,sizeof(int));

printf("\n Enter the value at 1st matrix:\n");
for (i=0;i<r;i++){
for (j=0;j<c;j++){
scanf("%d",(a+i+j));
}
}

printf ("Enter the value 2nd matrix:\n");
for (i=0;i<r;i++){
for (j=0;j<c;j++){
scanf("%d",(b+i+j));
}
}
for (i=0;i<r;i++){
for (j=0;j<c;j++){
*(s+i+j)=*(a+i+j)+*(b+i+j);
}
}
printf("\n Display result matrix :\n");
for (i=0;i<r;i++){
for (j=0;j<c;j++){
printf ("%d\t",*(s+i+j));
}
printf("\n");
}
return 0;
}


    