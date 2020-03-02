#include <stdio.h>
int main()
{
    int n,i,key,mid,low,high,m=0,array[100];

    scanf("%d", &n);

    for(i=1;i<=n;i++)
    {
        scanf("%d", &array[i]);
    }
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
