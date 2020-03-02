//Linear search//
#include<stdio.h>
int main()
{
    int array[100];
    int n,i,j,s=0,c=0;
    scanf("%d", &n);

    for(i=0;i<=n;i++)

    {   printf("array[%d] = \n", i);
        scanf("%d", &array[i]);
    }

    printf("enter the key value:\n");
    scanf("%d",&j);

    for(i=0;i<=n;i++)
    {
        if(j==array[i])


        {
            c=1;
            s++;
        }
    }
        if(c==1)
    {
        printf("found\n");
        printf("%d times\n", s);
    }
        else
    {
        printf("not found");
    }
    for(i=0;i<=n;i++)
    {
        if(j==array[i])
    {
        printf("location = %d\n", i);
        break;
    }
    }
    return 0;
}

