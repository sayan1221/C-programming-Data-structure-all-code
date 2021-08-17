/* 1. enter size then input no:
2. enter new size then reinput no: 
*/

#include<stdio.h>
int main(){
int *p,n,i;
printf("Enter size:");
scanf("%d",&n);
p=(int*)calloc(n,sizeof(int));
printf("Enter no : ");
for(i=0;i<n;i++){
scanf("%d",&p[i]);
}
for(i=0;i<n;i++){
printf("The value of %d = %d\n",i,p[i]);
//printf("Address %d :",*p[i]);
}
free(p);


printf("Enter new size:");
scanf("%d",&n);
p=(int*)realloc(p,sizeof(int));
printf("Enter no : ");
for(i=0;i<n;i++){
scanf("%d",&p[i]);
}
for(i=0;i<n;i++){
printf("The value of %d = %d\n",i,p[i]);
}
free(p);

return 0;
}
    