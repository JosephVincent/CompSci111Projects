#include <iomanip>
#include <iostream>

using namespacestd;

int main()
{
  int col;

  for(int row = 1; row <=5 ; row++)
    {
      for(col = 5; col >= row; col--)
	{
	  cout << col;
	}
      cout << endl;
    }

  return 0;
}
