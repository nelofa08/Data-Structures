#include<stdio.h>
int main()
{
    int A[200],i,j,n,MAX,LOC=1;
    printf("How many elements do you want to scan:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        printf("A[%d] = ",i);
        scanf("%d",&A[i]);
    }
    MAX=A[1];
    for(j=1;j<=n;j++)
    {
        if(j>n)
        {
            printf("LOC=%d and MAX=%d",i,A[j]);
        }
        else if(MAX<A[j])
        {
            MAX=A[j];
            LOC=j;
        }
    }
    printf("Maximum value is %d\nLocation=%d",MAX,LOC);
    return 0;
}
