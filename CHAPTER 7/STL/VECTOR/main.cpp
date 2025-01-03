// vector is dynamic in nature
//  vectors size can be changed at runtime
//  vector is a template class
//  vector is a sequence container
//  vector is a part of STL
//  vector is a dynamic array

#include <iostream>
#include <vector>
using namespace std;

void explainVector()
{

    vector<int> v; // empty vector
    v.push_back(1);
    v.emplace_back(2); // emplace_back is faster than push_back

    vector<pair<int, int>> vec;

    v.push_back({1, 2});
    v.emplace_back(1, 2);

    vector<int> v(5, 100);

    vector<int> v(5);
    vector<int> v(5, 20);

    vector<int> v2(v1);

    vector<int>::iterator it = v.begin();

    it++;
    cout << *(it) << " ";

    it = it + 2;
    cout << *(it) << " ";

    vector<int>::iterator it = v.end();

    vector<int>::iterator it = v.rend();

    vector<int>::iterator it = v.rbegin();

    cout << v[0] << "" << v.at[0];
    cout << v.back() << "  ";

    for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
    {
        cout << *(it) << " ";
    }

    for (auto it = v.begin(); it != v.end(); it++)
    {
        cout << *(it) << " ";
    }
    for (auto it : v)
    {
        cout << it << " ";
    }
    // {10,20,12,23}
    v.erase(v.begin() + 1);

    // {10,20,12,23,35}
    v.erase(v.begin() + 2, v.begin() + 4); // // {10,20,35} {start,end}

    // Insert function
    vector<int> v(2, 100);          // {100,100}
    v.insert(v.begin() + 1, 300);   // {300,100,100}
    v.insert(v.begin() + 1, 2, 10); // {300,10,10,100,100}

    vector<int> copy(2, 50);                       // {50,50}
    v.insert(v.begin(), copy.begin(), copy.end()); // {50,50,300,10,10,100,100}

    //{10,20}
    cout << v.size();

    //{10,20}
    v.pop_back();

    // v1->{10,20}
    // v2->{30,40}
    v1.swap(v2); // v1->{30,40} v2->{10,20}

    v.clear(); // remove all elements

    cout << v.empty();
}

void explainPair()
{
    pair<int, int> p = {1, 3};
    cout << p.first << " " << p.second << endl;
    pair<int, pair<int, int>> p2 = {1, {3, 4}};
    cout << p2.first << " " << p2.second.second << " " << p2.second.first << endl;
    pair<int, int> arr[] = {{1, 2}, {2, 3}, {3, 4}};
    cout << arr[0].first << " " << arr[0].second << endl;
    cout << arr[1].first << " " << arr[1].second << endl;
    cout << arr[2].first << " " << arr[2].second << endl;
}

void explainList()
{
    list<int> ls;
    ls.push_back(2);
    ls.emplace_back(4);

    ls.push_front(5);   // {5,2,4}
    ls.emplace_front(); // {1,5,2,4}
}

void explainDeque()
{
    deque<int> dq;
    dq.push_back(1);
    dq.push_front(4);
    dq.emplace_back(2);
    dq.emplace_front(3);
    dq.pop_back();
    dq.pop_front();
    dq.front();
    dq.back();
}

void explainStack()
{
    stack<int> s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(3);
    s.emplace(5);
    cout << st.top();
    st.pop();
    cout << st.top();
    cout << st.size();
    cout << st.empty();
    stack<int> st1, st2;
    st1.swap(st2);
}

void explainQueue()
{
    queue<int> q;
    q.push(1);
    q.push(2);
    q.emplace(4);

    q.back() += 5;
    cout << q.front();
    q.pop();
    cout << q.front();
    // size swap empty same as stack
}

