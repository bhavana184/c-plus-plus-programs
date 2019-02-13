#include<iostream>
using namespace std;
class MCA
{
    // Access specifier
    public:
    // Data Members
    string course;

    // Member Functions()
    void printcourse()
    {
       cout << "I am in " << course ;
    }
};
class BTECH
{
    // Access specifier
    public:
    // Data Members
    string course;

    // Member Functions()
    void printcourse()
    {
       cout << "I am in " << course;
    }
}obj2;
int main() {

    // Declare an object of class geeks
    MCA obj1;

    // accessing data member
    obj1.course = "MCA ";
    obj2.course ="BTECH";
    // accessing member function
    obj1.printcourse();
    cout<<endl;
     obj2.printcourse();
    return 0;
}


