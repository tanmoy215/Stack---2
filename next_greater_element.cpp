//brute force   
     //TC = O(n^2), SC = O(1);
        // #include<bits/stdc++.h>
        // using namespace std;
        // int main(){
        //     int arr[] = {6,3,2,3,4,7,4,8};
        //     int n = sizeof(arr)/sizeof(arr[0]);
        //      for(int i=0;i<n;i++){
        //         cout<<arr[i]<<" ";
        //      }
        //      cout<<endl;
        //      int ans[n];
        //      for(int i=0;i<n;i++){
        //         ans[i] = -1;
        //          for(int j=i+1;j<n;j++){
        //              if(arr[i]<arr[j]){
        //                 ans[i] = arr[j];
        //                 break;
        //              }
        //          }
        //      }
        //      //final output
        //      for(int i=0;i<n;i++){
        //         cout<<ans[i]<<" ";
        //      }
        //     return 0;
        // }
//Using stack : pop,ans,push
//TC = O(n),Sc=O(n);
#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[] = {3,1,2,7,4,6,2,3};
    int n = sizeof(arr)/sizeof(arr[0]);
     for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
     }
      cout<<endl;
     int ans[n];
     stack<int> st;
     ans[n-1] = -1;
     st.push(arr[n-1]);                                            
     for(int i=n-2;i>=0;i--){
        //pop all the element smaller than arr[i]
         while(st.size()>0 && st.top()<=arr[i]){
            st.pop();
         }
         //marl=k the ans in ans array
         if(st.size()==0) ans[i]=-1;
         else ans[i] = st.top();
         //push the arr[i]
         st.push(arr[i]);
     }
     //output
     for(int i=0;i<n;i++){
        cout<<ans[i]<<" ";
     }
}