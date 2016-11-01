/*              
 PURPOSE: To calculate a theater's gross and net box office profit 
 for a night for a certain movie.
 IMPLEMENTED BY: Joseph Vincent
 DATE: 9-29-16
 USER INFORMATION:  User inputs movie, and the adult and child tickets
 IMPLEMENTATION METHOD: User inputs data then program calculates  
 revenue                                                     */

#include <iomanip>
#include <iostream>
#include <string>

using namespace std;

int main ()
{
  int aTickets, cTickets; 
  string movie;
  double aRevenue, cRevenue;
  double net, gross, dRev;
  
  cout << "What is the name of the movie? ";
  getline(cin, movie);
  cout << "How many adult tickets were sold? ";
  cin >> aTickets;
  cout << "How many child tickets were sold? ";
  cin >> cTickets;
  //gets info from user
  
  aRevenue = aTickets * 10;
  cRevenue = cTickets * 6;
  gross = aRevenue + cRevenue;
  net = gross * .20;
  dRev = gross * .80;
  //calculates the net profit, gross profit, distributor fees, and revenues for adults and children.

  cout << fixed;
  cout << setprecision(2);
  cout << "Movie: " << movie << endl;
  cout << "Child : " << cTickets << endl;
  cout << "Adult : " << aTickets<< endl;
  cout << "Gross : $ " <<  gross << endl;
  cout << "Distributor Fee: $ " << dRev << endl;
  cout << "Net Profit: $ " << net << endl;
  //then prints info 
  return 0;
}
