
#include<iostream>
using namespace std ;
int calculatePrice(int,int);

main(){
int year;
int money;
cout<<"Enter Money: ";
cin>> money ;
cout<<"Enter Year: " ;
cin>> year ; 
int total = calculatePrice(money,year);
    if(money >= total){
        total = money-total;
        cout<<"Yes! He will live a carefree life and will have "<<total<<" dollars left.";
    }
    
   else if(money < total){
        total = total-money;
        cout<<"He will need "<<total<< " dollars to survive.";
    }
}
    
   int calculatePrice(int money,int year)
   {
    int evenyearsspent =0;
    int oddyearsspent =0;
    int evenyearsmoneyspent =0;
    int oddyearsmoneyspent =0;
    int agedifference =0;
    int totalspent;

    for(int x = 1800; x <= year; x = x+2)
    {
        evenyearsspent = evenyearsspent + 12000; 
    }
        
    for(int x = 1801; x <= year; x = x+2)
    {
        oddyearsspent = oddyearsspent+1;
        agedifference = (year-x+18)*50;
        oddyearsmoneyspent = oddyearsmoneyspent+12000+agedifference;  
    }
    
     totalspent = evenyearsspent+oddyearsmoneyspent;

    return totalspent;
}

    
