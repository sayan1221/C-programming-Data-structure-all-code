#include <stdio.h> 
int main() { 
int n,i,s=0,r=0,sum=0;
int a[100];
printf("Enter size:");
scanf("%d",&n);
printf("Enter no:\n");
for(i=1;i<n;i++){
scanf(" %d\n ",&a[i]);
}

for(i=1;i<=n;i++){
if(i%2!=0){
s++;
sum+=a[i];
printf("odd position %d\n no:%d\n",i,a[i]);
}
}

printf("odd position no count :%d\n",s);
printf("odd position no sum :%d\n",sum);

return 0;
}
