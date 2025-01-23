#include <iostream>

using namespace std;

int main() {
  for (int i = 0; i < 3; i++) { 
    for (int j = 0; j < 3; j++) { 
      if (i == j) { 
        cout << "1 "; 
      } else {
        cout << "0 "; 
      }
    }
    cout << endl; 
  }
  return 0;
}