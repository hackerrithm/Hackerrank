#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int t;
    int n = 0;
    int k = 0;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        cin >> n >> k;
        vector<int> a(n);
        for(int a_i = 0;a_i < n;a_i++){
           cin >> a[a_i];
            if(a[a_i] <= 0) k--;
        }
        if(k <= 0){
          cout << "NO" <<endl;
        }else{
            cout<< "YES" <<endl;
        }
    }
    return 0;
}