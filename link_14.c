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
	   	printf("Enter more :(0- Break/1-Continue)\n");
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
 /* while(o->next!='\0'){
		if(o->data==ch){
		x=x+1;
		break;
		}		//chacking data present or not 
		o=l->next;		// but some times this part dose not work
	}					//reason i don't know 
	if(x==0){
		printf("%d is not present in Linked List \n",ch);
	}	
	else{	*/
		while(l->next->data!=ch)
	    l=l->next;
			t=l->next;
			l->next=t->next;
			printf("First Data ' %d ' is deleted \n",t->data);
			free (t);
//    }  
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
int x,z=0,j,h=0;
	    while (l->next!='\0'){
		    i++;
		    a[i]=l->data;
		    l=l->next;
	    }
		    i++;
		    a[i]=l->data;
		    x=i;
  // printf("%d\n",x);
	for(i=1;i<x;i++){	//main loop start
	   // printf("%d->",a[i]); 
		for(j=i+1;j<=x;j++){	//inner loop start
			    if(a[i]==a[j]){
			    	printf("\n %d are more than onetime.\n",a[i]);
			   		z=z+1;
			   		break;
			   	}
			   	else
			   		continue;
		}	//inner loop end
	}	//main loop end
	if(z==0){
		printf("No data are not present in this linked list more than onetime");
	}	
}
            
   
void search(node *l){
int a[100];
int c=0,i=0,se=0,x,u=0;
printf("Enter the data you what to find in this Linked List: \t");
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
		printf ("-- Create link list --\n");
      create (h);
      display (h);
while (1){
printf("\n -- PRESS ANY ONE OF THE FOLLOWING KEYS --");
printf ("\n 1 - First Inseart \n"); 
printf (" 2 - Any Inseart \n");
printf (" 3 - Last Inseart \n");
printf (" 4 - First Deletion \n");
printf (" 5 - Any Deletion \n");
printf (" 6 - Last Deletion \n");
printf (" 7 - Reverse\n");
printf (" 8 - Update (change data) \n");
printf (" 9 - Palindrome Chacking \n");
printf (" 10 - Count \n");
printf (" 11 - Check any Data are present More than one \n");
printf (" 12 - Searching Data \n");
printf (" 13 - Exit  \t --- PRESS : ");
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






    
