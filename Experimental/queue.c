#include <stdio.h>
int front=-1,rear=-1;
void insert(int data,int arr[],int size){
    if(rear==size-1)
    {
        printf("Queue overflow\n");
    }
    else
    {
        arr[++rear]=data;
    }
    if(front==-1)
    {
        front++;
    }
    
}
int delete(int arr[]){
    if(front==-1){
        printf("Queue Underflow\n");
        return -999;
    }
    else if(front==rear)
    {
         int data=arr[front];
         front=-1;
         rear=-1;
         return data;
    }
    
    else{
        return arr[front++];
    }
}

void display(int arr[]){
    int i;
    for(i=front;i<=rear;i++){
        printf("%d\n",arr[i]);
    }
}

void main(){
    int size,ch,data;
    printf("Enter size: ");
    scanf("%d",&size);
    int arr[size];
    do{
        printf("Press 1 to push\nPress 2 to pop\nPress 3 to display\nPress 0 to exit\nEnter Choice:");
        scanf("%d",&ch);
        switch(ch){

            case 1:
                printf("Enter data: ");
                scanf("%d",&data);
                insert(data,arr,size);
                break;
            case 2:
                data = delete(arr);
                if(data!=-999)
                    printf("Deleted: %d\n",data);
                break;
            case 3:
                display(arr);
                break;
            case 0:
                printf("Exiting....\n");
                break;
            default:
                printf("Wrong Choice\n");
        }
    }while(ch!=0);
}