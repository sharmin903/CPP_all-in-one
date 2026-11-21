#include <iostream>
#include <vector>
#include <algorithm>   // needed for find()
using namespace std;

int main()
{
    vector<char> vec = {'a', 'b', 'c', 'd', 'e', 'f'};

    cout << vec.size();                    // number of elements
    vec.push_back('g');                    // add element at the end
    vec.pop_back();                        // remove LAST element (no argument)
    cout << " | empty: " << vec.empty();   // true if size==0 (use !empty() to check "has elements")

    cout << " | front: " << vec.front();   // first element
    cout << " | back: "  << vec.back();    // last element
    cout << " | at(3): " << vec.at(3);     // element at index 3, bounds-checked
    cout << " | [3]: "   << vec[3];        // element at index 3, no bounds check (faster)

    vec.insert(vec.begin()+2, 'z');                // insert ONE value at index 2
    vec.insert(vec.begin()+3, 3, 'x');              // insert 'x' 3 TIMES starting at index 3
    vec.insert(vec.begin()+2, {'j','k','m'});       // insert MULTIPLE values at index 2

    vec.erase(vec.begin()+4);                       // remove ONE element at a position
    // vec.erase(vec.begin(), vec.begin()+3);        // remove a RANGE [start, end)

    cout << " | *begin: " << *vec.begin();       // dereference iterator -> first element's value
    cout << " | *(end-1): " << *(vec.end()-1);   // end() = one-past-last, so end()-1 = last element

    vec.resize(10);                          // grow/shrink to exactly n elements (new slots = default value)
    cout << " | capacity: " << vec.capacity(); // memory reserved (>= size, grows in chunks)
    vec.emplace_back('Z');                   // like push_back, builds element in place

    vector<char> other = {'1','2','3'};
    vec.swap(other);                          // exchange contents with another vector

    auto it = find(vec.begin(), vec.end(), '2'); // find(start, end, value) -> iterator to first match, or end() if not found
    if (it != vec.end())
        cout << " | found '2' at index: " << (it - vec.begin());
    else
        cout << " | '2' not found";

    cout << endl;
    for (char val : vec) cout << val;    // range-based for loop -> visit every element
    cout << endl;

    vec.clear();                          // remove ALL elements, size becomes 0
    cout << "after clear, size: " << vec.size() << endl;

    return 0;
}