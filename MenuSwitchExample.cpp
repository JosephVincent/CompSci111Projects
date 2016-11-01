//Program acts as demonstration of switch statements and while/if loops to
//build a menu.
//IMPLEMENTED BY: Joseph Vincent

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
   int temperature = -51, hours = -1, choice;
   double salary;

   while (temperature < -50 || temperature > 150)
   {
        cout << "Enter a temperature:  ";
        cin >> temperature;

        if (temperature < -50 || temperature > 150)
        {
                cout << "Temperature is invalid" << endl;
        }

   }

    while (hours < 0 || hours > 80)
   {
        cout << "Enter hours:  ";
        cin >> hours;

        if (hours < 0 || hours > 80 )
        {
                cout << "Hours are invalid" << endl;
        }

   }


   cout << " 1. Calculate Salary " << endl << " 2. Verify Temperature " << endl << " 3. Quit" << endl;
   cin >> choice;
   switch(choice)
   {
        case 1:

                cout << "$ " << hours*12;
                break;



        case 2:
                if(temperature<0)
                {
                        cout << "Very Cold" << endl;
                {
                        cout << "Cold" << endl;
                }
                if(temperature<100 && temperature>60)
                {
                        cout << "Hot" << endl;
                }
                else
                {
                        cout << "Really Hot." << endl;
                }
                break;

        case 3:
                cout << "The program will finish";
             break;


   }

        return 0;
}
}

