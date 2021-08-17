#include<stdio.h>
typedef struct employe {
int id;
int salary;
char name[50];
}emp;
void init (emp e[],int n){
int i;
for (i=0;i<n;i++){
printf("Enter id:");
scanf("%d",&e[i].id);
printf("Enter name:");
scanf("%s",&e[i].name);
printf("Enter salary:");
scanf("%d",&e[i].salary);
}
}
int display(emp e[],int n){
int i;
for(i=0;i<n;i++){
printf("id:%d\n Name:%s\n salary:%d\n",e[i].id,e[i].name,e[i].salary);
}
printf("\n");
}
int maxsalary(emp e[],int n){
int i,max=-1,pos=-1;
for(i=0;i<n;i++){
if(e[i].salary>max){
max=e[i].salary;
pos=i;
}
}
return max;
}
int asceding(emp e[],int n){
int i,j;
emp t;
for(i=0;i<n;i++){
for(j=i+1;j<n;j++){
if(e[i].salary>e[j].salary){
t=e[i];
e[i]=e[j];
e[j]=t;
}
}
}
printf("\t Display salary asceding order \n");
for(i=0;i<n;i++){
printf("%d\n %s\n %d\n",e[i].id,e[i].name,e[i].salary);
printf("\n");
}
return 0;
}
int displaymax(emp e[],int n,int val){
int i;
for (i=0;i<n;i++){
if(e[i].salary==val){
printf("\n \n \t display of the top salary \n id:%d \n Name:%s \n salary:%d",e[i].id,e[i].name,e[i].salary);
}
}
}
int main(){
emp e[100];
int n,mx;
printf("Enter size:");
scanf("%d",&n);
init(e,n);
display(e,n);
mx=maxsalary(e,n);
asceding(e,n);
displaymax(e,n,mx);
return 0;
}



    