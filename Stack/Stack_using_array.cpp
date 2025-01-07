#include<bits/stdc++.h>
using namespace std;

class myStack
{
    public:
    vector<int>v;

    void push(int val)
    {
        v.push_back(val);//Insert at top
    }
    
    void pop()
    {
        v.pop_back();//Delete at Top
    }
    int top()
    {
        return v.back();//Top value
    }
    int size()
    {
        return v.size();//Stack Size
    }
    bool empty()
    {
        return v.empty();//
    }
};
int main()
{
    myStack st; //Create a object

    int n;
    cin>>n; //stack size

    for(int i = 0; i<n; i++)
    {
        int x; 
        cin>>x;
        st.push(x);
    }
    while(!st.empty())
    {
        cout<<st.top()<<" ";//traverse all 
        st.pop();//delete the top
    }
}