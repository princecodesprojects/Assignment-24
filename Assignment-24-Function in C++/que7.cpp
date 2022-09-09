#include<iostream>
using namespace std;
void add(int a,int b,int c=0);
int main()
{
    int a,b,c;
    cout<<"Enter numbers to add them"<<endl;
    cin>>a>>b>>c;
    add(a,b,c);
    return 0;
}

void add(int a,int b,int c)
{
int sum=a+b+c;
cout<<"sum is "<<sum;
}