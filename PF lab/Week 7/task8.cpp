
#include<iostream>
using namespace std ;
int calculateMoney(int,int,int);

main(){

int age;
int machineprice;
int price;
cout<<"Enter Lilly's age: ";
cin>> age;
cout<<"Enter the price of the washing machine: ";
cin>> machineprice; 
cout<<"Enter the unit price of each toy: ";
cin>> price; 
int savings = calculateMoney(age, machineprice, price);
    if(savings >= machineprice){
        savings = savings - machineprice;
        cout<<"Yes!"<<endl<<savings;
    }
    
   else if(savings < machineprice){
        savings = machineprice - savings;
        cout<<"No!"<<endl<<savings;
    }
}
    


int calculateMoney(int age,int price,int toyprice){
    int evenyears = 0;
    int oddyears = 0;
    int money = 0;

    for(int x = 2; x <= age; x = x + 2)
    {
        money = money + 10;
        evenyears = evenyears + money;
        evenyears = evenyears - 1;
    }

    for(int x = 1; x < age; x = x + 2)
    {
        oddyears = oddyears + 1;
    }

    int toymoney;
    toymoney = oddyears*toyprice;
    int total = evenyears+toymoney;
    return total;
}

    
