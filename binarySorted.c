#include <stdio.h>
int main()
{
    int n,i,key,mid,low=0,high=0,m=0,array[100],k=0,c,j;

    scanf("%d", &n);

    for(i=1;i<=n;i++)
    {
        scanf("%d", &array[i]);
    }
    for(i=2;i<=n;i++)
    {
        k=array[i];
        for(j=i-1;j>0;j--)
        {
            if(array[j]>k)
            {
                array[j+1]=array[j];
                array[j]=k;
            }
            else
            {
                break;
            }
        }
    }
    printf("After sorting the elements are:\n");
    for(i=1;i<=n;i++)
    {
        printf("%d ",array[i]);
    }
    printf("\n");

    low=1;
    high=n;
    printf("Enter the value to be searched:\n");
    scanf("%d", &key);
    for(i=1;i<=n;i++)
    {
        mid=(low+high)/2;
        if(array[mid]==key)
        {
           m++;
        }
        else
        {
            if(array[mid]<key)
            {
                low=mid+1;

            }
            else
            {

                high=mid-1;

            }
        }
    }
    if(m>0)
    {
        printf("Found\n");

        printf("location=Array[%d]", mid);
    }
    else
    {
        printf("Not found\n");
    }

}


