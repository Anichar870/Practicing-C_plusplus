#include<iostream>
using namespace std;
int main()
{
    int array[6]={10,20,30,40,50,60};
    
    array[2]=34;
    for(int i=0; i<6; i++){
        cout<< array[i]<< " ";
        
    }
    cout<<endl;
    
return 0;
}