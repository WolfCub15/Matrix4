#include<iostream>
//#include "TVector.h"
#include"TMatrix.h"

using namespace std;

int main() {
	/*int n,k;
	cin >> n;
	TVector<int> a(n),b(n);
	cin >> a;
	b = a;
	cout << b<<endl;
	cout << "____________________________________________________" << endl;
	TVector <int> d(n);
	cin >> d;
	cout << "____________________________________________________" << endl;
	TVector <int> c(d);
	cout << "sum:" << c + b<<endl;
	cout << "subtraction:" << c - b << endl;
	cout << "multiplication:" << c * b << endl;
	cout << "____________________________________________________" << endl;
	cin >> k;
	cout << "multiplication k:" << a*k<< endl;
	cout << "____________________________________________________" << endl;
	cout << "element a[3]:" << a[3] << endl;
*/

	
	int n,k;
	cin >> n >> k;
	TMatrix<int> a(n), b(n),c(n);
	
	cin >> a;
	b = a;
	c = a + b;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < i; j++) {
			cout << "0 ";
		}
		cout << c[i] << endl;
	}
	
	
	return 0;
}