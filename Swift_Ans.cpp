/**
 * @summary: Swift_Ans.cc
 * @description:  write a program that counts from 0 to 100, prints "Fizz" 
 * every time the count is a multiple of 3, prints "Buzz"
 * every time the count is a multiple of 5, and prints the count otherwise. 
 * @author: Ruoyu Tan (t.ruoyu@gmail.com)
 * 
 *
 */
#include <iostream>
using namespace std;

int main()
{
    bool flag = true;
    for (int i = 0;i < 101;i++)
    {
        flag = true;
        // prints "Fizz" every time the count is a multiple of 3
        if (i % 3 == 0)
        {
            cout << "Fizz" << endl;
            flag = false;
        }    
        // prints "Buzz" every time the count is a multiple of 5
        if (i % 5 == 0)
        {
            cout << "Buzz" << endl;
            flag = false;
        }
        // prints the count
        if (flag == true)
        {
            cout << i <<endl;
        }
    }
    return 0;
}