#include<bits/stdc++.h>
using namespace std;
bool isbalanced(string str){
    int n = str.length();
    stack<char> st;
    if(n%2!=0) return false;
    for(int i=0;i<n;i++){
        if(str[i]=='(') st.push(str[i]);
        else {
             if(st.size()==0) return false;
             else st.pop();
        } 
    }
    if(st.size()==0) return true;
    else return false;
}
int main(){
    string str = "())()(";
    if(isbalanced(str)) cout<<"String is Balanced"<<endl;
    else cout<<"String  is Not Balanced"<<endl;
    return 0;
}