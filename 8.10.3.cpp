// 8.10.3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<cmath>
using namespace std;

int num = 0;
int counter = 1;
int sum = 1;
int prev_num = 0;
int difference = 0;

int main()
{


    cout << "Enter number for your Fibonacci sequence:  ";
    cin >> num;
    difference = num;

    for (sum = 1; sum <= difference; prev_num = sum)
    {
        sum = counter + prev_num;

        counter = prev_num;

        difference = num - counter;

        cout << sum << " ";
    }
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
