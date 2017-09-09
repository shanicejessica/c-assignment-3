#include<iostream>
using namespace std;
int main()
{
 int n1, n2,c;
    cout << "Enter two numbers: ";
    cin >> n1 >> n2;
c=n1*n2;
    while(n1 != n2)
    {
        if(n1 > n2)
            n1 -= n2;
        else
            n2 -= n1;
    }

    cout << "LCM = " << c/n1;
    return 0;
}
