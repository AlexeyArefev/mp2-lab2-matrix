// ����, ���, ���� "������ ����������������-2", �++, ���
//
// sample_matrix.cpp - Copyright (c) ������� �.�. 07.05.2001
//   ������������ ��� Microsoft Visual Studio 2008 �������� �.�. (20.04.2015)
//
// ������������ ����������������� �������

#include <iostream>
#include "utmatrix.h"
//---------------------------------------------------------------------------

void main()
{
	int n, t;
	setlocale(LC_ALL, "Russian");
	cout << "������������ �������� ��������� ������������� ����������� ������"
    << endl;

	cout << "������� ������ ������" << endl;
	cin >> n;

	TMatrix<int> a(n), b(n), c(n);

	cout << "������� ������e a" << endl;
	cin >> a;

	cout << "������� ������e b" << endl;
	cin >> b;

	cout << "�������� ��������:" << endl << "1)+" << endl<< "2)-" << endl;
	cin >> t;
	if(t == 1) {
		c = a + b;

		cout << "Matrix a = " << endl << a << endl;
		cout << "Matrix b = " << endl << b << endl;
		cout << "Matrix c = a + b" << endl << c << endl;
	} else  {
		c = a - b;
		
		cout << "Matrix a = " << endl << a << endl;
		cout << "Matrix b = " << endl << b << endl;
		cout << "Matrix c = a - b" << endl << c << endl;
	}   
}
//---------------------------------------------------------------------------