void explainPriorityQueue()
{
    priority_queue<int> pq;
    pq.push(5);
    pq.push(2);
    pq.push(8);
    pq.emplace(10);

    cout << pq.top();

    pq.pop();

    cout << pq.top();

    // size swap empty fucntions same as others

    // minimize heap
    priority_queue<int, vector<int>, greater<int>> pq;
    pq.push(5);
    pq.push(2);
    pq.push(8);
    pq.emplace(10);

    cout << pq.top();
}

void explainSet()
{
    set<int> st;
    st.insert(1);
    st.emplace(2);
    st.insert(2);
    st.emplace(4);
    st.emplace(3);

    // functionality of isnert in vector can be used also, that only increases efficiency

    // begin(), end(), rbegin(), ren(), size(),empty() and swap() functions are same as those of above\
//{1,2,3,4,5}
    auto it = st.find(3);

    //{1,2,3,4,5}
    auto it = st.find(6);
    if (it == st.end())
    {
        cout << "Not found";
    }
    else
    {
        cout << "Found";
    }
    st.erase(5);
    int cnt = st.count(1);

    auto it = st.find(3);
    st.erase(it); // it takes constant time

    //{1,2,3,4,5}
    auto it1 = st.find(2);
    auto it2 = st.find(4);
    st.erase(it1, it2); // after erase {1,4,5} [first, last)

    // lower bound() and upper bound() functions work  in the same way as  in vector it does

    // this is the syntax
    auto it = st.lower_bound(3);

    auto it = st.upper_bound(3);
}

void explainMultiSet()
{
    multiset<int> ms;
    // EVERTYTHING IS SAME AS SET EXCEPT THAT IT CAN HAVE DUPLICATE ELEMENTS
    ms.insert(1); // {1}
    ms.insert(1); // {1,1}
    ms.insert(1); // {1,1,1}
    ms.erase(1);  // {1,1} all 1's erased
    int cnt = ms.count(1);

    // only one a single 1 is erased
    ms.erase(ms.find(1));

    ms.erase(ms.find(1), ms.find(1) + 2);

    // rest all functions are same as set
}

void explainUnorderedSet()
{
    unordered_set<int> st;
    // everything is same as set except that it is unordered
    // it has a time complexity of O(1) for all operations
    // rest all functions are same as set
}

void explainMap()
{
    map<int, int> mpp;
    map<int, pair<int, int>> mpp2;
    map<pair<int, int>, int> mpp3;
    mpp[1] = 2;
     mpp.emplace({2,3)};
        mpp.insert({3,4});
        mpp{{4,5}}= 10 ;
        {
        {1, 2},
            {2, 3},
        {
            3, 4
        }
        }

    for(auto it: app){
        cout << it.first << " " << it.second << endl;
    }

    cout<<mpp[1]<<endl;
    cout<<mpp[5];
    auto it = mpp.find(3);
    cout<<*(it).second;

    auto it = mpp.find(5);
    //this is the syntax
    auto it= mpp.lower_bound(2);
    auto it= mpp.upper_bound(3);

     // erase, swap, size, empty are same as above
}
void explainMultimap()
{
    // everything is same as map except that it can have duplicate keys
    // only mpp[key] cannot be used here
}

void unorderedmap()
{
    // same as ser and unordered set difference
}

void explainExtra()
{

    sort(a, a + n);
    sort(v.begin(), v.end());

    sort(a + 2, a + 4);

    sort(a, a + n, greater<int>);
    pair<int, int> a[] = {{1, 2}, {2, 3}, {3, 4}};
    // sort it accordingly to second element
    // if second element is same then sort according to first  but in descending
    sort(a, a + n, comp);
    //{{3,4},{2,3},{1,2}};

    int num = 7;
    int cnt = __builtin_popcount(num);
    long long num = 165786578687;
    int cnt = __builtin_popcountll(num);

    string s = "123";
    do
    {
        cout << s << endl;
    } while (next_permutation(s.begin(), s.end()));
}

int main()
{
    explainVector();
    explainPair();
    explainList();
    return 0;
}