#include <iostream>
using namespace std;


int pow(int m,int n){
    if (n==0)
    {
        return 1;
    }
    else if(n%2==0)
    {
        /* code */
        return pow(m*m,(n)/2)*m;
    }
    else 
    {
        return pow(m*m,(n-1)/2)*m;
    }
    
    
}

int main() {
    int m,n;
    cout<< "ENTER  the value upto which u want : "<<endl;
    cin>> m;
    cout<< "ENTER  the power upto which u want : "<<endl;
    cin>> n;
    int power=pow(m,n);
    cout<<power<<endl;
    return 0;
}