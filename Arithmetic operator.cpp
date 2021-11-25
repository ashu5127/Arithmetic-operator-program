#include<iostream>

using namespace std;

int main ()
{
  // Variable Declaration
  int a ,b;
  int result;

  cout << "Simple Arithmetic Operators Example Program \n";
  cout<<"Enter any value:";
  cin>>a;
  cout<<"Enter any value for b:";
  cin>>b;

  result= a + b;
  cout<<"Addition of a and b:"<<result<<endl;

  result = a - b; // subtraction  ( Subtraction or unary minus Arithmetic Operator)
  cout <<"Subtraction of a and b:"<<result<<endl;;

  result = a * b; // multiplication ( Multiplication Arithmetic Operator)
  cout <<"multiplication of a and b"<< result<<endl;

  result = a / b; // division ( Division Arithmetic Operator)
  cout << "Division of a and b:"<<result<<endl;

  result = a %b;
  cout << result<<endl;

  return 0;
}
