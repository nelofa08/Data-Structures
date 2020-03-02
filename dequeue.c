#include <stdio.h>
#include<conio.h>
int main()
{
    int i,front=0,rear=0,max,j;
    printf("Enter the value of max:\n");
    scanf("%d", &max);
    int array[max];
    printf("Enter the value of rear:\n");
    scanf("%d", &rear);
    printf("Enter the elements:\n");
    for(i=1;i<=rear;i++)
    {
        scanf("%d", &array[i]);
    }
    if(front<=0 && rear<=0)
    {
        printf("Queue is empty.\n");
    }
    front=1;
    if(front==rear)
    {
        j=array[front];
        front=0;
        rear=0;
        printf("After deletion the queue is empty\n");
    }
    else
    {
        front=front+1;
        j=array[front];
        printf("After deletion the elements are:\n");
        for(i=front;i<=rear;i++)
        {
            printf("%d ", array[i]);
        }
        printf("\n");
    }
return 0;
}
