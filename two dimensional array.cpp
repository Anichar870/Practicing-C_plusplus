#include <iostream>
using namespace std;
int main() 
{
    int twoxtwo[2][2]={{1,2},{4,5}};
    
    for (int i=0;i<2;i++){
        for(int j=0; j<2; j++){
            cout <<twoxtwo[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}