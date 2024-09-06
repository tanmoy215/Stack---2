#include<bits/stdc++.h>
using namespace std;
void Nextgreater(int arr[],int n){
    stack<int> st;
     int ans[n];
     ans[n-1]=-1;
     st.push(arr[n-1]);
     for(int i=n-2;i>=0;i--){
        while(st.size()>0 && st.top()<=arr[i]){
            st.pop();
        }
        if(st.size()==0) ans[i]=-1;
        else ans[i]=st.top();
        st.push(arr[i]);
     }
     for(int i=0;i<n;i++){
        cout<<ans[i]<<" ";
     }
}
void PreviousGreater(int arr[],int n){
    stack<int> st;
    int ans[n];
    ans[0]=-1;
    st.push(arr[0]);
    for(int i=1;i<n;i++){
        while(st.size()>0 && st.top()<=arr[i]){
             st.pop();
        } 
        if(st.size()==0) ans[i]=-1;
        else ans[i]=st.top();
    }
    for(int i=0;i<n;i++){
        cout<<ans[i]<<" ";
    }
}
void  StockSpanProblem(int arr[], int n){
    stack<int> st;
    int ans[n];
     ans[0]=-1;
     st.push(0);
     for(int i=1;i<n;i++){
        while(st.size()>0 && arr[st.top()]<=arr[i]){
            st.pop();
            if(st.size()==0) ans[i]=-1;
            else ans[i]=st.top();
            st.push(i);
        }
     }
     for(int i=0;i<n;i++){
        cout<<ans[i]<<" ";
     }
}
int main(){
    // int arr[] = {3,1,2,5,4,6,2,3};
    // int n = sizeof(arr)/sizeof(arr[0]);
   
    // Nextgreater(arr,n);
    //  cout<<endl;
    //    PreviousGreater(arr,n);
    int arr[] = {100,80,60,8170,60,75,85};
    int n = sizeof(arr)/sizeof(arr[0]);
    StockSpanProblem(arr,n);
    return 0;
}