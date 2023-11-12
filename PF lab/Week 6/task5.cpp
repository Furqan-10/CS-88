#include<iostream>
using namespace std;

float discount(string day, string month, float amount);

main() {
    string day,month;
    float amount;
    cout<<"Enter Purchase Day: ";
    cin>> day;
    cout<<"Enter Purchase Month: ";
    cin>> month;
    cout<<"Enter Purchase Amount: ";
    cin>> amount;
    float adis = discount(day,month,amount);
    cout<<"Payable Amount after discount: "<<adis;




}

float discount(string day, string month, float amount){
float pay = amount;
if (day == "Sunday" && month == "October"){
    pay = pay - (pay*0.1); 
}
if (day == "Sunday"){
    pay = pay - (pay*0.05);
}

return pay;


}