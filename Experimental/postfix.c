#include <stdio.h>
#include <string.h>
int top=-1;
void push(char data,char stack[],int size){
    if(top==size-1)
    {
        printf("Stack overflow\n");
    }
    else
    {
        stack[++top]=data;
    }
}
int pop(char stack[]){
    if(top==-1){
        printf("Stack Underflow\n");
        return '~';
    }
    else{
        return stack[top--];
    }
}

void display(char stack[]){
    int i;
    for(i=top;i>=0;i--){
        printf("%c",stack[i]);
    }
    printf("\n");
}

void main(){
    int size,ch;
    printf("Enter expression: ");
    scanf("%[^\n]",&size);
    char stack[size],data;

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