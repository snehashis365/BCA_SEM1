#include <stdio.h>
int top=-1;
void push(int data,int stack[],int size){
    if(top==size-1)
    {
        printf("Stack overflow\n");
    }
    else
    {
        stack[++top]=data;
    }
}
int pop(int stack[]){
    if(top==-1){
        printf("Stack Underflow\n");
        return -999;
    }
    else{
        return stack[top--];
    }
}

void display(int stack[]){
    int i;
    for(i=top;i>=0;i--){
        printf("%d\n",stack[i]);
    }
}

void main(){
    int size,ch,data;
    printf("Enter size: ");
    scanf("%d",&size);
    int stack[size];
    do{
        printf("Press 1 to push\nPress 2 to pop\nPress 3 to display\nPress 0 to exit\nEnter Choice:");
        scanf("%d",&ch);
        switch(ch){

            case 1:
                printf("Enter data: ");
                scanf("%d",&data);
                push(data,stack,size);
                break;
            case 2:
                data = pop(stack);
                if(data!=-999)
                    printf("Popped: %d\n",data);
                break;
            case 3:
                display(stack);
                break;
            case 0:
                printf("Exiting....\n");
                break;
            default:
                printf("Wrong Choice\n");
        }
    }while(ch!=0);
}