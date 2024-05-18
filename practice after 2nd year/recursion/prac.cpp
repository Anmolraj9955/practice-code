#include <iostream>
using namespace std;

int main()
{
    // int n;
    // cin>>n;
    // int arr[n];
    // for (int i = 0; i <n; i++){
    //     cin>>arr[i];
    // }
    // for(int i = 1; i<n; i++){
    //     if(arr[0]%arr[i] != 0){
    //         cout<<"No";
    //         return 0;
    //     }

    // }
    // cout<<"Yes";

    bool ans = true;
    int n;
    cin >> n;
    int x = 0;
    cin >> x;
    for(int i = 0; i < x; i++){
        bool temp = false;
        int a;
        cin >> a;
        if(n % a == 0){
            temp = true;
        }
        ans = temp && ans;
        if(ans == false){
            cout << "No";
            return;
        }
    }
    if(ans){
        cout << "yes";
    }
    else {
        cout << "No";
    }
    
}