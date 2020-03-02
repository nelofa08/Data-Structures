#include<stdio.h>
void selection(int *,int );
int Min(int *,int ,int );
int n,i,j;
int main()
{
    int a[100];
    printf("Enter the no of elements:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("a[%d]=",i);
        scanf("%d",&a[i]);
    }
    printf("Before sorting:\n");
     for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
    selection(a,n);
       printf("\nAfter sorting:\n");
     for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
    return 0;
}
void selection(int *ar,int n)
{
    int i=0,loc=0,temp=0;
    for(i=0;i<n;i++)
    {
        loc=Min(ar,i,n);
        temp=ar[loc];
        ar[loc]=ar[i];
        ar[i]=temp;
    }
}
int Min(int *array,int LB,int UB)
{
    int m=LB;
    while(LB<UB)
    {
        if(array[LB]<array[m])
            m=LB;
        LB++;
    }
    return(m);
}
