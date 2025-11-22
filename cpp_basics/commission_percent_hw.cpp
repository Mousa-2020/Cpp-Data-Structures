// Lesson #43-HW problem#43 - Commission percent.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
  int totalsales ,precentage;
  cout << "enter totalsales : ";
  cin >> totalsales;
  if (totalsales >= 1000000)
  {
    precentage = 0, 01;
    int totalcommission = precentage * totalsales;
    cout << " totalprecentage :" << totalcommission << endl;

  }
  else if (totalsales >= 500000)
  { 
    precentage= 0.02;
    int totalcommission = precentage * totalsales;
    cout << " totalprecentage :" << totalcommission << endl;

  }
  else if (totalsales >= 100000)
  {
    precentage = 0.03;
    int totalcommission = precentage * totalsales;
    cout << " totalprecentage :" << totalcommission << endl;

  }
  else if (totalsales >= 50000)
  {
    precentage = 0.05;
    int totalcommission = precentage * totalsales;
    cout << " totalprecentage :" << totalcommission << endl;

  }
  else
  {
    int totalcommission = precentage * totalsales;
    cout << " totalprecentage :" << totalcommission << endl;

  }
}
