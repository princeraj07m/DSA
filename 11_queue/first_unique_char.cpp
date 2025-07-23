#include <iostream>
#include <queue>
#include <unordered_map>
using namespace std;

int firstUniqChar(string s) {
        unordered_map<char,int> m;
        queue<int> q;

        for(int i = 0; i<s.size(); i++){
            if(m.find(s[i]) == m.end()){
                q.push(i);
            }
            m[s[i]]++;

            while(q.size()>0 && m[s[q.front()]] > 1 ){
                q.pop();
            }
        }
        int ans= q.empty()?-1:q.front();
        cout<<ans<<endl;
}

int main(){
    string s;
    cout<<"Enter string : ";
    cin>>s;
    firstUniqChar(s);
}