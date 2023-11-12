#include<iostream>
using namespace std;
int calculate(int);
int untreated=0;

main(){
    int days;
    cout<<"Enter Number of days you visited Hospital: ";
    cin>>days;
    cout<<"Treated patients: "<<calculate(days)<<endl;
    cout<<"UnTreated Patients: "<<untreated;
}

int calculate(int days){
    int x=0;
    int treated=0;
    int y=7;
    for (int  z = 1; z <=days; z++)
    {   
       cout<<"Number of patients who visited hospital on Day "<<z<<": ";
       cin>>x;
       if(z==3 && untreated > treated){
        y++;

       }
       if(x <= y){
        treated = treated+x;
       }
       if(x > y){
        treated = treated+y;
        untreated = untreated+(x-y);
       }
    }

    untreated;
    return treated;
}