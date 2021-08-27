#include <iostream>
#include <vector>
using namespace std;

bool find(vector<vector<int>> array, int target)
{
    int rows = array.size();
    int cols = array[0].size();
    if (!array.empty() && rows > 0 && cols > 0)
    {
        int row = 0;
        int col = cols - 1;
        while (row < rows && col >= 0)
        {
            if (target == array[row][col])
            {
                cout << row + 1 << " row" << "," << col + 1 << " colum"<<endl;
                return 1;
            }
            else if (target >= array[row][col])
            {
                ++row;
            }
            else if (target <= array[row][col])
            {
                --col;
            }
        }
        return 0;
    }
    return -1;
}

int main()
{
    //在最后一行输入回车、回车结束
    //int x = 0;
    //vector<vector<int>> vec;
    //vector<int> v;
    //while (cin >> x) {
    //    v.push_back(x);
    //    if (cin.get() == '\n') {
    //        vec.push_back(v);
    //        v.clear();
    //    }
    //    if (cin.peek() == '\n') {
    //        //vec.push_back(v);
    //        break;
    //    }
    //}
    //cout << "row:" << vec.size() << endl;
    //cout << "col:" << vec[0].size() << endl;
    //cout << "验证输出\n";
    //for (int i = 0; i < vec.size(); i++) {
    //    for (int j = 0; j < vec[0].size(); j++) {
    //        cout << vec[i][j] << " ";
    //    }
    //    cout << endl;
    //}

    //在最后一行输入空格以及回车结束
    int x = 0;
    vector<vector<int>> vec;
    vector<int> v;
    while (cin >> x) {
        v.push_back(x);
        if (cin.get() == '\n') {
            vec.push_back(v);
            v.clear();
        }


        if (cin.peek() == '\n') {
            vec.push_back(v);
            break;
        }
    }

    cout << "row:" << vec.size() << endl;
    cout << "col:" << v.size() << endl;
    cout << "验证输出\n";
    for (int i = 0; i < vec.size(); i++) {
        for (int j = 0; j < v.size(); j++) {
            cout << vec[i][j] << " ";
        }
        cout << endl;
    }

    cout << "input the number you want:" << endl;
    int target;
    cin >> target;
    cout << find(vec, target);
    return 0;
}
