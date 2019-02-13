#include<iostream>
using namespace std;
inline float mul(float x,float y)
{
return (x*y);
}
inline double div(double p,double q)
{
return (p/q);
}
int main()
{
float a = 6;
float b = 3;
float c=mul(3.0,3.0 + 2.0);
cout<<c<<endl;
cout<<mul(a,b)<<endl;
cout<<div(a,b)<<endl;
}
