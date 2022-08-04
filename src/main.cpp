#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	const auto& kg2lb = double{ 2.2046 };
	const auto& lb2kg = double{ 0.4536 };
	const auto& l2g = double{ 0.2642 };
	const auto& g2l = double{ 3.7854 };

	auto t = int{};
	cin >> t;
	while (0 < (t--)) {
		auto x = double{};
		auto y = string{};
		cin >> x >> y;

		if ("kg" == y) {
			x *= kg2lb;
			y = "lb";
		}
		else if ("lb" == y) {
			x *= lb2kg;
			y = "kg";
		}
		else if ("l" == y) {
			x *= l2g;
			y = "g";
		}
		else if ("g" == y) {
			x *= g2l;
			y = "l";
		}

		cout << fixed << setprecision(4) << x << ' ' << y << '\n';
	}

	return 0;
}