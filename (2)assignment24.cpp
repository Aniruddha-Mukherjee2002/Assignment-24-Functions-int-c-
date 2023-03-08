#include<stdio.h>
int findLargest(int n)
{
    int mod,max = n%10;
    n/=10;
    int t = n;
    while(t != 0)
    {
        mod = t%10;
        if(mod > max)
            max = mod;
        t/=10;
    }
    return max;
}
int main()
{
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    printf("Largest digit in the number : %d",findLargest(n));
    return 0;
}
