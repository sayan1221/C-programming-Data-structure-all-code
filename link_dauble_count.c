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


void double_count(node *l){
int a[100],t[100],i=0,y=0;
int x,z,j,h=0;
  while (l->next!='\0'){
     i++;
    a[i]=l->data;
    l=l->next;
   }
    i++;
    a[i]=l->data;
    x=i;
   printf("%d\n",x);
for(i=1;i<x;i++){
    printf("%d->",a[i]); 
for(j=i+1;j<=x;j++){
    if(a[i]==a[j])
    printf("\n %d is more than onetime.\n",a[i]);
   }
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
int x=0;
    node *h;
  h=(node*)malloc(sizeof(node));
  create (h);
  display (h);
   double_count(h);
   
        
 }