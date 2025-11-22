
#include<iostream>
using namespace std;
void pushs(int stack[6], int& top)
{
  int value;
  if (top == 5)
    cout << "stack is full" << endl;
  else
  {
    cout << "Enter number: ";
    cin >> value;
    ++top;
    stack[top] = value;
    cout << "the push :" << stack[top] << endl;
}
}
void pops(int stack[6], int& top) 
{
  int value;
  if (top == -1)
    cout << "stack is empaty" << endl;
  else
  {
    value = stack[top];
    top--;
    cout << value << endl;
  }
}
void prints(int stack[6], int& top)
{
  if (top == -1)
    cout << "the stake is empty" << endl;
  for (int i = top; i >= 0; i--)
    cout << stack[i] << endl;
}
int main()
{
  int stack[6];
  int top = -1;
  int x;
  while (true)
  {
    cout << "1.push" << endl;
    cout << "2.pop" << endl;
    cout << "3.prant" << endl;
    cout << "4.exit" << endl;
    cout << "Enter Number (1 or 2 or 3 or 4) : ";
    cin >> x;
    switch (x)
    {
    case 1:
      pushs(stack, top);
      break;
    case 2:
      pops(stack, top);
      break;
    case 3:
      prints(stack, top);
      break;
    case 4:
      return 0;
    default:
      cout<<"invalid choice"<<endl;
    }

  } 
}
