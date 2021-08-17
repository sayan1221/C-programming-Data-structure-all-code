#include <stdio.h>
int main (){
int n=5,i,j;
for(i=1;i<=n;i++){
for(j=1;j<=n;j++){
if(i==1 ||j==1 ||j==4 ||j==2 ||i==n ||j==n){
printf("s");
}
else if(i==n/2+1){
printf("o");
}
else{
printf("s");
}
}
printf("\n");
}

return 0;
}
    