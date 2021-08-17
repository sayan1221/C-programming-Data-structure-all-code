#include<stdio.h>
#include<stdlib.h>
typedef struct node{
	int data;
	struct node *next;
}node;
node *front;
node *rear;

node *insert(){
	int d;
	node *t;
	printf("Enter data :");
	scanf("%d",&d);
	t=(node*)malloc(sizeof(node));
	t->data=d;
	if (front=='\0'){
	t->next='\0';
	front=t;
	rear=t;
	}
	else {
		rear->next=t;
		rear=t;
		rear->next='\0';
	}
}

void del(){
	node *t=front;
	if (t=='\0'){
		printf("Queue is empty \n");
	}	
	else{
		printf("%d is deleted \n",t->data);
		front=front->next;
		t->next='\0';
		free(t);
	}
}

void display(){
	node *t=front;
	if (t=='\0'){
		printf("Queue is empty \n");
	}	
	else{
		while(t !='\0'){
			printf("%d, ",t->data);
			t=t->next;
		}	
	}
	printf("\n");
}

int main(){
	int ch;
while(ch!=4){
	printf("\nEnter your choice :\n");
	printf("1 - Insert \t");
	printf("2 - Delete \t");
	printf("3 - Display \t");
	printf("4 - Exit \t ::");
	scanf("%d",&ch);
	switch(ch){
		case 1:{
			insert();
			break;
		}
		case 2:{
			del();
			break;
		}
		case 3:{
			display();
			break;
		}
		case 4:{
			printf("BYE BYE");
			break;
		}
		default :{
			printf("Enter valid number \n");
		}
	}	//switch end
}	//loop end
return 0;
}




