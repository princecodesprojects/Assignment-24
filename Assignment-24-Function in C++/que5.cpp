#include<iostream>
using namespace std;
int fib(int n);

int main()
{
    int n,flag=0;
    cout<<"Enter a number"<<endl;
    cin>>n;

    for(int i=1; ;i++)
    {
        int value=fib(i);
        cout<<" "<<value;
        if(n==value)
        {
            flag=1;
            break;
        }
        if(value>n)
        break;
    }
    cout<<endl;
    if(flag==1)
    cout<<"Number is in fibonacci series";
    else
    cout<<"Number is not in fibonacci series";
     cout<<fib(n);
    return 0;
}

int fib(int n)
{
    int a=1,b=1,sum;

    if(n<=2)
    return 1;
    for(int i=3;i<=n;i++)
      {
        sum=a+b;
        a=b;
        b=sum;
       }
      return b; 
 }