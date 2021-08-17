#include<stdio.h>
typedef struct singleLL{
int data;
    struct singleLL *next;
    }node;

void create(node *l){
int i,ch;
   while (1){
    printf("Enter data:");
    scanf ("%d",&l->data);
    printf("Enter more data?(0/1)");
    scanf ("%d",&ch);
 if(ch==0){
    l->next='\0';
    break ;
  }
node *t=(node*)malloc(sizeof(node));
    l->next=t;
    l=l->next;
  }
}

node *insertAtFirst(node *l){
    node *t=(node*)malloc (sizeof(node));
int d;
    printf("Enter data:");
    scanf("%d",&d);
   t->data=d;
   t->next=l;
}

node *inseartAtLast(node *l){
int d;
     printf("Enter data:");
    scanf("%d",&d);
    while(l->next!='\0'){
       l=l->next;
    }
  node *t=(node*)malloc(sizeof(node));
    t->data=d;
    t->next='\0';
    l->next=t;
  }


node *inseartAtMiddle(node *l){
int d,i,pos;
node *p;
     printf("Enter data:");
     scanf("%d",&d);
     printf("Enter position:");
     scanf("%d",&pos);
node *t=(node*)malloc(sizeof(node));
    t->data=d;
    p=l;
    for(i=1;i<pos-1;i++){
    p=p->next;
    }
      if(p=='\0'){
      printf("Enter valid position");
      }
      else {
      t->next=p->next;
      p->next=t;
      }   
 }



void display (node *l){
    while(l->next!='\0'){
    printf("%d->",l->data);
    l=l->next;
   }
    printf("%d\n",l->data);
}


int main (){
    node *h;
  h=(node*)malloc(sizeof(node));
  create (h);
  display (h);
   /*   h=insertAtFirst(h);
        display(h);
        inseartAtLast(h);
        display(h);*/
        inseartAtMiddle(h);        
        display(h);
        
        
 }