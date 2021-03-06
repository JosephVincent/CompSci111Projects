//Program presents a menu with multiple sequence calculation choices. Program then asks for a max and min 
//and then finds the answer of the sequence with the given limits. 
//Program also checks inputs for validation.
//IMPLEMENTED BY:Joseph Vincent



#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
  int choice = 0, lowbound = 0, upbound = 0;

  while (choice !=6)
    {
  while (choice < 1 || choice > 6)
    {
      cout << "Sequence of numbers Menu" << endl << "   1.Odd numbers"
       << endl << "   2.Even numbers" << endl << "   3.Multiples of 3" << endl
       << "   4.Multiples of 4" << endl << "   5.Squares of odd numbers" << endl
       << "   6.Quit" << endl << "Enter your choice:  ";
      cin >> choice;
      if(choice < 1 || choice > 6)
        {
          cout << "Enter a choice between 1 and 6";
        }

    }

  while ( upbound < 1 || lowbound < 1 || upbound<lowbound)
    {
      if (choice == 6)
        break;

      cout << "What is your upper bound?";
      cin >> upbound;
      cout << "What is your lower bound?";
      cin >> lowbound;

        if (upbound < 1 || lowbound < 1)
          {
            cout << "Bounds must be greater than 0.";
              }
        if (upbound < lowbound)
          {
            cout << "Upper bound must be more than the lower bound.";
          }
    }

  int num = lowbound;

  switch(choice)
    {

    case 1 :

      while (num <= upbound)
        {
          if (num%2>0 == 1)
            {
              cout << num<< " ";
            }
          num++;
	}
   choice = 0;
      upbound = 0;
      lowbound = 0;

      break;
    case 2 :

      while (num <= upbound)
        {
          if (num%2>0 == 0)
            {
              cout << num << " ";
            }
          num++;
	}
      choice = 0;
      upbound = 0;
      lowbound = 0;

      break;
    case 3 :

      while (num <= upbound)
        {
          if (num%3>0 ==0)
            {
              cout << num<< " ";
            }
          num++;
        }
      choice = 0;
      upbound = 0;
      lowbound = 0;

      break;
    case 4 :

      while (num <= upbound)
        {
          if (num % 4 >0 == 0)
            {
              cout << num << " ";
            }
          num++;
        }
      choice = 0;
      upbound = 0;
      lowbound = 0;

      break;
    case 5 :

      while (num <= upbound)
        {
          if (num % 2 >0)
            {
              cout <<num*num<<" ";
            }
          num++;
        }
      choice = 0;
      upbound = 0;
      lowbound = 0;
      break;

    case 6 :

   break;
  return 0;



}
    }
}
