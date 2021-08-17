#include<stdio.h>
#include<stdlib.h>
typedef struct node{
	int data;
	struct node *next;
}node;
node *create (node *l){
	node *tmp=l;
	int d,ch;
	while(1){
	printf("Enter element : ");
	scanf("%d",&l->data);
	printf("Enter more :(0- Break/1-Continue)\n");
	scanf("%d",&ch);
		if(ch==0){
			l->next=tmp;
			break;
		}
		else{
			node*t=(node*)malloc(sizeof(node));
			l->next=t;
			l=l->next;
		}
	}
}

node *insertFirst(node *l){
	node *tmp=l;
	int d;
	node *t=(node*)malloc(sizeof(node));
	printf("Enter element for First Insert:");
	scanf("%d",&d);
		t->data=d;
		t->next=l;
	while(l->next!=tmp){
		l=l->next;
	}
	l->next=t;
	return t;
}

node *insertLast(node *l){
	node *tmp=l;
	int d;
	printf("Enter element for Last Insert: ");
	scanf("%d",&d);
		while(l->next!=tmp)
			l=l->next;
			node *t=(node*)malloc(sizeof(node));
			t->data=d;
			t->next=tmp;	
			l->next=t;	
}

node *insertMiddle(node *l){
	node *tmp=l;
	int d,ch,x=0;
	node *t=(node*)malloc(sizeof(node));
	printf("Enter data where are you want to insert data :");
	scanf("%d",&ch);
		while(l->next!=tmp){
			if(l->data==ch){
				x=x+1;
				break;
			}
			l=l->next;	
		}
		if(x==0){
			printf("%d is not present in Linked List \n",ch);
		}	
		else {
			printf("Enter new data :");
			scanf("%d",&d);
			while(l->data!=ch)
				l=l->next;
				t->data=d;
				t->next=l->next;
				l->next=t;	
		}
}

int deletefirst(node *l){
	node *tmp=l;
	node *t=l;
	while(tmp->next!=t)
	tmp=tmp->next;
		l=t->next;
	tmp->next=l;
	printf("First Data ' %d ' is deleted \n",t->data);
	free(t);
	return l;
}

void deleteLast(node *l){
	node *t=l;
	node *tmp=l;
		while(l->next->next!=tmp)
		l=l->next;
		t=l->next->next;
			printf("Last data ' %d ' is deleted \n",l->next->data);
			l->next=tmp;
}

void delAny(node *l){
	node *t;
	int x=0;
	node *tmp=l;
	int sr;
	printf("Enter data which you want to delete :");
	scanf("%d",&sr);
		while(l->next!=tmp){
			if(l->data==sr){
				x=x+1;
				break;
			}
			l=l->next;	
		}
		if(x==0){
			printf("%d is not present in Linked List \n",sr);
		}	
		else {
			while(l->next->data!=sr)
				l=l->next;
			t=l->next;
			l->next=t->next;
			printf("Middle data ' %d ' is deleted \n",t->data);
			free(t);
		}
}

void display(node *l){
	node *
		tmp=l;
	while(l->next!=tmp){
		printf("%d->",l->data);
		l=l->next;
	}
	printf("%d\n",l->data);
}


int main(){
	int ch=0;
	node *h=(node*)malloc(sizeof(node));
	printf("Create link list\n");
		create(h);
		display(h);
while(ch!=7){
		printf("press 1 for Insert First\n");
		printf("press 2 for Insert Middle\n");
		printf("press 3 for Insert Last\n");
		printf("press 4 for Delete First\n");
		printf("press 5 for Delete Middle\n");
		printf("press 6 for Delete Last\n");
		printf("press 7 for Exit\n");
		scanf("%d",&ch);
	switch(ch){
		case 1:{
			h=insertFirst(h);
			display(h);
			break;
		}
		case 2:{
			insertMiddle(h);
			display(h);
			break;
		}
		case 3:{
			insertLast(h);
			display(h);
			break;
		}
		case 4:{
			h=deletefirst(h);
			display(h);
			break;
		}
		case 5:{
			delAny(h);
			display(h);
			break;
		}
		case 6:{
			deleteLast(h);
			display(h);
			break;
		}
		case 7:{
			printf("BYE BYE ");	
			break;
		}
		default:{
			printf("Enter valid number ");
		}
	}//switch
}//loop
	return 0;
}



