#include <stdio.h> 
int main() { 
int n,i,s=0,r=0;

printf("Enter size:");
scanf("%d",&n);
while(n!=0){
s=s+1;
n=n/10;
}
for(i=1;i<=s;i++){
if(i%2!=0){
r++;
}
}
printf("odd position %d",r);
return 0;
}
