#include<iostream>
using namespace std;
int parityAnalysis(int number);
main() {
    int number;
	cout<<"Enter a 3-digit number: ";
	cin>> number;
    int a = parityAnalysis(number);
    cout<<a;
  

}

int parityAnalysis(int number){
    int dig1,dig2,dig3,sum;
	dig1= number%10;
	number= number/10;
	dig2= number%10;
	number= number/10;
	dig3= number%10;
	sum= dig1+dig2+dig3;
    int evenodd;
    if (sum % 2 == number % 2){
        evenodd = 1;
    }
    
    else {
        evenodd = 0;
    }
return evenodd;
}
