#include<stdio.h>
#include<stdlib.h>
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
    printf("Enter data for first insert :");
    scanf("%d",&d);
   t->data=d;
   t->next=l;
}

node *inseartAtLast(node *l){
int d;
     printf("Enter data for last insert:");
    scanf("%d",&d);
    while(l->next!='\0'){
       l=l->next;
    }
  node *t=(node*)malloc(sizeof(node));
    t->data=d;
    t->next='\0';
    l->next=t;
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
      h=insertAtFirst(h);
      display(h);
        inseartAtLast(h);
        display(h);
 }
