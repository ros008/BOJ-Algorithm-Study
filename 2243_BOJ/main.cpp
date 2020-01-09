#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>

#define MAX_CANDY 1000000

using namespace std;

long long candy[MAX_CANDY];

void update(vector<long long>& tree, int idx, int s, int e, int pos, long long diff) {
	// a��°�� b��ŭ +
	if (pos < s || e < pos)
		return;

	tree[idx] += diff;

	if (s != e) {
		int mid = (s + e) / 2;
		update(tree, idx * 2, s, mid, pos, diff);
		update(tree, idx * 2 + 1, mid + 1, e, pos, diff);
	}
}

long long query(vector<long long>& tree, int idx, int s, int e, int k) {


}

int main() {
	ios::sync_with_stdio(false); cin.tie(NULL);
	
	int n;
	int h = ceil(log2(MAX_CANDY));
	int size_tree = pow(2, h) * 2;

	vector<long long> tree(size_tree);

	cin >> n;

	int a, b, c;
	while (n--) {
		cin >> a;

		if (a == 1) {
			cin >> b;
			// b: ���� ������ ����
			cout << query(1, 1, n, );
		}
		else {
			cin >> b >> c;
			// b: ���� ������ �� c: �׷��� ������ ����
			update(1, 1, n, b, c);
		}
	}

	return 0;
}