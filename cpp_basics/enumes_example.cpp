// Lesson#28 -Enums.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
enum color { red=1, green=2, blue=3, yellow=4, black=5, white=6 };
enum direction { north=1, south=2, east=3, west=4 };
enum week { sat=1,sun=2,mon=3,tue=4,wed=5,thu=6,fri=7 };
enum gender {mall=1,female=2};
enum status { single=1 , married=2 };
int main()
{
  color mycolor;
  direction mydirection;
  week Today;
  gender SEX;
  status mystatus;

mycolor = color::yellow;
mydirection = direction::south;
Today = week::mon;
SEX = gender::mall;
mystatus = status::single;
  cout << "My color is: " << mycolor << endl;
  cout << "My direction is: " << mydirection << endl;
  cout << "Today is: " << Today << endl;
  cout << "SEX is: " << SEX << endl;
  cout << "My status is: " << mystatus << endl;
  return 0;

}
