#include<iostream>
using namespace std;
void swap(int &a,int &b);
int main()
{
    int a,b;
    cout<<"Enter two numbers"<<endl;
    cin>>a>>b;
    swap(a,b);
    return 0;
}

void swap(int &a,int &b)
{
   int t=a;
   a=b;
   b=t;
   cout<<"a is "<<a<<" b is "<<b;
}