#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;


int main(){
   int hashtag = 1,spaces,number,spaceHolder;
    cin >> number;
    spaceHolder = number - 1;
    while(number--)
    {
        spaces = spaceHolder;
        for(int k=1; k <= spaces; k++)
        {
            cout << " ";
        }
        for(int q = 0; q < hashtag; q++)
        {
            cout << "#";
        }
        cout << "\n";
        spaceHolder--;
        hashtag++;
    }
    return 0;
}