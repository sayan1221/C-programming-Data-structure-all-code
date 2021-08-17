#include<stdio.h>
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
	printf("Enter more (0 - main manu /1 - more data added) :\n");
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
	printf("Enter element:");
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
	printf("Enter element : ");
	scanf("%d",&d);
		while(l->next!=tmp)
			l=l->next;
			node *t=(node*)malloc(sizeof(node));
			t->data=d;
			t->next=tmp;	
			l->next=t;	
}

node *insertMiddle(node *l){
	int d,ch;
	node *t=(node*)malloc(sizeof(node));
	printf("Enter data where are you insert data :");
	scanf("%d",&ch);
	printf("Enter new data :");
	scanf("%d",&d);
	while(l->data!=ch)
		l=l->next;
		t->data=d;
		t->next=l->next;
		l->next=t;
}

int deletefirst(node *l){
	node *tmp=l;
	node *t=l;
	while(tmp->next!=t)
	tmp=tmp->next;
		l=t->next;
	tmp->next=l;
	printf("%d is deleted \n",t->data);
	free(t);
	return l;
}

void deleteLast(node *l){
	node *t=l;
	node *tmp=l;
		while(l->next->next!=tmp)
		l=l->next;
		t=l->next->next;
			printf("%d is deleted \n",l->next->data);
			l->next=tmp;
}

void delAny(node *l){
	node *t;
	node *tmp=l;
	int sr;
	printf("Enter data which you want to delete(without first and list data) :");
	scanf("%d",&sr);
	while(l->next->data!=sr)
		l=l->next;
	t=l->next;
	l->next=t->next;
	printf("%d is deleted \n",t->data);
	free(t);
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
	int ch;
	node *h=(node*)malloc(sizeof(node));
	printf("Create link list\n");
		create(h);
		display(h);
while(ch !=7){
	printf("\nEnter your choice : \n");
	printf("1- First Insert \t");
	printf("2- Any Insert \t\t");
	printf("3- Last Insert \t\t");
	printf("4- First Delete \n");
	printf("5- Any Delete \t");
	printf("6- Last Delete \t");
	printf("7- Exit \t		::");
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
			printf("Bye Bye");
			break;
		}
		default :{
			printf("Enter valid number :");
		}
	}	//switch end
}	// LOOP END
	return 0;
}



