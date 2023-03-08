#include<iostream>
using namespace std;
int add(int,int,int=0);
int add(int a,int b,int c)
{
    return(a+b+c);
}
int main()
{
    int a,b,c;
    cout<<"Enter three numbers : ";
    cin>>a>>b>>c;
    cout<<"Addition of three numbers is = "<<add(a,b,c);
    cout<<"\nEnter two numbers : ";
    cin>>a>>b;
    cout<<"Addition of two numbers is : "<<add(a,b);
    return 0;
}
