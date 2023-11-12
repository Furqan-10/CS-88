#include<iostream>
using namespace std;

float damage(string ,string ,float,float);

main(){
  string mytype,opponent;
  float attack,defense;  
  cout<<"Enter your type: ";
  cin>>mytype;
   cout<<"Enter opponent's  type: ";
  cin>>opponent;
  cout<<"Enter your attack power: ";
  cin>>attack;
  cout<<"Enter opponent's defense: ";
  cin>>defense;
  float result = damage(mytype,opponent,attack,defense);
  cout<<result;
}

float damage(string mytype,string opponent,float attack,float defense){
    float effectiveness;
    if(mytype=="fire" && opponent=="grass"){
        effectiveness=2;
    }
    else    if(mytype=="fire" && opponent=="water"){
        effectiveness=0.5;
    }
     else   if(mytype=="fire" && opponent=="electric"){
        effectiveness=1;
    }
       else   if(mytype=="electric" && opponent=="fire"){
        effectiveness=1;
    }
      else   if(mytype=="grass" && opponent=="fire"){
        effectiveness=0.5;
    }
      else  if(mytype=="water" && opponent=="grass"){
        effectiveness=0.5;
    }
      else  if(mytype=="water" && opponent=="electric"){
        effectiveness=0.5;
    }
     else   if(mytype=="grass" && opponent=="electric"){
        effectiveness=1;
    }
    float Damage=50*(attack/defense)*effectiveness;
    return Damage;
}