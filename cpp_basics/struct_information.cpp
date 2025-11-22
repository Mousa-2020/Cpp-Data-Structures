// Lesson#26- Struct .HW.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
struct call
{
  string Emaill;
  string PhoneNumber;
     
};
struct Salary
{
  int MonthlySalary;
  int YearlySalary;
  call contact; // Adding call struct to Salary
};
struct placeOfPlace
{

  string country;
  string city;
  string street;
  int numberhouse;
  Salary salary; // Adding Salary struct to placeOfPlace
};
struct myinformation 
{
  string name;
  int dataofbirth;
  string placeOfBirth;

  string SEX;
  int age;
  string profession;
  placeOfPlace place;
};
int main()
{
  myinformation person1;
person1.name = "Mousa AL-bher";
person1.dataofbirth =2004;
person1.placeOfBirth = "AL-Dhalea -YEM";
person1.SEX = "M";
person1.age = 21;
person1.profession = "Studing Software Engineer";

  person1.place.country = "Iraq";
  person1.place.city = "Baghdad";
  person1.place.street = "Al-Sinaea";
  person1.place.numberhouse = 002;
  person1.place.salary.MonthlySalary = 150;
  person1.place.salary.YearlySalary = 1800;
  person1.place.salary.contact.Emaill = "mousasaleh2024@gmail.com";
  person1.place.salary.contact.PhoneNumber = "07717538315";

  cout << "*************************************************" << endl;
  cout << "Name: " << person1.name << endl;
  cout << "Date of Birth: " << person1.dataofbirth << endl;
  cout << "Place of Birth: " << person1.placeOfBirth << endl;  
  cout << "SEX: " << person1.SEX << endl;
  cout << "Age: " << person1.age << endl;
  cout << "Profession: " << person1.profession << endl;
  cout << "Country: " << person1.place.country << endl;
  cout << "City: " << person1.place.city<<endl;
  cout << "Street: " << person1.place.street << endl;
  cout << "House Number: " << person1.place.numberhouse << endl;
  cout << "Monthly Salary: " << person1.place.salary.MonthlySalary << endl;
  cout << "Yearly Salary: " << person1.place.salary.YearlySalary << endl;
  cout << "Email: " << person1.place.salary.contact.Emaill << endl;
  cout << "Phone Number: " << person1.place.salary.contact.PhoneNumber << endl;
  cout << "*************************************************" << endl;

    
  return 0;





}
