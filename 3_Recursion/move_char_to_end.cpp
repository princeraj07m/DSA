#include <iostream>
using namespace std;

string move_char_to_end(string s, char c){
    if(s.length() == 0)return "";
    char ch = s[0];
    string ans = move_char_to_end(s.substr(1), c);
    if(ch == c){
        return ans + ch;
    }
    return ch + ans;
}


int main(){
    string s;
    cin>>s;
    char c;
    cin>>c;
    cout<<move_char_to_end(s, c);
    return 0;
}