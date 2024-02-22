// Công ty XTEC có 4 cửa hàng và quyết định đóng cửa tối đa 2 trong số đó có lợi nhuận âm thấp nhất
// Cho trước lợi nhuận năm 2019 của 4 cửa hàng, hãy đưa ra tổng lợi nhuận âm của những cửa hàng phải đóng cửa.

// Input: Dòng đầu chứa số nguyên T < 20 là số lượng trường hợp Test
//        Mỗi dòng trong số T dòng sau chứa 4 số nguyên phân biệt biểu diễn lợi nhuận năm 2019 của 4 cửa hàng
// Output: Tổng lợi nhuận âm của các cửa hàng cần cắt bỏ

#include <bits/stdc++.h>

using namespace std;

int main() 
{

    int T, store_Profit[3];
    cin >> T;
    for (int  i = 0; i < T; i++)
    {
        cin >> store_Profit[0] >> store_Profit[1];
        cin >> store_Profit[2] >> store_Profit[3];

        sort(store_Profit, store_Profit + 4);

        int lowest_Profit = 0;
        if (store_Profit[0] < 0) lowest_Profit += store_Profit[0];
        if (store_Profit[1] < 0) lowest_Profit += store_Profit[1];

        cout << lowest_Profit << "\n";
    }
    return 0;
}