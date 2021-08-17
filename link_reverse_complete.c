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


void reverse(node *l){
int a[100],i=1,y;
node *x;
    x=l;
  while (x->next!='\0'){
    a[i]=x->data;
    i++;
    x=x->next;
   }
    a[i]=x->data;
    free(x);
    /*int x=i;
    printf("\n %d\n",i);
    for(i=x;i>=1;i--){
    printf("%d->",a[i]);
    }*/
    
// node *l=(node*)malloc(sizeof(node));
   // x->data=a[i];
    while (1){
    if(i==1)
    break;
    l->data=a[i];
    node *t=(node*)malloc(sizeof(node));
    l->next=t;
    l=l->next;
    i--;
  }
    l->data=a[i];
   // printf("%d",x->data);
    l->next='\0';
   // return x;
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
   reverse(h);
   display(h);
        
 }