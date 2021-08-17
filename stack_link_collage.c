#include<stdio.h>
typedef struct stack{
int data;
    struct stack *next; 
    }stack;
stack *h ;

void push(){
stack *p;
int d;
printf("Which element you want to push :");
scanf("%d",&d);
p=(stack*) malloc (sizeof(stack));
p->data=d;
if(h=='\0'){
p->next='\0';
h=p;
// return h;
}
else{
p->next=h;
h=p;
// return h;
    }
 }


void pop(){
stack *z;
int x;
if(h=='\0'){
printf("Stack is Empty");
//return h;
}
else{
x=h->data;
z=h;
h=h->next;
free(z);
printf("The poped element is %d",x);

//return h;
    }
}


void display(){
 if(h=='\0')
    printf("Stack is Empty\n");
else{
while(h->next!='\0'){
printf("%d\n",h->data);
h=h->next;
    }
    printf("%d",h->data);
   }
}


int main(){
int ch=0; 
 while(1){
printf("\nEnter your choice \n");
printf("press 1 for Push \n");
printf("press 2 for Pop \n");
printf("press 3 for Display \n");
printf("press 4 for Exit \n");
scanf ("%d",&ch);

switch (ch){
case 1:{
    push();
    break;
    }
case 2:{
    pop();
    break;
    }
case 3:{
    display();
    break;
    }
case 4:{
    printf("BYE BYE");
    break;
    }
default:{
    printf("Enter valid number");
    }
   }
 }
return 0;
}

    