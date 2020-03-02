#include<stdio.h>
int main()
{
    int A[200],i,j,n,MIN,LOC=1;
    printf("How many elements do you want to scan:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        printf("A[%d] = ",i);
        scanf("%d",&A[i]);
    }
    MIN=A[1];
    for(j=1;j<=n;j++)
    {
        if(j>n)
        {
            printf("LOC=%d and MAX=%d",i,A[j]);
        }
        else if(MIN>A[j])
        {
            MIN=A[j];
            LOC=j;
        }
    }
    printf("Minimum value is %d\nLocation=%d",MIN,LOC);
    return 0;
}
