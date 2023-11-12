#include<iostream>
using namespace std;

bool Brick(int,int,int,int,int);

main(){
  
    int Height,Width,Depth,w,h;
    cout << "Brick height: ";
    cin >> Height;
    cout << "Brick width: ";
    cin >> Width;
    cout << "Brick depth: ";
    cin >> Depth;
    cout << "Hole width: ";
    cin >> w;
    cout << "Hole height: ";
    cin >> h;
    cout << Brick(Height,Width,Depth,w,h);
}

bool Brick(int Height,int Width,int Depth,int w,int h){

    if (Height == h && Width == w){
        return true;
    }
    else if (Height == w && Width == h){
        return true;
    }
    else if (Height == h && Depth == h){
        return true;
    }
    else if (Height == w && Depth == w){
        return true;
    }
    else if (Width == h && Depth == h){
        return true;
    }
    else if (Width == w && Depth == w){
        return true;
    }
    return false;
}