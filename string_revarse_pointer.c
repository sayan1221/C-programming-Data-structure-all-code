#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int stpoint(char* st){
int i,l=0;
char * xy,* z,ch[100];
xy=st;
z=ch;
for(i=0;xy[i]!='\0';i++){
l++;
}
  // printf("%s",xy);

for(i=0;i<=l;i++){
z[i]=xy[l-i-1];
}
z[i]='\0';

// printf("Address of string :%s\n",z);
printf("Reverse word : %s",z);
return 0;
}

int main(){

int *xy,*z;
char st[100],s[100];
printf("Enter a string :");
gets(st);
stpoint(&st);

return 0;
}