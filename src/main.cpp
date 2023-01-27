#include <iostream>
#include <string>

using namespace std;

using ll = long long;

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	int n; cin >> n;
	while (0 < (n--)) {
		int p; cin >> p;

		auto maxval = ll{ 0 };
		auto maxname = string{};
		while (0 < (p--)) {
			ll val; cin >> val;
			string name; cin >> name;

			if (maxval < val) {
				maxval = val;
				maxname = name;
			}
		}

		cout << maxname << '\n';
	}

	return 0;
}