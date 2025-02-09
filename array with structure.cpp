#include <iostream>
using namespace std;
struct stu{
    string name;
    int age;
    float percentage;
};

int main()
{
    stu s[5]={{"Akum Laura",21, 41.8}, 
    {"Toshi Madarchod", 20, 78.4},
    {"Wati Pokor",19, 92.3},
    {"Lanu Ronda", 20, 75.9},
    {"Ajung Rendi",19,33.5}
        
    };
    
    for (int i =0; i<5; i++){
        cout<<" Name: "<<s[i].name<<endl;
        cout<<" Age: "<<s[i].age<<endl;
        cout<<" Marks Percent: "<<s[i].percentage<<endl;
        cout<<endl;
    }
    
    
    return 0;
}