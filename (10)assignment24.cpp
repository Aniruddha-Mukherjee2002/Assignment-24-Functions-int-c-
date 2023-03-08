#include<iostream>
using namespace std;
int add(int a,int b)
{
    return(a+b);
}
float add(float a,float b)
{
    return(a+b);
}
int main()
{
    float x = 10.50f,y = 89.40f;
    int a = 200,b = 200;
    cout<<add(x,y);
    cout<<endl<<add(a,b);
    return 0;
}
