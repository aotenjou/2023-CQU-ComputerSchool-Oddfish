#include <iostream>
#include <algorithm>
using namespace std;

const int N = 2e5 + 10;
int n;
int a[N];

void solve() {
	cin >> n;
	for (int i = 0 ; i < n ; i ++) {
		cin >> a[i];
	}
	reverse(a, a + n);
	for (int i = 0 ; i < n ; i ++) {
		cout << a[i] ;
		if (i != n - 1)
			cout << ' ';//PTA���⼧�����Ӳ�̫�����������пո񲻸���
	}
	cout << '\n';
}

int main() {
	//���������Ǹ�����������ٵģ�99%����������ܹ�
	std::ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	solve();
	return 0;
}