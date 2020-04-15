/*File Name   : Sum of suqares.cc
Creator Name  : Rajya lakshmi
creation Date : 13-4-2020
Aim           : To Find the sum of squares of integers
*/

#include <iostream>
using namespace std;
// condition of usage
int main(int argc, char* argv[])
{
    if (argc == 2)
    {
        cout << "sum of squares of 'n' numbers " << endl;
    }
    else
    {
    	//declaring the variablles
        int i = 0, iNo;       
        int iSum = 0;
        cout << "enter number" << endl;
        cin >> iNo;
        // for loop checking
        for (i = 0; i <= iNo; i++)    
        {
            iSum = (i * i) + iSum;
        }
        // output printing
        cout << iSum;
    }
}
