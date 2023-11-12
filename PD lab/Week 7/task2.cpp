#include<iostream>
using namespace std;
void diamond1(int rows);
void diamond2(int rows);

main(){
    int rows;
    cout<<"Enter the number of desired rows: ";
    cin>>rows;
    diamond1(rows);
    diamond2(rows);


}
void diamond1(int rows){
    for (int i = 1; i <=rows/2; i = i+1)
    {        
        for (int count = 1; count<=(rows/2-i) ; count++){
                cout<<" ";
            }
        for (int j = 1; j<=i; j++)
        {
            cout<<"*";
        }
    cout<<endl;
    }
}
    
void diamond2(int rows){
    for (int i = 1; i <=rows/2; i = i+1)
    {        
                for (int j = 1; j<i; j++)
        {
            cout<<" ";
        }
        for (int count = 0; count<=(rows/2-i) ; count++){
                cout<<"*";
            }

    cout<<endl;
    }
}
  

