#include<iostream>
using namespace std;
inline void checkPrime(int n);
int main()
{
    int n;
    cout<<"Enter a number to check prime or not"<<endl;
    cin>>n;
    checkPrime(n);
    return 0;
}

void checkPrime(int n)
{
  int i;
  for(i=2;i<=n/2;i++)
  {
     if(n%i==0)
     {
        break;
     }
  }
  if(i>n/2)
  cout<<n<<" is prime number";
  else
  cout<<n<<" is not prime number";
}