#include<iostream>
using namespace std;
void diamond(int);

main(){
    int rows;
    cout<<"Enter desired number of rows: ";
    cin>> rows;
    diamond(rows);

}

void diamond(int rows){
    for(int x = rows; x >= 1 ; x = x-1){
        for(int y = 1; y <= x; y = y+1){ 
            cout<<"*";
    }
        cout<<endl;
}
}