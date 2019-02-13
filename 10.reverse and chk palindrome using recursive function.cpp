/*This code is also working
#include <iostream>
using namespace std;
void reverse(char *str) {
   if(*str == '\0')
      return;
   else {
      reverse(str+1);
      cout<<*str;

   }
}
int main() {
   char str[] = "C++ is fun";
   //char str1[] = "ivi";
   cout<<"Original String: "<<str<<endl;
   cout<<"Reversed String: ";
   reverse(str);


   return 0;
}*/
#include<iostream>
using namespace std;

void recursiveReverse(string &str, int i = 0)
{
    int n = str.length();
    if (i == n / 2)
        return;
    swap(str[i], str[n - i - 1]);
    recursiveReverse(str, i + 1);
}

// Driver program
int main()
{
    string str = "geeks for geeks";
    recursiveReverse(str);
    cout << str;

    return 0;
}
