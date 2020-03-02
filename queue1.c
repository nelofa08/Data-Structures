#include <stdio.h>
#define MAX 50
int queue_array[MAX];
int rear = - 1;
int front = - 1;
main()
{
    int choice;
    while (1)
    {
        printf("\n1.Insert element\n");
        printf("2.Delete element \n");
        printf("3.Display\n");
        printf("4.Quit \n\n");
        printf("Enter your choice : ");
        scanf("%d", &choice);
        switch (choice)
        {
            case 1:
            {
                int add_item;
                if (rear == MAX - 1)
                printf("Queue Overflow \n");
                else
                {
                        if (front == - 1)
                        front = 0;
                        printf("Inset the element: ");
                        scanf("%d", &add_item);
                        rear = rear + 1;
                        queue_array[rear] = add_item;
                }
            break;
            }

            case 2:

                if (front == - 1 || front > rear)
                {
                    printf("Queue Underflow \n");
                   //     return ;
                }
                else
                {
                        printf("Element deleted from queue is : %d\n", queue_array[front]);
                        front = front + 1;
                }
            break;

          case 3:{
                int i;
                if (front == - 1)
                    printf("Queue is empty \n");
                else
                {
                    printf("Queue is : \n");
                    for (i = front; i <= rear; i++)
                    printf("%d ", queue_array[i]);
                    printf("\n");
                }

            break;
            }
            case 4:
            exit(1);
            default:
            printf("Wrong choice \n");
        }
    }
}





