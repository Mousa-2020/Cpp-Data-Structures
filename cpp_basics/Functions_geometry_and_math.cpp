// Lesson#35-function part3-parameters__HW.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<string>
#include<cmath>
using namespace std;
void pname()
{
  cout << "Mousa Al-bher" << endl;
}
void pname1()
{
  string name;
  cout << "please enter your name :"<<endl;
  getline(cin,name);
  cout << "name :" << name << endl;
}
void swap1()
{   //problem#14 sawp number
  cout << "problem#14 sawp number : " << endl;
  int temp, num1, num2;
  cout << "num1 :";
  cin >> num1;
  cout << "num2 :";
  cin >> num2;
  //cout << num1 << endl;
  //cout << num2 << endl;
  temp = num1;
  num1 = num2;
  num2 = temp;
  cout <<"Num1 :"<< num1 << endl;
  cout <<"Num2 :"<< num2 << endl;
}
void area1()
{
  int area, a, b;
  //problem#15 Rectangle area
  cout << "problem#15 Rectangle area :" << endl;
  cout << "a :";
  cin >> a;
  cout << "b :";
  cin >> b;
  area = a * b;
  cout << "Area :" <<area<< endl;
}
static double area2(int A, int B)
{ //problem#16 rectangle area through diagonal and side area
    
    return A * sqrt(B * B - A * A);;
}
static double CircleArea(float pi, int r)
{ // Problem#18 Circle Area
  return pi * r * r;
}
double CircleArea2(float pi, int D)
{//Problem#19 circle area through dia
  return (pi * D * D) / 4;
}
double circlearea3(float pi, int A)
{ //Problem#20 Circle Area inscribed in a square
  return pi * pow(A / 2, 2);
}
double AircleAreaAlongtheCI(float pi, int j)
{ //problem#21 Circle Area ALong the Circumference
  return (j * j/ 4 * pi);
 
}
double  circlearea4(double p, int a, int b, int c, float pi)
{//problem#23 circle area, circle described around an arbitary triangle 
    p = (a + b + c) / 2.0;
    return pi * pow((a * b * c / (4.0 * sqrt(p * (p - a) * (p - b) * (p - c)))), 2);
}
void power()
{ //problem#31 power of 2,3,4
  cout << "problem#31 power of 2,3,4" << endl;
  int num, x, y, z;
  cin >> num;
  x = num * num;
  y = num * num * num;
  z = num * num * num * num;
  cout << "problem#31 power of 2,3,4 :" << endl;
  cout << "enter number :" << num << endl;
  cout << "num*num :" << x << endl;
  cout << "num*num*num :" << y << endl;
  cout << "num * num * num * num: " << z << endl;
}
void Seconed()
{//problem#42 convert day and hourt, mount, seconed To seconed
  cout << "problem#42 convert day and hourt, mount, seconed To seconed :" << endl;
  int day, h, m, s, setseconed = 0;
    // Add #include <cmath> at the top of your file to fix the C2062 error caused by missing sqrt and pow declarations.
  cout << "day :";
  cin >> day;


  cout << "hour: ";
  cin >> h;
    cout << "mount :";
  cin >> m;
  cout << "seconed :";
  cin>>s;
  
  setseconed = day * 24 * 60 * 60 + h * 60 * 60 + m * 60+s;
  cout << "set seconed is : " << setseconed <<endl;
}
void seconed2()
{
  //problem#43 convert seconed to day and hourt ,mount,seconed
  cout << "problem#43 convert seconed to day and hourt ,mount,seconed :"<<endl;
    int day, mount, hour , seconed, remainder;
    cout << "enter many seconed :";
    cin >> seconed;
    day = seconed /(24*60*60);
    remainder = seconed % (24 * 60 * 60);
    hour = remainder /(60 * 60);
    remainder = remainder % (60*60);
    mount = remainder /(60);
    remainder = remainder % (60);
    seconed = remainder;
    cout << day << ": " << hour << ": " << mount << ":" << seconed;
  
}
int main()
{
  pname();
  pname1();
  swap1();
  area1();
  int A;
  int B;
  cout << "problem#16 rectangle area through diagonal and side area" << endl;
  cout << "A :";
  cin >> A;
  cout << "B :";
  cin >> B;
  cout <<"area2: "<< area2(A, B) << endl;
  // Problem#18 Circle Area
  cout << "Problem#18 Circle Area" << endl;
  int r;
    float pi = 3.14f;
  cout << "R :";
  cin >> r;
  cout << "Circle Area :" << CircleArea(pi, r) << endl;
  //Problem#19 circle area through dia
  cout << "Problem#19 circle area through dia :" << endl;
  int D;
  cout << "D : ";
  cin >> D;
  //float pi = 3.14f;
    cout << " circle area through dia :" << CircleArea2(pi, D) << endl;
  //Problem#20 Circle Area inscribed in a square
  cout << "Problem#20 Circle Area inscribed in a square" << endl;
  int NUM2;
  cout << "A :";
  cin >> NUM2;
  cout << "Circle Area inscribed in a square:" << circlearea3(pi, NUM2) << endl;
  ////problem#21 Circle Area ALong the Circumference
  cout << "problem#21 Circle Area ALong the Circumference :" << endl;
  int j;
  cout << "j :";
  cin >> j;
  cout << "Circle Area inscribed in a square :"<< AircleAreaAlongtheCI(pi,j) << endl;
  //problem#23 circle area, circle described around an arbitary triangle
  cout << "problem#23 circle area, circle described around an arbitary triangle :" << endl;
  int a,b,c;
  cout << "a :";
  cin >> a;
  cout << "b :";
  cin >> b;
  cout << "c :";
  cin >> c;
  cout << "circle area, circle described around an arbitary triangle :" << endl;
  
  cout << circlearea4(0,a, b, c, pi) << endl;
  //problem#31 power of 2,3,4
  power();
  cout << endl;
  //problem#42 convert day and hourt, mount, seconed To seconed
  Seconed();
  //problem#43 convert seconed to day and hourt, mount, seconed
  seconed2();
}
