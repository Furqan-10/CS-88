#include<iostream>
using namespace std;

string  decideActivity(string,string);

main(){
    string tem,hum;
    cout<<"Enter temperature (warm or cold): ";
    cin>> tem;
    cout<<"Enter humidity (dry or humid): ";
    cin>> hum;
    string decide = decideActivity(tem,hum);
    cout<< "Recommended activity: "<<decide;


}

string  decideActivity(string tem,string hum){
string activity;

if (tem == "warm" && hum == "dry"){
    activity = "Play tennis";
}
if (tem == "warm" && hum == "humid"){
    activity = "Swim";
}
if (tem == "cold" && hum == "dry"){
    activity = "Play basketball";
}
if (tem == "cold" && hum == "humid"){
    activity = "Watch TV";
}

return activity;


}
