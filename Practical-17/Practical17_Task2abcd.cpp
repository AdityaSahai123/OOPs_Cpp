#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>
using namespace std;

// Task B:function for printing the elements in a vector
void printvector(vector<int> v)
{
    vector<int>::iterator it;
    for (it = v.begin(); it != v.end(); ++it)
        cout << *it << " ";
    cout << '\n';
}
int main()
{
    vector<int> v;
    int n;
    cout << "Enter the size of the vector \n";
    cin >> n;
    //Task A
    cout<<"Insert\n";
    for (int i = 0; i < n; i++)
    {
        int ele;
        cin >> ele;
        v.push_back(ele);
    }
    cout<<"\nVector: ";
    printvector(v);
    // Task C
    cout << "Size of the vector is : " << v.size() << "\t Capacity of vector is : " << v.capacity() << "\n";
    // Task D
    v.resize(2 * n, 0);
    cout<< "Printing vector after resizing and intialising after 0\n";
    printvector(v);
    // Task E
    cout << "Checking vector is empty or not after :\n";
    if (v.empty())
        cout << "Vector is empty\t";
    else
        cout << "Vector is not empty";
    return 0;
}