#include<iostream>
using namespace std;
void generateFibonacci(int length);

main(){
    int length;
    cout<<"Enter the length of the fibonacci series: ";
    cin>> length;
    generateFibonacci(length);

}

void generateFibonacci(int length){
    int n1 = 0;
    int n2 = 1;
    int next = 0;

    for(int x = 1; x <= length ; x = x+1){


        if (x < length){
        cout<<next<<", ";    
        } 
        if (x >= length){
        cout<<next;    
        } 
        n1 = n2;
        n2 = next;
        next = n1+n2;


    }


}