#include <iostream>
#include <string>

using namespace std;

int main() {

	int n;
	int a[10] = {};

	cout << "������� ���������� ����: ";
	cin >> n;

	cout << "������� �����: " << endl;

	for (int i = 0; i < n; i++) {
		int num;
		cin >> num;
		a[num]++;
	}

	for (int i = 0; i < 10; i++) {
		if (a[i]) {
			cout << i << ':' << a[i] << endl;
		}
	}

	return 0;
}