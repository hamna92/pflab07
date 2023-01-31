#include <iostream>
using namespace std;
int calculateGCD(int number1, int number2);
int calculateLCM(int number1, int number2, int gcd);
main()
{
    int number1;
    int number2;
    int gcd=0;
    int lcm;
    cout<<"enter number1:";
    cin>>number1;
    cout<<"enter the number2:";
    cin>>number2;
    calculateGCD( number1,number2);
    calculateLCM(int number1, int number2, int gcd)
}
 int calculateGCD(int number1, int number2)
 {
    int gcd;
  for(int x; x>=100 ; x=x+1)
  {
    if(number1%x==0  &&  number2%x==0)
    {
      gcd=x;
    }
  }
   return gcd;
   int calculateLCM(int number1, int number2, int gcd)
   {
    
   }
   
  
 }



 