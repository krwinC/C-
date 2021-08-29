#include <iostream>
#include <vector>
#include <deque>
using namespace std;

void reOrderArray(vector<int>& array)
{
    deque<int> result;
    int num = array.size();
    for (int i = 0; i < num; ++i)
    {
        if (array[i] % 2 == 0)
        {
            result.push_back(array[i]);
        }
        if (array[num - i - 1] % 2 == 1)
        {
            result.push_front(array[num - i - 1]);
        }
    }
    array.assign(result.begin(), result.end());
}

int main()
{
    vector<int> v;
    int x;
    while (cin>>x)
    {
        v.push_back(x);
    }
    for (int j : v)
    {
        cout << j << " ";
    }
    cout << endl;
    reOrderArray(v);
    for (int i : v)
    {
        cout << i << " ";
    }
    return 0;
}
