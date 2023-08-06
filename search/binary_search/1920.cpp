#include <iostream>
#include <stack>
#include <vector>
using namespace std;
const int MAX_SIZE = 100000;
int n,m;



int main() {
	cin >> n;
	int* numbers = new int[n];
	for (int i = 0; i < n;i++) {
		cin >> numbers[i];
	}

	cin >> m;
	int* finding = new int[m];
	int* found = new int[m];
	for (int i = 0; i < m;i++) {
		cin >> finding[i];
	}

	for (int i = 0;i < m;i++) {
		for (int j = 0; j < n;j++) {
			if (numbers[j] == finding[i]) {
				found[i] = 1;
				break;
			}
			else {
				found[i] = 0;
			}
		}
		cout << found[i] << endl;
	}

	

	/*for (int i = 0; i < n; i++) {
		cout << stack[i] << endl;
	}*/
	
	//cin >> n;
}