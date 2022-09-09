#include<iostream>
using namespace std;
void xRaisedToPowerY(int x,int y);
int main()
{
    int x,y;
    cout<<"Enter value of x and y"<<endl;
    cin>>x>>y;
    xRaisedToPowerY(x,y);
    return 0;
}

// void xRaisedToPowerY(int x,int y)
// {
//   int value=1,i;
//   for(i=0;i<y;i++)
//   {
//     value=value*x;
//   }
//   cout<<x<<" to the power "<<y<<" is "<<value;
  
// }

void xRaisedToPowerY(int x,int y)
{
  int a=1;
  while(y--)
  {
    a=a*x;
  }
  cout<<a;
}