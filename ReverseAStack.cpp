#include<iostream>
using namespace std;
#include<stack>
int main(){
      stack<char>s;
      string s;
      cin>>s;
      for(int i=0;i<s.length();i++)
      {
          char ch=s[i];
          s.push(ch);
      }
      string ans="";
    while(!s.empty())
      {
          ans.push_back(s.top());
          s.pop();
      }
    cout<<ans<<endl;
}
