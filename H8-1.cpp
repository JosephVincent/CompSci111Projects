/*HW4-1               
PURPOSE: Program finds 10 random numbers, the greatest and smallest amongst that set
calculates the total, calculates the average, and prints all of this information.
IMPLEMENTED BY: Joseph Vincent
DATE: 10-20-2017
*/



#include <iomanip>
#include <cstdlib>
#include <iostream>
#include <ctime>

using namespace std;

int main()
{
  int num, total, average, largest=0, smallest=100;

  srand(time(0));

  for (int d=1;d<=10;d++)
    {
      num=rand()%100+1;
      total+=num;
      if(num>largest)
        {
          largest = num;
        }
      if(num<smallest)
        {
          smallest = num;
	}
    }
  average = total/10;

  cout << "Largest is " << largest << endl
       << "Smallest is " << smallest << endl
       << "Total is " << total << endl
       << " The Average is " << average;
      

  return 0;

}
