vector<int> v;              // empty vector of integers
vector<int> v(5);           // vector of size 5, default initialized        //Declaring vectors
vector<int> v(5, 10);       // vector of size 5, all elements = 10
vector<int> v = {1, 2, 3};  // vector initialized with values 

v[i]        // access element at index i
v.at(i)     // safer access (throws error if out of range)           //accessing elements

v.size()        // number of elements
v.capacity()    // allocated storage (may be >= size)             //size and capacity
v.empty()       // check if vector is empty

v.push_back(x);     // add element at end
v.pop_back();       // remove last element
v.insert(v.begin()+pos, x);   // insert at position
v.erase(v.begin()+pos);       // erase at position
v.clear();          // remove all elements
v.begin()      // pointer to first element            //Iterators
v.end()        // pointer to one past last element    //""
v.front()      // first element
v.back()       // last element
v.resize(n);   // change size to n
v.swap(v2);    // swap contents with another vector


for(int i=0; i<v.size(); i++)   // index loop
for(auto it=v.begin(); it!=v.end(); it++)   // iterator loop           //Traversal
for(int x : v)                  // range-based loop


push_back(x) → add element at end

pop_back() → remove last element

size() → number of elements

insert(pos, x) → insert at position

erase(pos) → delete at position

clear() → remove all elements

begin(), end() → iterators for traversa