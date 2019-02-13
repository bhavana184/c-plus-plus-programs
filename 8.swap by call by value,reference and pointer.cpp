//8. Write a program to swap two numbers: using call by value, call by reference & pointer
#include<iostream>
using namespace std;
void swap(int,int);
void swapr(int &,int &);
void swapptr(int *a, int *b);
int main()
{
	int a,b;
	cout<<"Enter Value Of 1st no.:";
	cin>>a;
	cout<<"Enter Value of 2nd no.:";
	cin>>b;
	cout<<endl;
	cout<<"1.Call by value result"<<endl;
	cout<<"Before swapping\nValue of 1st no. is "<<a<<"\nValue of 2nd no. is "<<b<<endl;
	swap(a,b);
	cout<<"\nOutside function after swapping\nValue of 1st no. is "<<a<<"\nValue of 2nd no. is "<<b<<endl;
	cout<<"1.Call by reference result"<<endl;
	cout<<"Before swapping\nValue of 1st no. is "<<a<<"\nValue of 2nd no. is "<<b<<endl;
	swapr(a,b);
	cout<<"\nOutside function after swapping\nValue of 1st no. is "<<a<<"\nValue of 2nd no. is "<<b<<endl;
	cout<<"1.Call by Pointer result"<<endl;
	cout<<"Before swapping\nValue of 1st no. is "<<a<<"\nValue of 2nd no. is "<<b<<endl;
	swapptr(&a,&b);
	cout<<"\nOutside function after swapping\nValue of 1st no. is "<<a<<"\nValue of 2nd no. is "<<b<<endl;
	return 0;
}
void swap(int a,int b)
{
	int c;
	c=a;
	a=b;
	b=c;
	cout<<"\nInside function after swapping\nValue of 1st no. is "<<a<<"\nValue of 2nd no. is "<<b<<endl;
}
void swapr(int &a,int &b)
{
	int c;
	c=a;
	a=b;
	b=c;
	cout<<"\nInside function after swapping\nValue of 1st no is "<<a<<"\nValue of 2nd no. is "<<b<<endl;
}
void swapptr(int *a, int *b)
{                // *Note the syntax of pointers for arguments

//Swapping:

int temp;

temp=*a;   // *(pointer_variable) to access the value
*a=*b;
*b=temp;
 cout<<"\nInside function after swapping\nValue of 1st no is "<<*a<<"\nValue of 2nd no. is "<<*b<<endl;
}

