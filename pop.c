#include<stdio.h>
#define MAX 5
int main()
{
    int top=-1,stack[MAX];
    int ch;
     int val;
     int i;
    while(1)
    {
     if(top==-1)
     {
        printf("\nStack is empty!!");
        break;
    }
    else
    {
        printf("\nDeleted element is %d",stack[top]);
        top=top-1;
    }
    if(top==-1)
    {
        printf("\nStack is empty!!");
    }
        else
    {
        printf("\nStack is...\n");
        for(i=top;i>=0;--i)
        printf("%d\n",stack[i]);
    }
    }
}
