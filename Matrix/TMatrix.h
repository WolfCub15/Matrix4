#pragma once
#include"TVector.h"
using namespace std;
template <class T>
class TMatrix {
private:
	TVector<TVector<T> > matr;
	int size;
public:
	TMatrix<T>(int _size = 0);
	~TMatrix<T>() {}
	TMatrix<T>(const TMatrix<T> & tmp);
	
	TVector<T> & operator[](const int k);
	/*friend istream & operator >> (istream & in, TMatrix<T> & tmp) {
		int x;
		for (int i = 0; i < tmp.size; i++) {
			for (int j = 0; j < i; j++) {
				in >> x;
			}
			for (int j = i; j < tmp.size; j++){
				in >> tmp[i][j];
			}
		}
		return in;
	}*/
	//friend ostream & operator << (ostream & out, const TMatrix<T> & tmp) {
	//	for (int i = 0; i < tmp.size; i++) {
	//		for (int j = 0; j < i; j++) {
	//			out << "0 ";
	//		}
	//		out << tmp.matr[i] << endl;
	//	}
	//	return out;
	//}
	/*TMatrix<T> operator +(const TMatrix<T> &tmp);
	TMatrix<T> & operator =(const TMatrix<T> &tmp);*/
	////TMatrix<T> operator -(const TMatrix<T> & tmp);
	/*TMatrix<T> operator *(const TMatrix<T> &tmp) {
		TMatrix<T> res(tmp.size);
		for (int i = 0; i < tmp.size; i++) {
			for (int j = i; j < tmp.size; j++) {
				for (int k = i; k <= j; k++) {
					res.matr[i][j] = res.matr[i][j] + T(this->matr[i][k] * tmp.matr[k][j]);
				}
			}
		}
		return res;
	}*/
	//TMatrix<T> operator *(const int k);
};

template<class T>
inline TMatrix<T>::TMatrix(int _size) {
	if (_size < 0) throw - 1;
	this->size = _size;
	this->matr = TVector<TVector<T> >(this->size);
	for (int i = 0; i < this->size; i++) {
		this->matr[i] = TVector<T>(this->size - i, i);
	}
}

template<class T>
inline TMatrix<T>::TMatrix(const TMatrix<T>& tmp) {
	if (tmp.size < 0) throw - 1;
	this->size = tmp.size;
	this->matr = TVector<TVector<T> >(tmp.matr);
}

template<class T>
inline TVector<T>& TMatrix<T>::operator[](const int k) {
	if (k >= 0 && k < this->size) {
		return this->matr[k];
	}
}

//template<class T>
//inline TMatrix<T> TMatrix<T>::operator+(const TMatrix<T> &tmp) {
//	if (this->size != tmp.size) this->size = tmp.size;
//	TMatrix<T> res(tmp.size);
//	res.matr = this->matr + tmp.matr;
//	return res;
//}

//template<class T>
//inline TMatrix<T>& TMatrix<T>::operator=(const TMatrix<T>& tmp) {
//	this->size = tmp.size;
//	this->matr = tmp.matr;
//	return *this;
//}

//template<class T>
//inline TMatrix<T> TMatrix<T>::operator*(const int k) {
//	TMatrix<T> res(this->size);
//	for (int i = 0; i < (this->size); i++)
//		res.matr[i] = (this->matr[i]) * k;
//	return res;
//}

