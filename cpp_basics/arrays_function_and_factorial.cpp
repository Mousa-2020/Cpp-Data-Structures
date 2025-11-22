/*****************************************************************************
Write c++ program by using function to do the following :
!.you have array of size 6
1.reading 
2.printing 
3.summation
4.max num
5.min num

*******************************************************************************/

#include <iostream>
using namespace std;
void array(int a[6],int sum,int max,int min)
{ cout<<"Enter the elemen array:"<<endl;
    for(int i=0;i<6;i++)
    cin>>a[i];
    cout<<"The element array :";
     for(int i=0;i<6;i++)
    cout<<" "<<a[i];
    sum=0;
    max=a[0];
    min=a[0];
    for(int i=0;i<6;i++)
    sum+=a[i];
    for(int i=0;i<6;i++)
 {   if(a[i]>max)
    max=a[i];
    if(a[i]<min)
    min=a[i];
}
    cout<<endl<<"sum :"<<sum<<endl;
    cout<<"max :"<<max<<endl;
    cout<<"min :"<<min<<endl;
    
}
//hw. data structer 
int fact(int n)
{int f=1;
for(int i=n;i>1;i--)
f=f*i;
return f;
    
    
}

int main()
{
    int a[6],sum=0,max=0,min=0;
   array(a,sum,max,min);
   int n;
   cout<<"Enter num n : ";
   cin>>n;
   cout<<"The Factorial Num "<<n<<": "<<fact(n);
    
}
