#include<iostream>
using namespace std;


int greatestCommonDivisor(int,int);
int LeastCommonMultiple(int,int);

main(){
    int n1,n2;
    cout<<"Enter the first number: ";
    cin>> n1;
    cout<<"Enter the second number: ";
    cin>> n2;
    int lcm = LeastCommonMultiple(n1,n2);
    int gcd = greatestCommonDivisor(n1,n2);

    cout<<"GCD: "<<gcd<<endl;
    cout<<"LCM: "<<lcm<<endl;
}


int 
greatestCommonDivisor(int n1,int n2){
    while (n2 != 0){
        int number = n2;
        n2 = n1%n2;
        n1= number;
    }

return n1;
}

int LeastCommonMultiple(int n1,int n2){
    int lcm;
    int greatest = greatestCommonDivisor(n1,n2);
    lcm = n1*n2/greatest;

return lcm;
}