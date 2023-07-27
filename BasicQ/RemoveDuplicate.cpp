#include <bits/stdc++.h>
using namespace std;

int main()
{

    int a[5] = {2, 2, 2, 2, 2};

    set<int> st; //    ---->          The set function in stl sorts the arr and it does not take the duplicate numbers
    for (int i = 0; i < 5; i++)
    {
        st.insert(a[i]);
    }
    int index = 0;
    for (auto it : st)
    {
        a[index] = it;
        index++;
    }
    return index;

    return 0;
}