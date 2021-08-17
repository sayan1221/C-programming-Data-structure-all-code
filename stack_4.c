#include<stdio.h>
typedef struct node{
int data;
    struct node *next; 
    }node;
int ;
node *head;

int push(){
int d,c=0;
node *t=(node*)malloc(sizeof(node));
  printf("Enter data:");
  scanf("%d",&d);
    
if(head=='\0'){
    t->data=d;
    t->next='\0';
    head=t;
  }
else{
    t->data=d;
    t->next=head;
    head=t;
    }   
    printf("%d is pushed \n",t->data);
 return c++;
 printf("%d\n\n",c);
}


void pop(){
int val; 
    node *p;
    if(head=='\0'){
    printf("stack is underflow");
    }   
    else{
    val=head->data;
     p=head;
    head=head->next;
    free(p);
    printf("%d is poped \n ",val);
    }
}


void display (){ 
    while (head->next!='\0'){
    printf("%d\n",head->data);
    head=head->next;
    }
    printf("%d\n",head->data);
 }


int main(){
int ch=0,n=0,x;
    printf("Enter stack size:");
    scanf("%d",&n);


while(ch!=4){
printf("Enter your choice \n");
printf("press 1 for Push \n");
printf("press 2 for Pop \n");
printf("press 3 for Display \n");
printf("press 4 for Exit \n");
scanf ("%d",&ch);

switch (ch){
case 1:{
    
    if(x!=n){
    x++;
    x=push(n);
    printf("%d\n\n",x);
    }
    break;
    }
case 2:{
    pop();
    break;
    }
case 3:{
    display ();
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

    
