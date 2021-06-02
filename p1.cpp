#include <bits/stdc++.h>

using namespace std;

int main() {
	cout << "*****************";
	int n;
	cout << "Enter a number ";
	cin >> n;
	vector<int> v(n);
	v[0] = 0;
	v[1] = 1;
	for(int i=2; i<n; ++i){
		v[i] = v[i-1] + v[i-2];
	}
    cout << "Number is "<< v[n-1];
    cout << "*****************";
    cout << "okieee!";
    return 0;
}
