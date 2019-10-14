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

	int n;
	cin >> n;
	TMatrix<int> a(n);
	cin >> a;
	TMatrix<int> b(a), c(a + b);
	c = a * b;
	cout << a << b << c;
	return 0;
}