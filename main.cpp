#include <iostream>
using namespace std;

int main() 
{
int counter = 0;
double n = 0.0, Multi = 0.0, Div = 0.0, Out1 = 0.0, Out2 = 0.0;

Multi = n * n;
Div = n / n;
Out1 = (n+3)/5;
Out2 = ((n+3)/5) + ((n+7)/2);

while(n != -1.0) //exit condtion 
{
cout << "\nPlease enter a Number (-1 to exit): ";
cin >>n;

if(n == -1)
{
cout << "\nHave a nice day! " << endl;
}
else if(n*n)
{
cout << "\n " << n << " * " << n << " = " << Multi << endl; 
      
cout << "\n " << n << " / " << n << " = " << Div << endl;

cout << "\n (" << n << " +3)/5 " << " = " << Out1 << endl; 
cout << "\n ((" << n << " +3)/5) " << n << " + 7)/2 " << " = " << Out2 << endl;

}
}

/////////////////////////////////////////////////////////


   
return 0;
}