#include <iostream>
using namespace std;
int ncr(int n,int r){
    if (n==r||r==0)
    {
        return 1;
    }
    else{
        return ncr(n-1,r-1)+ncr(n-1,r);
    }
    
}

 int main(int argc, const char** argv) {

    int r=ncr(4,2);

    cout << r<< endl;
    return 0;
}