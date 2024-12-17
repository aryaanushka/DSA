#include <bits/stdc++.h>
using namespace std;

string remove(string s){
    int count=0;
    string ans="";
    for(int i=0;i<s.length();i++){
        if(s[i]=='('){
            if(count>0) ans.push_back(s[i]);
            count++;
        }
        if(s[i]==')'){
            count--;
            if(count>0) ans.push_back(s[i]);
            
        }
    }
    return ans;
}
int main()
{
    string s;
    cin>>s;
    string result=remove(s);
    cout<<result;
    return 0;

return 0;
}