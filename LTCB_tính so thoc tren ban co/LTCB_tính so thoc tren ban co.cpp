#include <cmath>
#include <iostream>
using namespace std;
int main() {
	int so0, sothoc = 0;
	cout << "nhap so 0:"; cin >> so0;
	for (int i = 0; i < so0; i++) {
		cout << "0 so" << i
			<< "so 0 thoc la" << pow(2,i) << endl;
		sothoc += pow(2,i);
	}
	cout << "tong so thoc chua trong" << so0 << "la" << sothoc << "hat\n";
	return 0;
}
