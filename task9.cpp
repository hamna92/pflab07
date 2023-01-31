#include <iostream>
using namespace std;
float calculateprice(float money, int year);
main()
{
    float money;
    int year;
    cout<<"enter the  inherited money:";
    cin>>money;
    cout<<"enter the year:";
    cin>>year;
    calculateprice( money,  year);
}

  float calculateprice(float money,int year)
  {
  int age;
  int years;
  int usedmoney;
  int moneyy=0;
  for(int age=18; years>=1800;age++)
  {
    if(years%2)
    {
      usedmoney= moneyy+12000;
      if(years!=2)
      {
        usedmoney=(12000+50)*age;
      }
      cout<<usedmoney;
      cout<<"yes he has money left!";
        
    }
    
  } 
  }