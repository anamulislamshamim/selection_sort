#include<bits/stdc++.h>

using namespace std;

// time complexity: O(n^2);
int main()
{
    vector<int>arr={3,0,5,1,6,4};
    // selection sort:
    for(int s=0;s<arr.size();s++){ // O(n);
        int m_idx=s;
        for(int i=s+1;i<arr.size();i++){ // (n-1) + (n-2)+ .. + 1 + 0 = n*(n+1)/2
            if(arr[i] < arr[m_idx]){
                m_idx=i;
            }
        };
        swap(arr[m_idx],arr[s]);
    };
    for(int i=0;i<arr.size();i++)
        cout << arr[i] << " ";
    return 0;
}
