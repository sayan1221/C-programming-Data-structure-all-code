#include<stdio.h>
typedef struct node{
int data;
    struct node *next; 
    }node;
int n;
node *head;

void push(){
int d,c=0;
    node *t=(node*)malloc(sizeof(node));
printf("Enter data:");
scanf("%d",&d);
if(head=='\0'){
    t->data=d;
    t->next='\0';
    head=t;
    c++;
  }
else{
    t->data=d;
    t->next=head;
    head=t;
    c++;
  }   
printf("%d is pushed \n",t->data);
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
	node *t=head;
    while (t->next!='\0'){
    printf("%d\n",t->data);
    t=t->next;
    }
    printf("%d\n",t->data);
 }


int main(){
int ch=0;
  //  printf("Enter stack size:");
//    scanf("%d",&n);

while(ch !=4){
printf("\nEnter your choice \n");
printf("1 - Push \t");
printf("2 - Pop \t");
printf("3 - Display \t");
printf("4 - Exit \t  ::");
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

