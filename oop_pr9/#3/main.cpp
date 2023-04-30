#include "Set.h"
#include <bits/stdc++.h>

using namespace std;

int main() {
    Set<int> mySet(5);

    cout << "Inserting 2,3,4 to the set: ";

    mySet.Add(2);
    mySet.Add(3);
    mySet.Add(4);

    cout << mySet << endl;

    cout << "Checking if 3 is in the set: ";

    if (mySet.In_Set(3)) 
    {
        cout << "Yes" << endl;
    }

    else 
    {
        cout << "No" << endl;
    }

    cout << "Checking if 5 is in the set: ";

    if (mySet.In_Set(5)) 
    {
        cout << "Yes" << endl;
    }

    else {
        cout << "No" << endl;
    }

    cout << "Getting 3 from the set: " << mySet.Get(3) << endl;
    cout << "Set after removing element: " << mySet << endl;

    cout << "Checking if set is empty: ";

    if (mySet.Is_Empty()) 
    {
        cout << "Yes" << endl;
    }

    else 
    {
        cout << "No" << endl;
    }

    cout << "Checking if set is full: ";

    if (mySet.Is_Full()) 
    {
        cout << "Yes" << endl;
    }

    else 
    {
        cout << "No" << endl;
    }

    Set<char> charSet(3);

    cout << "Inserting a,b,c to the set: ";

    charSet.Add('a');
    charSet.Add('b');
    charSet.Add('c');

    cout << charSet << endl;

    Set<string> stringSet(2);

    cout << "Inserting foo,bar to the set: ";

    stringSet.Add("foo");
    stringSet.Add("bar");

    cout << stringSet << endl;

    return 0;
}