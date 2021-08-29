#include <iostream>
#include <vector>
#include <deque>
using namespace std;

int FindGreatestSumOfSubArray(vector<int> array)
{
    int maxsum = 0;
    int tampsum = 0;
    for (int i = 0; i < array.size(); ++i)
    {
        tampsum += array[i];
        if (tampsum <= 0)
        {
            tampsum = 0;
        }
        else if(tampsum>maxsum)
        {
            maxsum = tampsum;
        }
    }
    return maxsum;
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
    cout << FindGreatestSumOfSubArray(v);
    return 0;
}
