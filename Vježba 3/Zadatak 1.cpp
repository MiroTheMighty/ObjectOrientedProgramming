#include<iostream>
#include<vector>
#include<algorithm>
#include"Zadatak 1 H.h"

int main() {
	std::vector<int> v1(5);
	std::vector<int> v2;
	std::vector<int> v3;
	int flag = 0, sum = 0;

	UnosVektora(v1, 5);
	UnosVektoraPar(v2, 1, 5);
	IspisVektora(v1);
	IspisVektora(v2);

	for (int i = 0; i < v1.size(); i++) {
		for (int j = 0; j < v2.size(); j++) {
			if (v1[i] == v2[j]) {
				flag = 0;
				break;
			}
			else {
				flag = 1;
				continue;
			}
		}
		if (flag == 1) {
			v3.push_back(v1[i]);
		}
	}

	IspisVektora(v3);

	std::sort(v1.begin(), v1.end());

	for (int i = 0; i < v1.size(); i++) {
		sum += v1[i];
	}
	v1.insert(v1.begin()+1, 0);
	v1.push_back(sum);

	IspisVektora(v1);

	return 0;
}