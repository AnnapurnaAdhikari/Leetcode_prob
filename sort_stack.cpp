#include<bits/stdc++.h>
using namespace std;
void sortedInsert(stack<int> &st,int element){
    if(st.empty() || element > st.top())
        st.push(element);
    else{
        int top_element = st.top();
        st.pop();
        sortedInsert(st,element);
        st.push(top element);
    }
}
void sortStack(stack<int> &st){
    if(!st.empty()){
        int top_element = st.top();
        st.pop();
        sortStack(st);
        sortedInsert(st,top_element);
    }
}
int main(){
    stack<int> st;
    int n;
    cin>>n;
    while (n--){
        int x;
        cin>>x;
        st.push(x);
    }
    sortStack(st);
    while(!st.empty()){
        int top = st.top();
        st.pop();
        cout<<top<<endl;
    }
    return 0;
}



