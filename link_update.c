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


node *update(node *l){
int o,n;
printf ("Enter data what you want update: ");
scanf ("%d",&o);
   printf("Enter new data:");
   scanf ("%d",&n);
node *t=(node*)malloc(sizeof(node));

/*->-> using double pointer ->->
node *x=(node*)malloc(sizeof(node));
       x->data=n;
    while(l->next->data!=o)
    l=l->next;
    printf("%d \n",l->data);
    t=l->next;
    l->next=x;
    x->next=t->next;
    free (t); */
    
    while(l->data!=o)
    l=l->next;
    t=l->next;
    l->data=n;
   l= l->next;
    
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
printf("Create link list:\n");
      create(h);
      display(h);
       update(h);
       display(h);

      return 0;  
 }






    