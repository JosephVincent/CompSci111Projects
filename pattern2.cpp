//Program creates a pattern using for loops.
//Implemented By: Joseph Vincent

#include <iomanip>
#include <iostream>

using namespacestd;

int main()
{

  for(int row = 1; row <= 5; row++)
    {
      for(int col = 1; col <= row; col++)
	{
	  cout << col;
	}
      cout << endl;
    }


}

