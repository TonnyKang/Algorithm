#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
int n;

int main() {
	cin >> n;
	int cnt = 0;
	int i = 1;
	while (n != cnt) {
		int temp = i;
		while (temp) {
			if (temp % 1000 == 666) {
				cnt++;
				break;
			}
			else {
				temp = temp / 10;
			}
		}
		i++;
	}
	cout << i-1;
}
