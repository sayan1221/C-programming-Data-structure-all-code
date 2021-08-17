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


node *split(node *l){
node *t=(node*)malloc(sizeof(node));
int pos;
    printf("Enter split data:");
    scanf ("%d",&pos);
  while(l->data!=pos){
    l=l->next;
    printf("%d->",l->data);
    }
    printf("%d\n",l->data);  
    t=l->next;
    l->next='\0';
  while(t->next!='\0'){
   printf("%d->",t->data);
    t=t->next;
   }   
    printf("%d\n",t->data);
}


void display(node *l){
    while(l->next!='\0'){
    printf("%d->",l->data);
    l=l->next;
   }
    printf("%d\n",l->data);
}


int main (){
int x=0,ch;
  node *h;
  h=(node*)malloc(sizeof(node));
printf ("Create link list:\n");
      create(h);
      display(h);
       split(h);
     //  display(h);

      return 0;  
 }






    