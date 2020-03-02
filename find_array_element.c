#include<stdio.h>
int main()
{
    int DATA[200],i,key,n,c=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        printf("DATA[%d] = ",i);
        scanf("%d",&DATA[i]);
    }
    printf("Enter the key word:");
    scanf("%d",&key);
    for(i=1;i<=n;i++)
    {
        if(key==DATA[i])
        {
             printf("Found\n");
             c++;

        }
    }

    if(c==0)
    {
        printf("Not Found");
    }
    return 0;
}
