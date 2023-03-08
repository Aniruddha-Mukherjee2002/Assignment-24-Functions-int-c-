#include<iostream>
using namespace std;
void swap(int&,int&);
void swap(int &a,int &b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
}
int main()
{
    int a = 12,b = 120;
    printf("a = %d ,, b = %d\n",a,b);
    swap(a,b);
    printf("a = %d ,, b = %d",a,b);
    return 0;
}
