#include<stdio.h>
int pal(int n)
{
    int f = 0;
    for(int i = 2; i<n; ++i)
    {
        if(n%i==0)
        {
            f=1;
            break;
        }
    }
    if(f)
        return 0;
    else
        return 1;
}
int main()
{
   int n;
   printf("Enter a number : ");
   scanf("%d",&n);
   int res = pal(n);
   if(res)
    printf("%d is a  palindrome number.",n);
   else
    printf("%d is not a palindrome number.",n);
   return 0;
}

