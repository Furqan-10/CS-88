#include<iostream>
using namespace std;
void flower(int rednum,int whitenum,int tulipnum);
main(){
	int rednum,whitenum,tulipnum;
	cout<<"Red Rose: ";
	cin>>rednum;
	cout<<"White Rose: ";
	cin>>whitenum;
	cout<<"Tulips: ";
	cin>>tulipnum;

	flower(rednum,whitenum,tulipnum);
	}

void flower(int rednum,int whitenum,int tulipnum){
	float redprice,whiteprice,tulipprice;
	redprice=2;
	whiteprice=4.10;
	tulipprice=2.50;
	float redamount,whiteamount,tulipamount;
	redamount=rednum*redprice;
	whiteamount=whitenum*whiteprice;
	tulipamount=tulipnum*tulipprice;
	float price=redamount+whiteamount+tulipamount;
	if(price>200){
	cout<<"Original Price: $"<<price<<endl;
	cout<<"Price after Discount: $"<<price*0.8;
	}
	if(price<200){
	cout<<"Original Price: $"<<price<<endl;
	cout<<"No discount applied.";
	}
}



