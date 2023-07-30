#include <bits/stdc++.h>
// <bits/stdc++> contains all the libruarys and saves the time in CP
using namespace std;

int main()
{
    // Explination of Pair.
    // We are able to store the 2 variables at a time in a single variable .
    cout << "This is Explination of Pair" << endl;
    pair<int, int> p1 = {1, 2};
    cout << p1.first << " " << p1.second << endl;

    // Storing pair in a pair ,we are able to do nested pair.........
    pair<int, pair<int, int>> p2 = {1, {1, 2}};
    cout << p2.first << " " << p2.second.first << " " << p2.second.second;

    // Array of pair
    pair<int, int> arr[] = {{1, 2}, {2, 3}, {3, 4}, {4, 5}};
    cout << arr[1].second << endl;

    /***************************************************************************************************************************/

    // Explination of Vector
    // Vector is a container who stores the the values dynamically ...we are able to add or delete
    cout << "This is Explination of Vector" << endl;
    vector<int> v;
    v.push_back(1);    // It dynamically adds the 1 to the vector.. it takes more time than emplace_back ,This vector contains  -----> 1
    v.emplace_back(2); // It dynamically adds the 1 to the vector.. it takes lesser time than push_back ,This vector contains  -----> 1 2

    vector<int> v1(5, 100); //  -------> {100,100,100,100,100}
    vector<int> v2(5);      // ---------> {0,0,0,0,0}

    vector<int> v3(5, 20); //------> {20,20,20,20,20}
    vector<int> v4(v3);    // This copys v3 vectors elements in v4.

    vector<pair<int, int>> vec; // We can declare vector as a pair
    vec.push_back({1, 2});
    vec.emplace_back(1, 2);

    vector<int> v5;
    v5.push_back(1);
    v5.push_back(2);
    v5.push_back(3);
    v5.push_back(4);
    cout << "V5 : " << v5[2] << " " << v5.at(0) << endl;

    vector<int>::iterator it1 = v5.begin();
    it1++;
    cout << "Iterator :" << *(it1) << endl; // This prints the value 2 ..beacause v5.begin()=1 and it++ shifts the position to next place

    vector<int>::iterator it2 = v5.end(); // it points out the location next to the last element
    cout << "end() :" << *(it2) << endl;

    cout << "back() :" << v5.back() << endl; // it points out the location to the last element

    // vector<int>::iterator it3 = v5.rbegin();    // it is just a reverse end points out the location before first element
    // cout << "rbegin() :" << *(it3) << endl;
    // vector<int>::iterator it4 = v5.rend();      // it is just a reverse end points out the location before first element
    // cout << "rend() :" << *(it4) << endl;

    cout << "Printing vector :" << endl;

    cout << " v5 : ";
    for (vector<int>::iterator it6 = v5.begin(); it6 != v5.end(); it6++)
    {
        cout << *(it6) << " ";
    }
    cout << endl;
    cout << " v5 using auto : ";
    for (auto it6 = v5.begin(); it6 != v5.end(); it6++)
    {
        cout << *(it6) << " ";
    }
    cout << endl;

    cout << "just use auto and vector name :";
    for (auto it : v5)
    {
        cout << it << " ";
    }
    cout << endl;

    // erase() Function && For multiple delete elements just pass the starting index and ending index
    v5.erase(v5.begin() + 1);
    cout << "This is erase function for v5";
    for (auto it : v5)
    {
        cout << it << " ";
    }
    cout << endl;

    return 0;
}