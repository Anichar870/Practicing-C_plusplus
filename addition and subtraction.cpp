
#include <iostream>
using namespace std;
int main()
{
    int n1, n2, sum, dif;
    cout <<"Enter the first number:";
    cin>> n1;
    
    cout<<"Enter the second number:";
    cin>>n2;
    
    sum = n1 + n2;
    dif = n1 - n2;
    
    cout << "the sum of " << n1 << "and" << n2 << "is:" << sum  << endl;
    cout << "the difference of" << n1 << "and" << n2 << "is: "<< dif << endl;
    return 0;
}