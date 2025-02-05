#include <iostream>
using namespace std;
int main()
{
    float m1, m2, m3, m4, avg;
    cout<<"Enter the four marks: "<<endl;
    cin>>m1>>m2>>m3>>m4;
    
    avg = (m1+m2+m3+m4)/4;
    
    
    if(avg>=80){
        cout<<"1st Division"<<endl;
    } else if(avg>=60){
        cout<<"2nd Division"<<endl;
    } 
    else if(avg>=40){
        cout<<"3rd Division"<<endl;
    } else if(avg>=30){
        cout<<"Passed"<<endl;
    }  
    else{
        cout<<"Fail";
    }
    return 0;
}