
#include <iostream> 
using namespace std; 
int main(){
    int n,i=1,sum=0;
    cout << "Enter a number: ";
    cin >> n;
    cout<<"perfect no between one and"<<n<<"are";
       while(i<n){
       if(n%i==0)
       sum=sum+i;
       i++; 

 
    cout << i<<""<<endl; 
}
return 0;
}
