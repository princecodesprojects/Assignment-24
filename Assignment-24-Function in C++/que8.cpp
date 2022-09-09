#include<iostream>
using namespace std;
float area(int );
int area(int l,int b);
float are(float base,float h);

int main()
{
    int r;
    cout<<"Enter radius to calculate area of circle\n";
    cin>>r;
    cout<<area(r)<<endl;
     int l,b;
     cout<<"Enter length and width"<<endl;
     cin>>l>>b;
     cout<<"Area of rectangle is "<<area(l,b)<<endl;
     int base, h;
     cout<<"Enter base and height"<<endl;
     cin>>base>>h;
     cout<<"Area of traigle is "<<are(base,h)<<endl;
    return 0;
}

float area(int r)
{
    return 3.14*r*r;
}
int area(int l,int b)
{
    return l*b;
}

float are(float base,float h)
{
    return 0.5*base*h;
}