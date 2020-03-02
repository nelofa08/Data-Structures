#include<stdio.h>
int main()
{
    int A[200],i,key,n,c=0,count=0;
    printf("How many elements do you want to scan:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        printf("A[%d] = ",i);
        scanf("%d",&A[i]);
    }
    printf("Enter the key word:");
    scanf("%d",&key);
    for(i=1;i<=n;i++)
    {
        if(key==A[i])
        {
            c = 1;
            count++;
        }
    }

    printf("%d times\n",count);
    return 0;
}
