#include "bits/stdc++.h"
using namespace std;

void insertAtBottom(stack<int>&st, int item){
    //base case
    if(st.empty()){
        st.push(item);
        return;
    }
    //Step1: 
    int topElement = st.top();
    st.pop();
    //Step2:
    insertAtBottom(st,item);
    //Step3:
    st.push(topElement);
}

int main(){
    stack<int>st;

    st.push(2);
    st.push(4);
    st.push(6);
    insertAtBottom(st, 0);
    int x= st.size();
    while(x--){
        cout<<st.top()<<" ";
        st.pop();
    }

    return 0;
}
