//read me ������
//������Դ��Khoray��֤����Ҫǿ���ڶ����ַ�����أ���Ҳ��֪����ɶQAQ��


#include <iostream>
#include <algorithm>
#include <queue>

using namespace std;

const int N = 2e5 + 10;

void solve() {
    int x,y;
    cin >> x >> y;
    int g = __gcd(x,y);
    int k;
    cin >> k;
    while(k --)
    {
        int w;
        cin >> w;
        if(w % g == 0)
        {
            cout << 1 << ' ';
        }
        else cout << 0 << ' ';
    }
}

int main() {
	std::ios::sync_with_stdio(false);
	std::cin.tie(nullptr);
	solve();
	return 0;
}