//5. Write a program to take two integer inputs and output their sum, difference, product and
//division (quotient and remainder) as result based on a third input (operator).
#include<iostream>
using namespace std;

int main()
{
    int a,b,s=0,d=0,m=0,q=0,r=0;
    cout<<"enter first number : ";
    cin>>a;
    cout<<"enter second number : ";
    cin>>b;
    s=a+b;
    d=a-b;
    m=a*b;
    q=a/b;
    r=a%b;
    cout<<"sum = "<<s<<endl;
    cout<<"difference = "<<d<<endl;
    cout<<"product = "<<m<<endl;
    cout<<"quotient = "<<q<<endl;
    cout<<"remainder = "<<r<<endl;
    return 0;
}
