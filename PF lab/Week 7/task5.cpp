#include<iostream>
using namespace std;

int digitSum(int number);

main(){
    int number;
    cout<<"Enter a number: ";
    cin>> number;
    int sum = digitSum(number);
    cout<<"Sum of digits: "<<sum;


}

int digitSum(int number){
    int mod;
    int sum = 0;

    while(number != 0){
        mod = number%10;
        sum = sum + mod;
        number = number/10;

    }
return sum;

}
