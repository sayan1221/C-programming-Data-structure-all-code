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


node *del_first(node *l){
	node *t=l;
	l=l->next;
	t->next='\0';
	free(t);
	return l;
}
    

node *dellast(node *l){
    while(l->next->next!='\0'){
    l=l->next;
    }
l->next='\0';
}


void display(node *l){
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
      h=del_first(h);
      display(h);
          /*dellast(h);
        display(h);*/
    return 0;
 }






    
