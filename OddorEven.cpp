//Implemented By: Joseph Vincent
//Program finds out if the number entered by the user is odd. 
//If the user decides to enter more than one number, the program
//keeps track of how many odd and even numbers were entered.

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{

  char c = 'y';

  int num, entries, odd=0, even=0;

  double average, tot=0;
  cout << "Do you have a number to enter(enter Y for yes, and N for no: " << endl;
  cin >> c;

  if (c=='n')
    {
      cout <<"No number entered";
      return 0;
    }
    
  while(c=='y'||c=='Y')
    {
      cout <<"Enter a number:  " <<endl;
      cin >> num;
      
      if (num%2 == 0)
        {
          cout << "Number is even"<<endl;

          even=even+1;
          tot = tot+num;
        }
      else
        {
          cout << "Number is odd "<<endl;

          odd=odd+1;
          tot=tot+ num;
        }
        
      cout << "Do you have a number to enter(enter 'y' for yes, any other character for no: " << endl;
      cin >> c;
    }
   
  average = tot/(odd+even);
  cout << even << "  Numbers were even."<<endl;
  cout << odd << "  Numbers were odd." <<endl;
  cout << average << "  is the average of all numbers entered.";

  return 0;
}
