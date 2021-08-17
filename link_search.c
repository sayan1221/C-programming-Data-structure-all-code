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


void search(node *l){
int a[100];
int c=0,i=0,se=0,x,u=0;
printf("Enter search data:");
scanf ("%d",&se);
while (l->next!='\0'){
        i++;
        a[i]=l->data;
        l=l->next;
   }
        i++;
        a[i]=l->data;
        x=i;
for(i=1;i<=x;i++){
//printf ("%d_",a[i]);
        if(a[i]==se)
        u=1;
   }
    if(u==1)
        printf ("%d is found",se);
    else
        printf ("%d is not found",se);
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
     search(h);
        
 }