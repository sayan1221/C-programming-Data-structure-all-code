#include<stdio.h>
#define max 100
int top=-1;
int data[max];
void push(int);
int pop();
void display();


main(){
int ch,elem,p;
while(1){
printf("\n1.push");
printf("\n2.pop");
printf("\n3.display");
printf("\n4.exit");
printf("Enter your choice\n");
scanf("%d",&ch);
switch(ch){
case 1: 
printf("enter the element\n");
scanf("%d",&elem);
push(elem);
break;
case 2:
p=pop();
printf("the element pop %d\n",p);
break;
case 3:
display();
break;
case 4: 
exit(1);
default: 
printf("Wrong choice\n");
}
}
}


void push(int elem){
if(top==max-1)
{
printf("the stack is full\n");
}
else{
top++;
data[top]=elem;
}
}
int pop(){
int p;
if(top==-1){
printf("the stack is empty\n");
}
else{
p=data[top];
top--;
return(p);
}
}
void display(){
int i;
printf("Various stack value is ");
for(i=0;i<=top;i++){

printf("%d\n",data[i]);
}
}


    