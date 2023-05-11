// https://leetcode.com/problems/search-a-2d-matrix-ii/

#include <iostream>
#include <vector>
#include <string>
#include <cmath>

using namespace std::literals;

int main() {
	std::vector<std::vector<int>> v;
	v = {{1, 4, 7},
	 {2, 5, 8},
	 {3, 6, 9},
	 {10, 13, 14},
	 {15, 16, 20}
	};

	auto func_ = [&v](int k_) -> bool {
		int length = static_cast<int>(v.size());
        int width = static_cast<int>(v[0].size());
        int i = 0;
        int j = width - 1;

        while (i < length && j >= 0) {
            if (v[i][j] == k_) {
                return true;
            }
            if (v[i][j] > k_) {
                --j;
            } else {
                ++i;
            }
        }
        return false; 
	};

	for (int i = 0; i < static_cast<int>(v.size()); ++i) {
        for (int j = 0; j < static_cast<int>(v[0].size()); ++j) {
            std::cout << std::boolalpha << v[i][j] << "="s << func_(v[i][j]) << " "s;
        }
        std::cout << "\n"s;
    }
        

	return 0;
}
