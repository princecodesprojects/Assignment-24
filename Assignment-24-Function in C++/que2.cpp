#include<iostream>
using namespace std;
void highDigit(int n);

int main()
{
    int n;
    cout<<"Enter a number"<<endl;
    cin>>n;
    highDigit(n);
    return 0;
}

void highDigit(int n)
{
    int max=-1;
    int temp;
    while(n>0)
    {
        temp=n%10;
        if(temp>max)
        max=temp;
        n=n/10;
    }
   
cout<<"High digit value in number is "<<max;
}