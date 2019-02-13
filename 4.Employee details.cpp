//4. Write a program to read an employee’s information from the user and print the same.
//Employee’s information shall include employee ID (int), employee name (string) and
//employee salary (float).
#include<iostream>
using namespace std;
main()
{
   int id;
   string name;
   float sal;
   cout << "Enter the employee id :";
   cin >> id;
   cout << "Enter the employee name : ";
   cin >> name;
   cout << "Enter the employee salary :" ;
   cin >> sal;
   cout << "Employee id :  " << id << endl;
   cout << "Employee name :  " << name << endl;
   cout << "Employee salary :  " << sal << endl;

   return 0;
}
