#include<stdio.h>
#include<stdlib.h>
typedef struct node{
	int data;
	struct node *right_child;
	struct node *left_child;
}node;


int input_data(){
	int d;
	printf("Enter data for root node : ");
	scanf("%d",&d);
	return d;
}


int parent_node(){
	int d;
	printf("Enter data for parent node : ");
	scanf("%d",&d);
	return d;
}


node *root_new_node(int d){
	node *t;
	t=(node*)malloc(sizeof(node));
	t->data=d;
	t->right_child='\0';
	t->left_child='\0';
	return t;
}


node *insert_node(node *root,int d){
	if(root=='\0')
		return root_new_node(d);
	else if(d>root->data)
		root->right_child=insert_node(root->right_child,d);
	else
		root->left_child=insert_node(root->left_child,d);
}


void in_order_display(node *root){
	if(root!='\0'){
		in_order_display(root->left_child);
		printf(" %d ",root->data);
		in_order_display(root->right_child);
	}
}


int main(){
	int x,ch=0;
	node *root='\0';
	printf("Creat root node \n");
	x=parent_node();
	root=root_new_node(20);	
while(ch!=3){
	printf("\nEnter your choice \n");
	printf("1 - Insert Node \t");
	printf("2 - Inorder Display \t");
	printf("3 - Exit \t :: ");
	scanf("%d",&ch);
	switch(ch){
		case 1:{
			insert_node(root,input_data());
			break;
		}
		case 2:{
			in_order_display(root);
			break;
		}
		case 3:{
			printf("\n BYE BYE");
			break;
		}
		default :{
			printf("Enter Valid number\n");
		}
	}//switch end
}// loop end
	return 0;
}
