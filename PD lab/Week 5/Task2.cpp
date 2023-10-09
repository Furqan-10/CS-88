#include<iostream>
using namespace std;
float taxCalculator(char type, float price);

main(){
     char type;
    float price;
    cout<<"Enter the vehicle type code (M, E, S, V, T): ";
    cin>> type;
    cout<<"Enter the price of vehicle: $";
    cin>> price;
    taxCalculator(type,price);
}

float taxCalculator(char type, float price){
   
    if (type == 'M' ){
    float total1 = price + (price*0.06);
    cout<<"The final price of a vehicle type "<<type<< " after adding the tax is: "<<total1<<"$";
    }

    if (type == 'E' ){   
    float total2 = price + (price*0.08);
    cout<<"The final price of a vehicle type "<<type<< " after adding the tax is: "<<total2<<"$";
    }

    if (type == 'S' ){
    float total3 = price + (price*0.1);
    cout<<"The final price of a vehicle type "<<type<< " after adding the tax is: "<<total3<<"$";
    }

    if (type == 'V' ){   
    float total4 = price + (price*0.12);
    cout<<"The final price of a vehicle type "<<type<< " after adding the tax is: "<<total4<<"$";
    }

    if (type == 'T' ){                                       
    float total5 = price + (price*0.15);
    cout<<"The final price of a vehicle type "<<type<< " after adding the tax is: "<<total5<<"$";
    }
    
}
















