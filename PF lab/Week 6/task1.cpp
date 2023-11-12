#include<iostream>
using namespace std;
bool answer(int,int);


main() {
    int num1,num2;
    cout<<"Enter the first number: ";
    cin>> num1;
    cout<<"Enter the second number: ";
    cin>> num2;
    int greater;
    greater=answer(num1,num2);
    cout<<greater;
                
}
bool answer(int num1, int num2){
    bool ans;
    if (num1 > num2 ){
        ans = true;
    }
    if (num1 < num2){
        ans = false;
    }
    return ans;


    

}
