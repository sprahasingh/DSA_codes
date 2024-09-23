#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[9] = {1,1,4,5,3,3,8,8,6};
    map <int, int> mpp;
    for(int i = 0; i<=9; i++){
        mpp[i] = 0;
    }
    for(int i = 0; i<9; i++){
        mpp[arr[i]]++;
    }

    int n;
    cin>>n;
    while(n--){
        int num;
        cin>>num;
        cout<<mpp[num]<<endl;
    }
    return 0;
}