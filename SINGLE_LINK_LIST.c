#include<stdio.h>
#include<stdlib.h>
typedef struct node{
int data;
struct node *next;
}node;
int create(node *l){
int ch;
while(1){
printf("enter data:");
scanf("%d",&l->data);
printf("enter more(0/1):");
scanf("%d",&ch);
if(ch==0){
l->next='\0';
break;
}
node *t=(node*)malloc(sizeof(node));
l->next=t;
l=t;
}
}
void display(node *l){
while(l->next!='\0'){
printf("%d->",l->data);
l=l->next;
}
printf("%d\n",l->data);
}

node *Insert_At_First(node *l){
 int d;
 printf("enter data:");
 scanf("%d",&d);
 node *t=(node*)malloc(sizeof(node));
 t->data=d;
 t->next=l;
 l=t;
 printf("%d data is insert.\n",d);
return t;
}
node *Insert_At_Any(node *l){
int ch,d;
printf("enter data where are you want to insert:");
scanf("%d",&ch);
printf("enter data:");
scanf("%d",&d);
while(l->data!=ch){
l=l->next;
}
node *t=(node*)malloc(sizeof(node));
t->data=d;
node *s=l->next;
l->next=t;
t->next=s;
printf("%d data is insert.\n",d);
}
node *Insert_At_Last(node *l){
 int d;
 printf("enter data:");
 scanf("%d",&d);
 while(l->next!='\0'){
  l=l->next;
 }
 node *t=(node*)malloc(sizeof(node));
 t->data=d;
 t->next='\0';
 l->next=t;
 printf("%d data is insert.\n",d);
}
node *Delete_At_First(node *l){
node *t;
t=l;
l=l->next;
t->next='\0';
free(t);
return l;


}
node *Delete_At_Any(node *l){
int d;
printf("enter data where you want to delete:");
scanf("%d",&d);
while(l->next->data!=d){
l=l->next;

}
node *t=l->next;
node *s=t->next;
t->next='\0';
l->next=s;
free(t);
}
node *Delete_At_Last(node *l){
node *t='\0';
while(l->next->next!='\0'){
l=l->next;
}
t=l->next;
l->next='\0';
free(t);

}


int main(){
int *h,c;
h=(node*)malloc(sizeof(node));
create(h);
display(h);
printf("1.insertAtFirst position\n");
printf("2.insertAtAny position\n");
printf("3.insertAtLast position\n");
printf("4.DeleteAtFirst position\n");
printf("5.DeleteAtAny position\n");
printf("6.DeleteAtLast position\n");
printf("7.exit\n");
while(c!=7){
printf("enter your chose:");
scanf("%d",&c);
switch(c){
case 1:
h=Insert_At_First(h);
display(h);
break;
case 2:
Insert_At_Any(h);
display(h);
break;
case 3:
Insert_At_Last(h);
display(h);
break;
case 4:
h=Delete_At_First(h);
display(h);
break;
case 5:
Delete_At_Any(h);
display(h);
break;
case 6:
Delete_At_Last(h);
display(h);
break;
case 7:
exit(0);
break;

default:
printf("please enter valid input\n");
}
}
}

