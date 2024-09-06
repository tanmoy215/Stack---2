#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[] = {2,4};
    int n = sizeof(arr)/sizeof(arr[0]);
    stack<int>  st;
    int pge[n],nge[n];
    pge[0] = -1;
    st.push(-1);
    //previous
    for(int i=1;i<n;i++){
        while(st.size()>0 && arr[st.top()]>=arr[i]){
            st.pop();
        }
        if(st.size()==0) pge[i]=-1;
        else pge[i] = st.top();
        st.push(i);
    }
    //next
    stack<int> temp;
    nge[n-1]=n;
    temp.push(n-1);
    for(int i=n-2;i>=0;i--){
        while(temp.size()>0 && arr[temp.top()]>=arr[i]){
            temp.pop();
        }
        if(temp.size()==0) nge[i]=n;
        else nge[i]=temp.top();
        temp.push(i);
    }
    int maxc = 0;
    for(int i=0;i<n;i++){
        int height = arr[i];
        int width = nge[i]-pge[i]-1;
        int area = height*width;
        maxc = max(maxc,area);
    }
    cout<<"Final ans is : "<<maxc<<endl;
    return 0;
}