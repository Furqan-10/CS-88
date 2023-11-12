#include <iostream>
using namespace std;
int coloringTime(string cols[], int size);
main()
{
    int size;
    cout<<"Enter the size of Array: ";
    cin>>size;
    string cols[size];
    for(int idx=0; idx<size; idx++)
    {
        cout<<"Enter Element "<<idx+1<<": ";
        cin>>cols[idx];
    }
    cout<<"Time to color: "<<coloringTime(cols,size)<<" seconds";

}

int coloringTime(string cols[], int size)
{
    int time=0;
    string b=cols[0];
    for(int idx=0; idx<size; idx++)
    {   
         if(cols[idx]==b)
         {
            time=time+2;
         }
         else
         {
            time=time+3;
         }
         b=cols[idx];
    }
    return time;
}