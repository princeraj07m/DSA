#include <iostream>
using namespace std;

int rev_a_inteager(int n){
    if(n == 0)return 0;
    cout<<n%10;
    return rev_a_inteager(n/10);
}

int main(){
    int n;
    cin>>n;
    rev_a_inteager(n);
    return 0;
}