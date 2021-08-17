//serise 1+5+9+13
#include<stdio.h>
int main(){
int n=1,no=0,i,s=1;
printf("Enter size:");
scanf("%d",&n);
for(i=1;i<=n;i++){
printf("Series %d\n",s);
no=no+s;
s=s+4;
}
printf("Series total %d\n",no);
return 0;
}
