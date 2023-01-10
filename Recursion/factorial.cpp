#include <iostream>
using namespace std;


int fact(int n){
    if (n==0)
    {
        return 1;
    }
    else
    {
        /* code */
        return fact(n-1)*n;
    }
    
    
}

int main() {
    int n;
    cout<< "ENTER  the walue upto which u want the factorial: "<<endl;
    cin>> n;
    int factorial=fact(n);
    cout<<factorial<<endl;
    return 0;
}