#include "bits/stdc++.h"
using namespace std;

const int mx = 45;
long long cnt[mx+1];

int main(void){
     ios::sync_with_stdio(0); cin.tie(0);

    cnt[1] = cnt[2] = 2;

    for (int i=3; i <= mx; i++)
    	cnt[i] += cnt[i-1] + cnt[i-2];

    int n; cin >> n;
    cout << cnt[n];
	
    return 0;
}

/* 
    for n=4 <- count of n=3 + count of arrangements in which there is no B at 3rd position (that means, count of n=2 , because we know that end can't be B, 
                                                                                                                        and n=2 holds all arrangements that does not end with B
*/
