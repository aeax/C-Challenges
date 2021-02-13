//
//  main.cpp
//  aeax
//
//  Created by Chris G on 2/13/21.
//
#include <iostream>
using namespace std;
int main()
{
int i, y;

cout << "Enter 2 values to check which is greater.";
cin >> i;
cin >> y;

if (i > y)
    cout << i << "is greater than" << y << "\n";
else
    cout << y << "is greater than" << i << "\n";

return 0;
}
