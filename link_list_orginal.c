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
	   	printf("Enter more :(0- Break/1-Continue) 	 ::");
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
    printf("Enter data for First insert :");
    scanf("%d",&d);
    t->data=d;
    t->next=l;
}


node *inseartAtLast(node *l){
int d;
    printf("Enter data for Last insert :");
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
int d,i,ch,x=0;
node *z=l;
node *o=l;
node *t;
     printf("Enter data where are you want to insert data (Without Last Data) :");
     scanf("%d",&ch);
    while(o->next!='\0'){
		if(o->data==ch){
		x=x+1;
		break;
		}
		o=o->next;	
	}
	if(x==0){
		printf("%d is not present in Linked List \n",ch);
	}	
else{   
			printf("Enter data for insert after %d :",ch);
		    scanf("%d",&d);
		    t=(node*)malloc(sizeof(node));
		    t->data=d;
		    while (l->data!=ch){
		        l=l->next;
		    }    
	        t->next=l->next;
	        l->next=t; 		  
	}
return 0; 
}


node *del_first(node *l){
	node *t=l;
	l=l->next;
	t->next='\0';
	printf("First Data ' %d ' is deleted \n",t->data);
	free(t);
	return l;
}

void del_last(node *l){
	node *t;
    while(l->next->next!='\0')
    	l=l->next;
    t=l->next;
	l->next='\0';
    printf("First Data ' %d ' is deleted \n",t->data);
	free(t);
}
    

int del_any(node *l){
node *z=l;
node *o=l;
node *t;
int ch=0,x=0;
    printf("Enter search data (Without First And Last Data):");
    scanf ("%d",&ch);
		while(l->next->data!=ch)
	    l=l->next;
			t=l->next;
			l->next=t->next;
			printf("First Data ' %d ' is deleted \n",t->data);
			free (t); 
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
		printf ("-- Create link list --\n");
      create (h);
      display (h);
while (1){
printf("\n -- PRESS ANY ONE OF THE FOLLOWING KEYS --");
printf ("\n 1 - First Inseart \t"); 
printf (" 2 - Any Inseart \t");
printf (" 3 - Last Inseart \t");
printf (" 4 - First Deletion \t");
printf (" 5 - Any Deletion \t");
printf (" 6 - Last Deletion \t");
printf (" 7 - Exit  \t --- :: ");
scanf ("%d",&ch);
	switch(ch){
		case 1:{
		        h=insertAtFirst(h);
		        display(h);
				break;
			}
		case 2:{
		        inseartAtMiddle(h);
		        display(h);
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
		    	del_any(h);
		    	display(h);    
				break;
		}
		case 6:{
		    	del_last(h);
		    	display(h);
				break;
		}
	case 7:{
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


