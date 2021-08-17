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


void palindrome(int n){
int no,r=0,s=0;
   no=n ;
while(n!=0){ 
r=n%10; 
s=s*10+r; 
n=n/10;
 } 
if (no==s)
printf("palingdroms %d\n",no);
}



void chack_palin(node *l){
int a[100],i=1,y;
int x,z;
  while (l->next!='\0'){
    a[i]=l->data;
    i++;
    l=l->next;
   }
    i++;
    a[i]=l->data;
    x=i;
   
for(i=1;i<=x;i++){
    z=a[i];
    palindrome(z);
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
   chack_palin(h);
   
        
 }