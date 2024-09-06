#include<bits/stdc++.h>
using namespace std;
int main(){
    string str = "aaabbdeddffhgkeepp";
    int n = str.length();
     stack<char> st;  //create a stack
     st.push(str[0]);
     int i=0;
     // unique value push into stack 
      for(int i=1;i<n;i++){
         if(str[i]!=st.top()) st.push(str[i]);
      }
     //push stack value into the string
      str ="";
    while(st.size()>0){
         str+=st.top();
         st.pop();
    }
    //reverse the string
    reverse(str.begin(),str.end());
    cout<<str;
}