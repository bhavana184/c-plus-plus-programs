//7. A perfect number is one whose divisors add up to the number. For example, 6 is a perfect
//number because 6 = 1 + 2 + 3. Write a program that prints all perfect numbers from 1 till
//10000.
#include<iostream>
using namespace std;

int main () {
    int num=10000, i, divSum, counter;

    //cout<<"Enter a number :";
    //cin>>num;

    /* Check for every number between 1 to num,
    whether it is perfect number or not */
    for(counter = 1; counter <= num; counter++){
        /* Find all divisors of a number between
        1 to num/2 and add it to divSum */
        divSum = 0;
        for (i = 1; i <= counter/2; i++) {
            if (counter % i == 0) {
                divSum += i;
            }
        }

        /* Check if Divisor sum is equal to input number */
        if (divSum == counter)
            cout<<counter<<" is a Perfect Number" <<endl;

    }
    return 0;
}
