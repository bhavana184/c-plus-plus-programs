#include<iostream>
using namespace std;
int main()
{
int base,height;
float area(float b,float h,float r=0.5);//default for 3rd argument
cout<<"enter base and height of triangle : "<<endl;
cin>>base;
cin>>height;
cout<<"You entered ";
cout<<"Base : "<<base<<"metre , Height : "<<height<<"metre"<<endl;
float a=area(base,height);//default for 3rd argument will be taken,it need not be passed ,
//if passed will take the passed value else default value
cout<<"Area of triangle : "<<a<<"metre square"<<endl;
return 0;
}
float area(float b,float h,float r=0.5)
{
float a = r*b*h;
return a;
}
