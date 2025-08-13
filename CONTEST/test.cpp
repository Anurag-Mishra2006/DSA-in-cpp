#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cout<<"Test Case"<<endl;
    cin>>t;
    while(t--){
        int n;
        cout<<"Number of element"<<endl;
        cin>>n;
        vector<int>arr(n);
        cout<<"Enter the elements "<<endl;
        for(int i = 0; i < n; i++)cin>>arr[i];

        sort(arr.begin(),arr.end());
        int median = arr[n/2];
        int ans = 0;
        for(int i = 0; i < n; i++){
            if(arr[i] != arr[i-1]){
                ans = ans + abs(arr[i] - median);
            }
        }
        cout<<ans<<endl;

    }
    return 0;
}