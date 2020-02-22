#include <stdio.h>
typedef struct node
{
    int data;
    struct node *nextNode;    

}node;
node *top=NULL;
int listSize(){
    int count=0;
    node *point = top;
    while (point!=NULL)
    {
        count++;
        point = point->nextNode;
    }
    return count;
    
}
void main(){

    node *newNode,*p,*p2;
    int ch,sCh,value,pos,i;
    do{
        printf("\nPress 1 to add new node\nPress 2 to delete node\nPress 3 to display\nPress 9 to exit\n\nEnter choice: ");
        scanf("%d",&ch);
        switch (ch){
        case 1:
            printf("\nPress 1 to add from begin\nPress 2 to add from any position\nPress 3 to add from end\n\nEnter choice: ");
            scanf("%d",&sCh);
            switch (sCh){
                case 1:
                    newNode = (node*)malloc(sizeof(node*));
                    printf("\nEnter Data: ");
                    scanf("%d",&value);
                    newNode->data = value;
                    newNode->nextNode = top;
                    top = newNode;
                    break;
                
                case 2:
                    printf("\nEnter position: ");
                    scanf("%d",&pos);
                    i = 0;
                    p = top;
                    if(pos <= listSize()){
                        while (i != pos){   
                            p2 = p;
                            p = p->nextNode;
                            i++;
                        }
                        newNode = (node*)malloc(sizeof(node*));
                        printf("\nEnter Data: ");
                        scanf("%d",&value);
                        newNode->data = value;
                        newNode->nextNode = p;
                        p2->nextNode = newNode;
                    }
                    else{
                        printf("\nInvalid Position\n");
                    }
                    
                    break;

                case 3:
                    newNode = (node*)malloc(sizeof(node*));
                    p = top;
                    while (p->nextNode != NULL){
                        p = p->nextNode;
                    }
                    printf("\nEnter Data: ");
                    scanf("%d",&value);
                    newNode->data = value;
                    p->nextNode = newNode;                
                    break;
                default:
                printf("\nWrong choice\n");
                    break;
                }
            break;

        case 2:
            printf("\nPress 1 to remove from begin\nPress 2 to remove from any position\nPress 3 to remove from end\n\nEnter choice: ");
            scanf("%d",&sCh);
            switch (sCh){
                case 1:
                    top = top->nextNode;
                    break;
                
                case 2:
                    printf("\nEnter position: ");
                    scanf("%d",&pos);
                    i = 0;
                    p = top;
                    if(pos <= listSize()){
                        while (i != pos){   
                            p2 = p;
                            p = p->nextNode;
                            i++;
                        }
                        p2->nextNode = p->nextNode;
                    }
                    else{
                        printf("\nInvalid Position\n");
                    }
                    
                    break;

                case 3:
                    p = top;
                    p2 = p->nextNode;
                    while (p2->nextNode != NULL){
                        p = p->nextNode;
                        p2 = p->nextNode;
                    }
                    p->nextNode = NULL;                
                    break;
                default:
                printf("\nWrong choice\n");
                    break;                
            }
            break;

        case 3:
            p=top;
            while (p!=NULL){
                printf("\n%d\n",p->data);
                p=p->nextNode;
            }
            break;

        
        default:
            break;
        }       
    }while (ch!=9); 
    printf("\nExiting...\n");
}