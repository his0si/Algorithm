#include<bits/stdc++.h>

using namespace std;

const int INF=1e9;

int MaximumSubarray(int n, vector<int>& a){
    int ans=-INF;

    int sum=0;
    for(int i=0; i<n; i++){
        sum=max(sum+a[i], a[i]);
        ans=max(ans, sum);
    }

    return ans;
}

int main(){
    int n;
    cin >> n;

    vector<int> a(n);
    for(int i=0; i<n; i++)
        cin >> a[i];

    cout << MaximumSubarray(n, a) << '\n';
}
