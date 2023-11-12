#include<iostream>
using namespace std;

int totalDigits(int num);

main(){
    int num;
    cout<<"Enter a number: ";
    cin>> num;
    int total =  totalDigits(num);
    cout<<"Total number of digits: "<<total;


}

int totalDigits(int num){
    int sum = 0;
    for(int x = num ; x/10 != 0 ; x = x/10 ){
        sum = sum+1;
    }
    sum = sum+1;
    return sum;
}