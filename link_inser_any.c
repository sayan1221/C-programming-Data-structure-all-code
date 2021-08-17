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


node *insertionAtAny(node *l){
 int sr,d;
node *t;
	printf ("Enter search data:");
    scanf ("%d",&sr);
	printf("Enter data:");
    scanf("%d",&d);
    t=(node*)malloc(sizeof(node));
    t->data=d;
    while (l->data!=sr){
        l=l->next;
    }    
     
        t->next=l->next;
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
int x=0;
    node *h;
  h=(node*)malloc(sizeof(node));
  create (h);
  display (h);
   
        insertionAtAny(h);
        display(h);
 }
