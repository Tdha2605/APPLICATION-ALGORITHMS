#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<vector<int>> points = {{3,1}, {9,0}, {1,0}, {1,4}, {5,3}, {8,8}};
    vector<int> res;

    sort(points.begin() , points.end()); 

    for (int i = 0; i < points.size(); i++)
    {
        cout << points[i][0] << " " << points[i][1] << "\n";
        if ((i+1) < points.size())
        {
        res.push_back(points[i+1][0] - points[i][0]);
        }
    }

    cout << "widest vertical area is ";

    cout << *max_element(res.begin() , res.end()) << endl;
    
    return 0;
}