#include<iostream>
using namespace std;
bool prime(int);
int primorial(int);
main(){
    int number;
    cout<<"Enter Number: ";
    cin>>number;
    cout<<primorial(number);

}
int primorial(int number){
    int mul=1;
    int x=0;
    for (int i = 1;  x <=number; i = i+1){
       int ans=prime(i);
        if(ans==1){
             mul=mul*i;
             x = x+1;
        }
    }
    return mul;

    
}
bool prime(int number){
    if(number==2 || number==3){
        return true;
    }
   else if(number!=2 && number!=3 ){
        if(number%2==0 || number%3==0){
            return false;
        }
        else{
            return true;
        }
    }}