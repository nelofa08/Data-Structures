#include<stdio.h>
int m=0,t,Max=4;
void push(int s[] ,int v)
{
    if(t==Max-1)
    {
        printf("Stack is Full\n");
    }
    else
    {
        ++t;
        s[t]=v;
        ++m;
    }
}
void pop(int s[])
{
    if(t==-1)
    {
        printf("Stack is Empty !!");
    }
    else
    {
        --t;
        --m;
    }
}
void show(int s[])
{
    int i;
    for(i=0;i<m;i++)
    {
        printf("%d ",s[i]);
    }
}
int main()
{
    int i,c,s[Max],v,ag;
    t=-1;
    ag:
    printf("1.Push \n2.Pop \n");
    scanf("%d",&c);
    switch(c)
    {
    case 1:
        printf("Enter Value : ");
        scanf("%d",&v);
        push(s,v);
        show(s);
        break;
    case 2:
        pop(s);
        show(s);
        break;
    default :
        printf("Wrong Input !!! ");
    }
    printf("\n");
    goto ag;


return 0;

}





