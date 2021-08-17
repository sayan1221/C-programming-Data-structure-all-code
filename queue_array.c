#include<stdio.h>   
#include<stdlib.h>  
#define maxsize 10  
 
int front = -1, rear = -1;  
int queue[maxsize];

void insert(){  
    int item;  
    printf("\nEnter the element\n");  
    scanf("\n%d",&item);      
    if(rear == maxsize-1){  
        printf("\nOVERFLOW\n");  
        return;  
    }  
    if(front == -1 && rear == -1){  
        front = 0;  
        rear = 0;  
    }  
    else{  
        rear = rear+1;  
    }  
    queue[rear] = item;  
    printf("\n %d inserted ",item);  
}  

void delete(){  
    int item;   
    if (front == -1 || front > rear){  
        printf("\nUNDERFLOW\n");  
        return;  
              
    }  
    else{  
        item = queue[front];  
        if(front == rear){
            front = -1;  
            rear = -1 ;  
        }  
        else{  
            front = front + 1;  
        }  
        printf("\n %d is deleted ",item);  
    }
}  
      
void display(){  
    int i;  
    if(rear == -1){  
        printf("\nEmpty queue\n");  
    }  
    else {   
		printf("\nprinting values .....\n");  
        for(i=front;i<=rear;i++){  
            printf("%d \t",queue[i]);  
        }
		printf("\n");     
    }  
}
  
void main (){  
    int choice;   
    while(choice != 4){     
    	printf("\n1.insert an element \t 2.Delete an element \n3.Display the queue\t 4.Exit\t ::");  
        printf("\nEnter your choice ?");  
        scanf("%d",&choice);  
        switch(choice){  
            case 1:  
            insert();  
            break;  
            case 2:  
            delete();  
            break;  
            case 3:  
            display();  
            break;  
            case 4:  
            exit(0);  
            break;  
            default:   
            printf("\nEnter valid choice??\n");  
        }  
    }  
}  
  

