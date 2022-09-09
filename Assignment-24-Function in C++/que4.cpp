#include<iostream>
using namespace std;
int fact(int n);
int comb(int n,int r);
void pascal(int n);

int main()
{
    int n;
    cout<<"how many pascal triangle you want to printf"<<endl;
    cin>>n;
    pascal(n);
}

void pascal(int n)
{
    int i,j;
  for(i=0;i<n;i++)
  {
    for(j=0;j<=i;j++)
    {
        int k=4-i;
        if(j==0)
        {
            while(k>0)
            {
                cout<<" ";
                k--;
            }
        }
        cout<<" "<<comb(i,j);
    }
     cout<<endl;
  }
}

int comb(int n,int r)
{
int nmr=abs(n-r);

     return fact(n)/(fact(r)*fact(nmr));

}

int fact(int n)
{
    int i,sum=1;
    for(i=1;i<=n;i++)
    {
      sum=sum*i;
    }
    return sum;
}