
#include<iostream>
using namespace std;
int main()
{
	float temp,ht;
	int op,cont;
	cout<<"Tasks to do:\n1.Temperature in Celsius to Fahrenheit\n2.Temperature in Fahrenheit to celsius\n3.Height in Centimeters to Feet\n4.Height in Feet to Centimeters";

    do{
            cout<<endl;
    	cout<<"choose an option:";
		cin>>op;
    	switch(op)
    	{
    		case 1:cout<<"assume given temperature is in celsius"<<endl;
    			   cout<<"Enter temperature: ";
    			   cin>>temp;
    			   cout<<"celsius =" <<temp<<endl;
    			   temp = (temp * 9)/5 +32;
    			   cout<<"fahrenheit =" <<temp<<endl;
    			   break;
    		case 2:cout<<"assume given temperature is in fahrenheit"<<endl;
    			   cout<<"Enter temperature: ";
    			   cin>>temp;
    			   cout<<endl;
    			   cout<<"fahrenheit =" <<temp<<endl;
    			   temp = (temp-32)*5/9;
    			   cout<<"celsius =" <<temp<<endl;
    			   break;
			case 3:cout<<"assume given height is in centimeters"<<endl;
    			   cout<<"Enter height: ";
    			   cin>>ht;
    			   cout<<endl;
    			   cout<< "centimeter = "<<ht<<endl;
    			   ht = ht/30.48;
    			   cout<< "feet = "<<ht<<endl;
    			   break;
			case 4:cout<<"assume given height is in feet"<<endl;
    			   cout<<"Enter height: ";
    			   cin>>ht;
    			   cout<<endl;
    			   cout<< "feet ="<<ht<<endl;
    			   ht = ht*30.48;
    			   cout<<"centimeter = "<<ht<<endl;
    			   break;
		 	default:cout<<"ooopsss you chose wrong option,pls choose the correct one!!!!"<<endl;
		}
		cout<<"Do you want to continue,enter 0 for NO and 1 for YES : "<<endl;
		cin>>cont;
	}while(cont==1);//&& op>1 && op<5
	return 0;
}
