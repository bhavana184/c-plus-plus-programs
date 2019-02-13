//9. Write a program that calculates area and perimeter of the following geometric figures.
//Your program should use function overloading and each function should take as inputs
//the required arguments (without constraining the user) and return both area and perimeter
//a Square b. Rectangle

#include<iostream>
using namespace std;
float area(float r)
{
float ar;
ar=r*r;
return ar;
}
float perimeter(float l,float b)
{
float p;
p=2*(l+b);
return p;
}
float area(float l,float b)
{
float ar;
ar=l*b;
return ar;
}
float perimeter(float r)
{
float p;
p=4*r;
return p;
}
int main()
{
float b,r,l;
float result,res;
cout<<"Enter the side of Square: ";
cin>>r;
result=area(r);
cout<<"Area of Square: "<<result<<endl;
res=perimeter(r);
cout<<"perimeter of Square: "<<res<<endl;
cout<<"Enter the Length & Breadth of Rectangle: ";
cin>>l>>b;
result=area(l,b);
cout<<"Area of Rectangle:"<<result<<endl;
res=perimeter(l,b);
cout<<"perimeter of Rectangle: "<<res<<endl;
return 0;
}

