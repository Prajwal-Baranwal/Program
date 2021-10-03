#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"
#define for0(i,n) for(int i=0;i<n;i++)
#define pb push_back
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

void firstNegative(int arr[], int n, int k) {

    list<int> l;
    int i = 0, j = 0;
    while (j < n) {
        //store all negative integers in list
        if (arr[j] < 0) {
            l.push_back(arr[j]);
        }
        if (j - i + 1 < k) { //when window length not reached
            j++;
        } else if (j - i + 1 == k) { //when window length reached
            if (l.size() == 0) {
                cout << 0 << " "; // if list is empty print 0
                i++;
            } else {
                cout << l.front() << " ";
                if (arr[i] == l.front()) { //condition for moving the window
                    l.pop_front();
                }
                i++;
                j++;
            }


        }
    }

}


int32_t main() {
    int n, k;
    cin >> n >> k;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    firstNegative(arr, n, k);

    return 0;

}