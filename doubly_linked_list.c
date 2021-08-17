#include <stdio.h>
#include <stdlib.h>

typedef struct node { 
    int data;
    struct node * preptr;
    struct node * nextptr;
}node; 
node *start_node, *end_node;	//Creating node.

void creation(){	//Function to create list.
    int i,d,ch;
    node *t;
        start_node=(node*)malloc(sizeof(node));
            printf("Enter data :"); 
            scanf("%d",&d);
            start_node->data=d;
            start_node->preptr='\0';
            start_node->nextptr='\0';
            end_node=start_node;
           	while (1){
				printf("Enter your choice :(0- Break/1-Continue) 	 ::");
	    		scanf("%d",&ch);
				if(ch==0){
				printf("\n");
		    	break;
				}
                t=(node *)malloc(sizeof(node));
                    printf("Enter data :");
                    scanf("%d",&d);  
                    t->data=d;
                    t->preptr=end_node;   
                    t->nextptr='\0';
                    end_node->nextptr=t;  
                    end_node=t;            
            }
}


node *insert_at_first(){
	int d;
	node *t=(node*)malloc(sizeof(node));
	printf("\nEnter data for first insert : ");
	scanf("%d",&d);
	t->data=d;
	t->preptr='\0';
	t->nextptr=start_node;
	start_node->preptr=t;
	start_node=t;
	printf("%d is added\n",d);
}


node *insert_at_middle(){
	int d,ch,x=0;
	node *tmp=start_node;
	node *z=start_node;
	printf("\nEnter data whare are you want to insert : ");
	scanf("%d",&ch);
	while(z->nextptr != '\0'){
		if(z->data == ch){
			tmp=z;
			x=x+1;
			break;
		}
		z=z->nextptr;
	}
//	printf("x is : %d \n",x);
	if(x==1){
	node *t=(node*)malloc(sizeof(node));
	printf("Enter data for insert after %d: ",ch);
	scanf("%d",&d);
	t->data=d;
	node *s=tmp->nextptr;
	t->preptr=tmp;
	tmp->nextptr=t;
	t->nextptr=s;
	s->preptr=t;
	tmp=t;
	}
	else	
		printf("%d is not aviable in this linked list\n",ch);
	printf("%d is added\n",d);		
}


node *insert_at_last(){
	int d;
	node *t=(node*)malloc(sizeof(node));
	printf("\nEnter data for last insert : ");
	scanf("%d",&d);
	t->data=d;
	t->preptr=end_node;
	t->nextptr='\0';
	end_node->nextptr=t;
	end_node=t;
	printf("%d is added\n",d);
}


void del_at_first(){
	printf("\n");
	node *t=start_node;
	start_node=start_node->nextptr;
	start_node->preptr='\0';
	t->nextptr='\0';
	printf("%d is deleted \n ",t->data);
	free(t);
}


void del_at_middle(){
	int ch;
	printf("\n");
	node *t=start_node;
	printf("Enter data which are you want to delete :");
	scanf("%d",&ch);
	while(t->data != ch){
		t=t->nextptr;
	}
	node *front=t->preptr;
	node *end=t->nextptr;
	t->nextptr='\0';
	t->preptr='\0';
	front->nextptr=end;
	end->preptr=front;
	printf("%d is deleted \n",t->data);
	free(t);
}


void del_at_last(){
	printf("\n");
	node *t=end_node;
	end_node=end_node->preptr;
	end_node->nextptr='\0';
	t->preptr='\0';
	printf("%d is deleted \n",t->data);
	free(t);
}


void display(){
    node *tmp;
	node *t;
       tmp=start_node;
	   printf("Front way data print : "); 
        while(tmp->nextptr!='\0'){
        	printf("%d-> ",tmp->data);
		    tmp=tmp->nextptr; 
        }
        printf("%d \n",tmp->data);
 		t=end_node;
 		printf("Back way data print : ");
 		 while(t->preptr!='\0'){
        	printf("%d <-",t->data);
		    t=t->preptr; 
        }
        printf("%d \n",t->data);
}


int main(){
    int n,ch;
    start_node='\0';
    end_node='\0';
    creation(); 
    display();
while(ch!=7){
	printf("\nEnter your choice \n");
	printf("1 - Instert_at_first \t");
	printf("2 - Insert_at_you_want \t");
	printf("3 - Insert_at_last \t");
	printf("4 - Delete_at_first \n");
	printf("5 - Delete_at_you_want \t");
	printf("6 - Delete_at_last \t");
	printf("7 - Exit \t ::");
	scanf("%d",&ch);
	switch(ch){
		case 1:{
			insert_at_first();
			display();
			break;
		}
		case 2:{
			insert_at_middle();
			display();
			break;
		}
		case 3:{
			insert_at_last();
    		display();
			break;
		}
    	case 4:{
    		del_at_first();
			display();
			break;
		}
		case 5:{
			del_at_middle();
			display();
			break;
		}
		case 6:{
			del_at_last();
			display();
			break;
		}
		case 7:{
			printf("Bye Bye");
			break;
		}
		default :{
			printf("Enter valid number \n");
		}
	}	// end switch
}	//	end loop
	return 0;
}


