#include <iostream>
#include <vector>
#include <deque>
#include <string>
#include <algorithm> //快排所在的函数库
using namespace std;

 bool cmp(int a, int b) 
 {
    string A = to_string(a) + to_string(b);
    string B = to_string(b) + to_string(a);
    return A < B;
}

string PrintMinNumber(vector<int> numbers)
{
    if (numbers.empty())
        return "";
    string ret ;
    sort(numbers.begin(), numbers.end(), cmp);
    for (size_t i = 0; i < numbers.size(); ++i)
        ret += to_string(numbers[i]);
    return ret;
}

int main()
{
    vector<int> v;
    int x;
    while (cin>>x)
    {
        v.push_back(x);
    }
    cout << endl;
    cout << PrintMinNumber(v);
    return 0;
}
