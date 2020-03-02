#include <stdio.h>
int main()
{
    int n,i,j,k;
    printf("Enter the size of the array:\n");
    scanf("%d", &n);
    int array[n];
    printf("Enter the elements:\n");
    for(i=1;i<=n;i++)
    {
        scanf("%d", &array[i]);
    }
    for(i=n;i>0;i--)
    {

        for(j=1;j<=n;j++)

        {
            if(array[j]>array[j+1])
            {
                k=array[j+1];
                array[j+1]=array[j];
                array[j]=k;
            }


        }
    }
    printf("After sorting the array is:\n");
    for(i=1;i<=n;i++)
    {
        printf("%d ",array[i]);
    }
}
