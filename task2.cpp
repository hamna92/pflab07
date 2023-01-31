#include <iostream>
using namespace std;
int  totalcount(int number);
main()
{
    int number;
    cout<<"enter number";
    cin>>number;
    int count;
   int  totalcount(number);
   cout<<count;
}
 int  totalcount(int number)
 {
    int count=0;
    while(number>0)
    {
      count=count+1;
      number=number/10;
      cout<< count;
    }
     return count;
   
 }