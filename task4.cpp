#include <iostream>
using namespace std;
int digitSum(int number);
main()
{
 int number;
 int digit;
 cout<<"enter the number:";
 cin>>number;
 cout<<"enter the digit ";
 cin>>digit;
 digitSum( number);

}
 int digitSum(int number)
 {
 int sum;
 while(number>0)
  {
    int number1= number/10;
    int number2=number%10;
    int sum=number1+number2;
  }
   return sum;
 }
  