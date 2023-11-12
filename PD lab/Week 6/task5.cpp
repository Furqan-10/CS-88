#include<iostream>
using namespace std;

float calculateFruitPrice(string fruit, string day, double quantity);

main(){
string fruit,day;
float quantity;
cout<<"Enter the fruit name: ";
cin>> fruit;
cout<<"Enter the day of the week (e.g., Monday, Sunday): ";
cin>> day;
cout<<"Enter the quantity: ";
cin>> quantity;
float price = calculateFruitPrice(fruit, day, quantity);
    if (price >= 0){   
        cout<<price;
    }
    else{
        cout << "error";
    }

}

float calculateFruitPrice(string fruit, string day, double quantity){
float amount = 0;

if (day == "Saturday" || day == "Sunday"){
        if (fruit == "banana"){
            amount = 2.70*quantity;
        }
        else if (fruit == "apple"){
            amount = 1.25*quantity;
        }
        else if (fruit == "orange"){
            amount = 0.90*quantity;
        }
        else if (fruit == "grapefruit"){
            amount = 1.60*quantity;
        }
        else if (fruit == "kiwi"){
            amount = 3.00*quantity;
        }
        else if (fruit == "pineapple"){
            amount = 5.60*quantity;
        }
        else if (fruit == "grapes"){
            amount = 4.20*quantity;
        }

    }

    else if (day == "Monday" || day == "Tuesday" || day == "Wednesday" || day == "Thursday" || day == "Friday" ){
        if (fruit == "banana"){
            amount = 2.50*quantity;
        }
        else if (fruit == "apple"){
            amount = 1.20*quantity;
        }
        else if (fruit == "orange"){
            amount = 0.85*quantity;
        }
        else if (fruit == "grapefruit"){
            amount = 1.45*quantity;
        }
        else if (fruit == "kiwi"){
            amount = 2.70*quantity;
        }
        else if (fruit == "pineapple"){
            amount = 5.50*quantity;
        }
        else if (fruit == "grapes"){
            amount = 3.85*quantity;
        }
else {
    return -1;
}
return amount;
}

}