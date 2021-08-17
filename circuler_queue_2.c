#include<stdio.h>
#define MAX 5
int front=-1;
int rear=-1;
int cq[MAX];

int insert(int n){	
	if((front==0 && rear==MAX-1) || front==rear+1 ){
		printf("Queue is overflow");
		return 0;
	}
	if(front==-1){		// If queue is empty 
		front=0;
		rear=0;
	}
	else{
		if(rear==MAX-1)		// rear is at last position of queue
		rear=0;
		else
		rear=rear+1;
	}
	cq[rear]=n;
}


void del(){
	if(front==-1){
		printf("Queue is underflow");
	}
	printf("Element deleted from queue is : %d\n",cq[front]);
	if(front==rear){
		front=-1;
		rear=-1;
	}
	else{
		if(front==MAX-1)
		front =0;
		else
		front=front+1;
	}
}


void display(){
		
	if(front=-1){
		printf("Queue is empty \n");
	}
	printf("Queue elements :\n");
	if(front<=rear){
		while(front<=rear){
			printf("%d[n]",cq[front]);
			front++;
		}
	}
	else{
		while(front==MAX-1){
			printf("%d\n",cq[front]);
			front++;
		
		front=0;
	}
}

int main(){
	int choice,n;
while(choice!=4){
		printf("1.Insert\n");
		printf("2.Delete\n");
		printf("3.Display\n");
		printf("4.Exit\n");

		printf("Enter your choice : ");
		scanf("%d",&choice);

		switch(choice){
			case 1 :
				printf("Input the element for insertion in queue : ");
				scanf("%d",&n);
				insert(n);
				break;
			case 2 :
				del();
				break;
			case 3:
				display();
				break;
			case 4:
				break;
				default:
				printf("Wrong choice\n");
		}
	}
	return 0;
}



