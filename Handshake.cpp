#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    	int testCases;
	cin >> testCases;
	while(testCases--)
	{
		int persons = 0;
		cin >> persons;
		if ( persons <= 1){
			cout << 0 << endl;
		}
		else{
			cout << (persons * (persons-1)/2) << endl;	
		}	
	}
	return 0;
}
