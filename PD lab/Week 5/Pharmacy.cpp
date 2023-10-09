#include<iostream>	
#include<conio.h>
using namespace std;

void printheader();
int Menu();
void placeOrder();
void modifyOrder();
void about();
void viewSalesSummary();
void exitProgram();
void medicineList();
	int quantity1, quantity2, quantity3;
	float price1, price2, price3;
	string name;
	float newprice1,newprice2,newprice3;


main(){
	system("cls");
	while(true){
	printheader();
	
	int option = Menu();
	

	if (option == 1)
	{
       	 placeOrder();
   	} 

	if (option == 2){
         modifyOrder();
    	} 

	 if (option == 3){
         viewSalesSummary();
        }

	 if (option == 4){
         about();
        }
	
	 if (option == 5){
	 exitProgram();
	}
	
	 if (option!=1 && option!=2 && option!=3 && option!=4 && option!=5) {
        cout << "Invalid option selected. Please try again.";
   	}
	
	
	

}
}


int Menu(){
    	 int option;
	 cout<<endl;
	 cout<<"                                  ====================================== "              <<endl;
	 cout<<endl;
   	 cout<<"                                   1.Place an order for medicine         "              <<endl;
   	 cout<<"                                   2.Modify order                        "              <<endl;
   	 cout<<"                                   3.View the summary of sales           "              <<endl;
   	 cout<<"                                   4.About                               "              <<endl;
   	 cout<<"                                   5.Exit                                "              <<endl;
	 cout<<endl;
	 cout<<"                                  ====================================== "              <<endl;
   	 cout<<"Enter your option(1-5): ";
   	 cin>>option;
	 return(option);
}

void printheader()
	{
	cout<<"                             ************************************************************   "<<endl;                                                                          
	cout<<"                             *                                                          *   "<<endl;
	cout<<"                             *------<<<<<<    PHARMACY MANAGEMENT SYSTEM    >>>>>>------*   "<<endl;
	cout<<"                             *                                                          *   "<<endl;  
	cout<<"                             ************************************************************   "<<endl;
                                                                     
}        


void placeOrder() {

	cout <<endl;
	cout << "*********************************************************************************        "<<endl;
	cout << "	                     AVAILABLE MEDICINES                                       "<<endl;
        cout << "#################################################################################        "<<endl;
        cout << " MEDICINE ID    |     MEDICINE TYPE    |    NAME              |          PRICE(RS)        "<<endl;
    	cout << "#################################################################################        "<<endl;                             
	cout << " A              |     OTP              |   Panadol            |          Rs.10.0          "<<endl;
	cout << " B              |     OTP              |   Brufen             |          Rs.15.0          "<<endl;
	cout << " C              |     OTP              |   Arinac             |          Rs.20.0          "<<endl; 
	cout << "#################################################################################        "<<endl;
	cout <<endl;

	
	price1 = 10.0;
	price2 = 15.0;
	price3 = 20.0;
	
	cout<<"Enter Customer's Name: ";
	cin>> name;
	cout<<"Enter Quantity of Panadol: ";
	cin>> quantity1;
	cout<<"Enter Quantity of Brufen: ";
	cin>> quantity2;
	cout<<"Enter Quantity of Arinac: ";
	cin>> quantity3;
	newprice1 = quantity1*price1;
	newprice2 = quantity2*price2;
	newprice3 = quantity3*price3;	
	cout<<endl;
	cout<<"Your Order has been placed."<<endl;
	cout<<endl;
	cout<<"Press any key to get receipt....";
	getch();
	system("cls");

	cout<<endl;
	cout<<"##########################################################################                              "<<endl;
	cout<<"                       Here is the Order list                                                           "<<endl;
	cout<<"##########################################################################                              "<<endl;
	cout<<" Customer Name: "<<name                                                                                        <<endl;
	cout<<"##########################################################################                              "<<endl;
	cout<<" MEDICINE NAME                   QUANTITY                     TOTAL PRICE                               "<<endl;
	cout<<"##########################################################################                              "<<endl; 
	cout<<" Panadol"<<"                         "<<quantity1<<"                             Rs  "<<newprice1                               <<endl;
	cout<<" Brufen"<<"                          "<<quantity2<<"                             Rs  "<<newprice2                               <<endl;                            
	cout<<" Arinac"<<"                          "<<quantity3<<"                             Rs  "<<newprice3                               <<endl;
	cout<<"**************************************************************************                              "<<endl;
	cout<<"                                          "<<"PAYABLE AMOUNT: "<<"Rs."<<newprice1+newprice2+newprice3            <<endl;
	cout<<"**************************************************************************                              "<<endl;
	cout<<endl;
	
	cout<<"Press any key to return to menu....";
	getch();
	system("cls");
	
}	
	

void modifyOrder() {
    cout << "You selected option 2 - Modify an order."<<endl;
}

void viewSalesSummary() {
    cout << "You selected option 3 - View sales summary."<<endl;
}   
        
void about(){
	
	system("cls");
	cout<<endl;
        cout<<" My mission of this pharmacy management system is to provide accessible, reliable, and"<<endl;
	cout<<" personalized healthcare solutions that empower individuals on their journey to better health."<<endl;
	cout<<" We understand the importance of convenient access to medication information, prescription"<<endl;
	cout<<" management, and health resources. With a team of experienced pharmacists and cutting-"<<endl;
	cout<<" edge technology, we've created a user-friendly platform that puts your health at your"<<endl;
	cout<<" fingertips. Whether you need to refill prescriptions, access medication guides, or connect"<<endl;
	cout<<" with our knowledgeable pharmacists for expert advice, we're here to make managing your "<<endl;
	cout<<" health easier. Join us in taking the next step towards a healthier, happier you."<<endl;
	cout<<endl;
	cout<<endl;

	cout<<"Press any key to return to menu....";
	getch();
	system("cls");
	
}	

	

void exitProgram() {
    cout << "Exiting the program. Goodbye!"<<endl;
    exit(0);
}