// Soultion HW Lesson#31.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<string>
using namespace std;
int main()
{
  string st1 = "43.22";
  string st2 = "43.22";
  string st3 = "43.22";
  //convert to double
  double st1_double = stod(st1);
  //convert to float
  float st2_float = stof(st2);
  //convert to int
  int st3_int = stoi(st3);
  int N1 = 20;
  //convert to string
  string str;
  str = to_string(N1);
  double N2 = 33.5;
  //Convert to string
  string str1;
  str1 = to_string(N2);
  float N3 = 55.23;
  //convert to string 
  string str2;
  str2 = to_string(N3);
  //float convert to int
  N3 = int(N3);
  cout << "st1 to double is :" << st1_double << endl;
  cout << "st2 to float is :" << st2_float << endl;
  cout << "st3 to int :" << st3_int << endl;
  cout << "N1 to string is :" << N1 <<endl;
  cout << "N2 to string is :" << str1 <<endl;
  cout << "N3 to string is :" << str2 << endl;
  cout << "float to int is :" << N3 << endl;
}
