//push and pop//
#include<stdio.h>
int main()
{
    int A[10],i,n,top=-1,element,item,choice,max=10,p;
    printf("Enter array number:\n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("A[%d]=",i);
        scanf("%d",&A[i]);
        top++;
    }
    while(1)
    {

    printf("Enter your choice:\n");
    printf("1.Push\n");
    printf("2.Pop\n");
    scanf("%d",&choice);
    switch(choice)
    {
    case 1:
    printf("Enter value to be inserted:\n");
    scanf("%d",&element);
     if(top==max-1)
    {
        printf("Stack is full\n");
    }
    else
    {
        top=top+1;
        A[top]=element;
        n++;
        printf("After insertion:\n");
    for(i=0;i<n;i++)
    {
        printf("A[%d]=%d\n",i,A[i]);
    }
    }
    break;
    case 2:
        if(top==-1)
    {
        printf("Stack is empty\n");

    }
    else
    {
        item=A[top];
        top--;
        n--;
        if(A[top]==0)
        {
            printf("stack is empty\n");
            goto p;
        }
        printf("After Deletion:\n");
       for(i=0;i<n;i++)
    {
        printf("A[%d]=%d\n",i,A[i]);
    }
    }
    break;
        default:
        printf("Invalid Result");
    }
    }
    p:
    return 0;
}


