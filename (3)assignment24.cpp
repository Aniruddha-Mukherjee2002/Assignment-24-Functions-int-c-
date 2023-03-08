#include<stdio.h>
int Pow(int x,int y)
{
    int t =x;
    for(int i = y; i>1; i--)
    {
        x*=t;
    }
    return x;
}

int main()
{
    int x,y;
    printf("Enter a number  : ");
    scanf("%d",&x);
    printf("Enter another number : ");
    scanf("%d",&y);

    printf("%d raised to the power of %d is -> %d",x,y,Pow(x,y));
    return 0;
}
