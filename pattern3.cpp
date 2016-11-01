//Program creates a pattern using for loops.
//Implemented By: Joseph Vincent

#include <iomanip>
#include <iostream>

using namespacestd;

int main()
{
  int col;

  for(int row = 5; row >=1 ; row--)
    {
      for(col = 1; col <= row; col++)
	{
	  cout << col;
	}
      cout << endl;
    }


}

