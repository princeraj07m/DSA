#include <iostream>
using namespace std;


string numberToTitle(int n) {
    string res = "";
    while (n > 0) {
        n--;  
        char ch = 'A' + (n % 26);
        res = ch + res;
        n /= 26;
    }
    return res;
}


int main(){
        int n;
        cin>>n;

        cout<<numberToTitle(n);
}



