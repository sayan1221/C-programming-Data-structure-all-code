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
     printf("Enter position:");
     scanf("%d",&pos);
    if(pos==1){
    return 1;
    
    }
else{    
    printf("Enter data:");
    scanf("%d",&d);
node *t=(node*)malloc(sizeof(node));
    t->data=d;
    p=l;
    for(i=1;i<pos-1 && p!='\0' ;i++){
    p=p->next;
    }
      if(p=='\0'){
      printf("This position is not valid \n");
      }
      else {
      t->next=p->next;
      p->next=t;
      }   
    return 0;
 }
//return 0;
}

void *del_first(node *l){
node *t ;
    t=l;
    l->next=t->next;
   
    free(t);
    l=l->next;
  }


void *del_last(node *l){
node *t;
    while(l->next->next!='\0')
    l=l->next;
    l->next='\0';
    
  }
    
    
void *del_any(node *l){
node *t;
int sr;
    printf("Enter search data:");
    scanf ("%d",&sr);
    
if(l->data==sr){
    return 1;
    }
else {
    while(l->next->data!=sr)
    l=l->next;
    t=l->next;
    l->next=t->next;
    free (t);
    return 0;
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



void cheack_palin(node *l){
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
 
    
void count(node *l){
int c=0;
    while (l->next!='\0'){
    c++;
    l=l->next;
    }
    c++;
 printf("The no of node are : %d \n\n",c);
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
  // printf("%d\n",x);
for(i=1;i<x;i++){
   // printf("%d->",a[i]); 
for(j=i+1;j<=x;j++){
    if(a[i]==a[j])
    printf("\n %d is more than onetime.\n",a[i]);
   }
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
        printf ("%d is found\n",se);
    else
        printf ("%d is not found\n",se);
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
      create (h);
      display (h);
while (1){
printf ("\nPress 1 for First Inseart \n"); 
printf ("Press 2 for Any Inseart \n");
printf ("Press 3 for Last Inseart \n");
printf ("Press 4 for First Deletion \n");
printf ("Press 5 for Any Deletion \n");
printf ("Press 6 for Last Deletion \n");
printf ("Press 7 for Reverse\n");
printf ("Press 8 for Update (change data) \n");
printf ("Press 9 for Palindrome Chacking \n");
printf ("Press 10 for Count \n");
printf ("Press 11 for Cheack Data More than one \n");
printf ("Press 12 for Searching Data \n");
printf ("press 13 for Exit \n");
scanf ("%d",&ch);
switch (ch){
case 1:{
        h=insertAtFirst(h);
        display(h);
break;
}
case 2:{
        x=inseartAtMiddle(h); 
if(x==1){
        h=insertAtFirst(h);
        display(h);
        }   
else if(x==0){     
        display(h);
        } 
break;
}
case 3:{   
       inseartAtLast(h);
       display(h);
break;
}
case 4:{
       h=del_first(h);
       display(h);
break;
}
case 5:{
     x=del_any(h);
if(x==1){
    h=del_first(h);
    display(h);
    }
else 
     display(h);    
break;
}
case 6:{
    del_last(h);
    display(h);
break;
}
case 7:{
    reverse (h);
    display (h);
break;
}
case 8:{
    update(h);
    display (h);
break;
}
case 9:{
    cheack_palin(h);
break;
}
case 10:{
    count(h);
break;
}
case 11:{
    double_count(h);
break;
}
case 12:{
    search (h);
break;
}
case 13:{
    printf("Thank you\n");
    exit(1);
break;
}
default :{
    printf("Enter valid number\n");
     }
   } //switch 
}   // loop   
      return 0;  
 }






    