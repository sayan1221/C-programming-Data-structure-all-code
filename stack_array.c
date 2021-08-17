#include<stdio.h>
int s[10],top=-1,n;

int push(){
    int d;
        if(top==n-1)
        printf("Stack is overflow");       
       else {
    printf("Enter data:");
    scanf("%d",&d);
       top++; //top=top+1;
       s[top]=d; 
       }
return 0;
}

int pop(){
    if(top==-1)
    printf("Stack is underflow");
    else{
    printf("%d is popped\n",s[top]);
    top=top-1;
    }
    return 0;
  }

int show(){
  int i;
    for(i=top;i>=0;i--){
    printf("%d\n",s[i]);
    }
    if(top==-1){
    printf("Stack is empty");
    }
return 0;
}



int main(){
int ch=0;
printf("Enter the size of stack :");
scanf("%d",&n);
while(ch!=4){
    printf("\nEnter your choice\n");
    printf(" 1 - push\t");
    printf(" 2 - pop\t");
    printf(" 3 - show\t");
    printf(" 4 - Exit\t :");
    scanf("%d",&ch);
switch (ch){
case 1:{
    push();
    break;
    }
case 2:{
    pop();
    break;
    }
case 3:{
    show();
    break;
    }
case 4:{
    printf("Bye bye ");
    break;
    }
default:{
    printf("Enter valid number");
    break;
    }
   }
  }
}  
    
       
    
    
