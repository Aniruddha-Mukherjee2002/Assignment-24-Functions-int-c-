#include<iostream>
using namespace std;
int maximum(float x,float y)
{
    return(x>y?x:y);
}
float maximum(int x,int y)
{
    return(x>y?x:y);
}
int main()
{
    int x,y;
    float t,m;
    cout<<"enter two numbers : ";
    cin>>x;
    cin>>y;
    cout<<maximum(x,y);

    cout<<"enter two numbers : ";
    cin>>t;
    cin>>m;
    cout<<maximum(t,m);
    return 0;
}
