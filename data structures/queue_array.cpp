#include <iostream>
using namespace std;
void insertq(int q[], int size, int& f, int& r)
{
    int value;
    if (r == size - 1)
        cout << "full queue";
    else
        cout << "enter value insert : ";
    cin >> value;
    r++;
    q[r] = value;
    //cout<<"insert value :"<<q[r]<<endl;
    if (f == -1)
        f = 0;
}
void deletq(int q[], int& f, int& r)
{
    int value;
    if (f == -1)
        cout << "empty";
    else if (f == r)
    {
        value = q[f];
        f = -1;
        r = -1;
        cout << "delet value :" << value << endl;
    }
    else
    {
        value = q[f];
        f++;
        cout << "delet value :" << value << endl;
    }
}
void print(int q[], int f, int r)
{
    int i;
    if (r == -1)
        cout << "empty";
    else
        for (int i = f; i <= r; i++)
            cout << q[i] << " ";
}
int main()
{
    int q[6];
    int rear = -1, front = -1;
    int checoe;
    const int size = 6;
    do
    {
        cout << "1.insert \n";
        cout << "2.delet \n ";
        cout << "3.print\n";
        cout << "4.exeute \n";
        cout << "enter your cheice :";
        cin >> checoe;
        switch (checoe)
        {
        case 1:
            insertq(q, size, front, rear);
            break;
        case 2:
            deletq(q, front, rear);
            break;
        case 3:
            print(q, front, rear);
        case 4:
            cout << "exeute pro" << endl;
        default:
            cout << "invailod choice";

        }

    } while (checoe != 4);


}
