#include <iostream>
using namespace std;
int main(){
    int base, exp, i, result = 1; 
 cout << "Enter base and exponent\n";
    cin >> base >> exp;
    for(i = 1; i <= exp; i++){
    result = result * base;
     }
    cout << base << "^" << exp << " = " << result;
return 0;
}

