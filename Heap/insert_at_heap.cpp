#include<bits/stdc++.h>
using namespace std;

void insert_at_max_heap(vector<int>&v, int val)
{
    v.push_back(val);//insert at last index;

    int child = v.size() - 1;//current node index

    while(child != 0) // if true then it is the root
    {
        int parent = (child - 1)/2;//formula
        if(v[child] > v[parent])
        {
            swap(v[child], v[parent]);
        }
        else
            break;
        child = parent;
    }

}
int main()
{
    int n;
    cin>>n;
    vector<int>v(n);

    for(int i = 0; i<n; i++)
    {
        cin>>v[i];
    }
    int val;
    cin>>val;

    insert_at_max_heap(v , val);
    for(auto i : v)
    {
        cout<<i<<" ";
    }

}
// 10
// 23 15 21 13 9 19 8 2 4 7
// 18
//output : 23 18 21 13 15 19 8 2 4 7 9 