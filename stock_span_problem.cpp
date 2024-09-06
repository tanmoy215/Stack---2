#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[] = {100,80 ,60,70,60,75,85};
    int n = sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    int ans[n];
    ans[0] = -1;
    stack<int> st;
    st.push(0);
    for(int i=1;i<n;i++){
        while(st.size()>0 && arr[st.top()]<=arr[i]){
            st.pop();
        }
        if(st.size()==0) ans[i] = -1;
        else ans[i]=st.top();
        //ans[i] = i-ans[i];
        st.push(i);
    }
    for(int i=0;i<n;i++){
        ans[i] = i-ans[i];
    }
    for(int i=0;i<n;i++){
        cout<<ans[i]<<" ";
    }
    return 0;
}