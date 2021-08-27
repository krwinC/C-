#include <iostream>
#include <vector>

using namespace std;

int minInOrder(vector<int>& num, int left, int right)
{
    int result = num[left];
    for (int i = left + 1; i < right; i++)
    {
        if (num[i] < result)
        {
            result = num[i];
        }
    }
    return result;
}
int minNumbInRotate(vector<int>& v)
{
    int size = v.size();
    if (size == 0)
    {
        return 0;
    }
    int left = 0;
    int right = size - 1;
    int mid = 0;
    while (v[left] >= v[right])
    {
        mid = left + (right - left) / 2;
        if (v[left] == v[right] && v[mid] == v[left]) 
        {
            return minInOrder(v, left, right);
        }
        if (v[mid] >= v[left])
        {
            left = mid;
        }
        else 
        {
            right = mid;
        }
        if (v[left + 1] == v[right])
        {
            return v[right];
        }
    }
    return v[left];
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
    cout << minNumbInRotate(v) << endl;
    return 0;
}
