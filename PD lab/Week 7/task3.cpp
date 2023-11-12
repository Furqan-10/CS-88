#include<iostream>
using namespace std;
void amplify(int number);
main(){
int number;
cout<<"Enter the number to Amplify: ";
cin>>number;
amplify(number);


}
void amplify(int number){

    for (int x = 1; x <=number; x++)
    {
        int y=x;
        if(y%4==0){
        y=y*10;
       }
       cout<<y;
        if(x<number){
        cout<<", ";
        }
    }
    
}
