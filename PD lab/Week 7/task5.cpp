#include<iostream>
using namespace std;
bool isPrime(int);

main(){
    int number;
    cout<<"Enter Number: ";
    cin>>number;
    cout<<isPrime(number);
    
    
    }
bool isPrime(int num){
    if(num==2 || num==3){
        return true;
    }
   else if(num!=2 && num!=3 ){
        if(num%2==0 || num%3==0){
            return false;
        }
        else{
            return true;
        }
    }
    }
