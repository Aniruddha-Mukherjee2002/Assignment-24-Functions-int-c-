#include<iostream>
using namespace std;
float area(int a,int b)
{
    return a*b;
}
float area(float r)
{
    return(3.14*(r*r));
}
float area(float a,float b)
{
    return((a*b)*1/2);
}
int main()
{
    cout<<area(5);
    cout<<endl<<area(1,2);
    cout<<endl<<area(10,20);
}
