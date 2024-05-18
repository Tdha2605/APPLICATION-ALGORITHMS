/*
Tại một đại hội thể thao quốc tế có n người xếp thành hàng dài và lần lượt đi qua chào khán giả.
Người thứ i giữ một mã số ai có giá trị là một số nguyên. Alice quan sát và muốn biêt một đoạn liên 
tiếp những người trong hàng có tổng các mã số lớn nhất là bao nhiêu.

Cho mảng s = (a1,...,an). Mỗi đoạn s(ij) = (ai,...,aj) có trọng số w(ij) = ai+...+aj. 
Tìm đoạn trong mảng có trọng số lớn nhất

Input: Dòng thứ nhất chứa 1 số nguyên n <= 10^6
       Dòng thứ hai chưa n số nguyên
Output: Ghi ra duy nhất 2 số nguyên là trọng số max tìm được
*/ 

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n; cin >> n;
    int iId[n];

    for (int i = 0; i < n; i++)
    {
        cin >> iId[i];
    }

    int subseqmax = -2e9;
    
    // 1st solution with complexity is O(n^2)
    for (int i = 0; i < n; i++)
    {
        if (iId[i] < 0) continue;

        int temp_subseqmax = 0;
        for (int j = i; j < n; j++)
        {
            temp_subseqmax += iId[j];
            if (temp_subseqmax > subseqmax) subseqmax = temp_subseqmax;

        }
    }

    // 2nd solution with complexity is O(n)
    cout << subseqmax;

}
