#include <iostream>
#include <vector>
#include <deque>
using namespace std;

void NumMoreThanHalf_Array(vector<int>& array)
{
    int TheNum;
    int k = 0;
    for (int i = 0; i < array.size(); ++i)
    {
        TheNum = array[i];
        int times = 0;
        for (int j = 0; j < array.size(); ++j)
        {
            if (TheNum == array[j])
            {
                ++times;
            }
        }
        if (times>array.size()/2)
        {
            k = 1;
            cout << "number: " << TheNum << ", "
                << times << " times." << endl;
            break;
        }
    }
    if (k == 0)
    {
        cout << "There is no number's times more than half of the size of array" << endl;
    }
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
    NumMoreThanHalf_Array(v);
    return 0;
}
