// Lab_03_3.cpp
// �������� ����쳿
// ����������� ������ � 3.3
// ������������, ������ �������� �������.
// ������ 5
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	double x; // ������� ��������
	double R; // ������� ��������
	double y; // ��������� ���������� ������

	cout << "x = "; cin >> x;
	cout << "R = "; cin >> R;

	// ������������ � ����� ����
	if (x <= -2)
		y = x + 3; 
	else
		if (x >= -2 && x <= 4)
			y = 1. / 6 * (-R * x - 2 * R - x + 4);
		else  
			if (x >= 4 && x <= (8 - R))
			  y = -R;

		else if (x >= (8 - R) && x <= (8 + R))
			 y = sqrt(pow(R, 2) - pow((x - 8), 2));

		else
			 y = -R;
			
	cout << endl;
	cout << "y = " << y << endl;

	cin.get();
	return 0;
}