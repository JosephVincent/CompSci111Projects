/*  
PURPOSE: This program takes a number inputted by the user and proceeds to transform it into seperate numbers. 
IMPLEMENTED BY: Joseph Vincent
DATE: 11/1/2016
USER INFORMATION: Enter a number and this program will seperate it into individual numbers.
*/

#include <iomanip>
#include <iostream>

using namespace std; 
int main()
{

  int num;

  cout << "Enter a number:  ";
  cin >> num;

  while( num != 0)
  {
    cout << num%10 << " ";
    num/=10;
  }

  return 0;

}
