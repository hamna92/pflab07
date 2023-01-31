#include <iostream>
using namespace std;
void printfibonacci(int number);
main()
{
  int number;
  cout<<"enter number";
  cin>>number;
  printfibonacci(number);

}
 void printfibonacci(int number)
 {
    int previous=0;
    int current=1;
    int next;
    cout<<previous <<","<< current;
    for(int count=1; count<=number-2; count++)
    {
        next=previous+current;
        cout<< "," << next;
        previous=current;
        current=next;
    }
    
   
 }
