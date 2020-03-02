#include<stdio.h>
#define MAX 100

int array[MAX];
int rear = - 1;
int front = - 1;
int main()
{
    int choice;
    int add_item,i;
    while(1)
    {
    printf("\n1.Insert in Queue\n");
    printf("2.Delete in Queue\n");
    printf("3.Display Queue\n");
    printf("4.Exit\n");
    printf("\nEnter Choice:");
    scanf("%d",&choice);
    switch(choice)
    {
    case 1: //insert
                if (rear == MAX - 1)
                printf("Queue is Full\n");
                else
                {
                        if (front == - 1)
                        {
                            front = 0;
                            printf("Insert the desired Element:");
                            scanf("%d", &add_item);
                            rear = rear + 1;
                            array[rear] = add_item;
                        }
                }
            break;

        case 2: //delete
                if (front == - 1 || front > rear)
                {
                    printf("Queue is Empty\n");
                    return ;
                }
                else
                {
                    printf("Element deleted from queue is : %d\n", array[front]);
                    front = front + 1;
                }
            break;

        case 3: //display
            if (front == - 1)
            printf("Queue is empty \n");
            else
            {
                printf("Queue is :");
                for (i = front; i <= rear; i++)
                printf("%d ", array[i]);
                printf("\n");
            }

            case 4:
                exit(1);

            default:
                printf("Wrong Input");


    }

    }
}









