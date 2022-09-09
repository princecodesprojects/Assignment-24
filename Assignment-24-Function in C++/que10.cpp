#include<iostream>
using namespace std;

int add(int a,int b)
{
    return a+b;
}

float add(float p,float q)
{
    return p+q;
}
int main()
{
    int a,b;
    cout<<"Enter two numbers"<<endl;
    cin>>a>>b;
    cout<<"Sum of "<<a<<" and "<<b<<" is"<<add(a,b)<<endl;
    float p,q;
    cout<<"Enter two numbers"<<endl;
    cin>>p>>q;
    cout<<"Sum of "<<p<<" and "<<q<<" is"<<add(p,q)<<endl;
    return 0;
}