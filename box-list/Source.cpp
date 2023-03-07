#include "Header.h"
int main() {
	setlocale(LC_ALL, "Russian");
	int n;
	cout <<"������� ���-�� �������: ";
	cin >> n;
	vector <Box> a(n);
	for (int i = 0; i < n; i++) {
		cout << "������� ����� " << i + 1 << ":" << endl;
		a[i].setBox();
	}
	system("cls");
	cout << "���������� � ��������: " << endl;
	for (int i = 0; i < n; i++) {
		cout << "������� ����� " << i + 1 << ":" << endl;
		a[i].getInfo();
	}
	cout << "��������� �������: " << endl;
	for (int i = 0; i < n;i++) {
		for (int j = i + 1;j < n;j++) {
			if (a[i] <= a[j]) cout << "������� " << i + 1 << " <= ������� " << j + 1 << endl;
			else cout << "������� " << i + 1 << " > ������� " << j + 1 << endl;
		}
	}
	cout << "����� ����� ������� �������: " << endl;
	Box max = a[0];
	int k=0;
	for (int i = 1; i < n; i++) {
		if (max <= a[i]) max = a[i]; k++;
	}
	cout << "����� ������� ������� ����� "<<k<< ":" << endl;
	max.getInfo();
	cout << "���� ���� ����������� �������: " << endl;
	Box s1(40,50), s2(100,150), s3(10,30);
	cout << "������� ����� 1:" << endl;
	s1.getInfoS();
	cout << "������� ����� 2:" << endl;
	s2.getInfoS();
	cout << "������� ����� 3:" << endl;
	s3.getInfoS();
	cout << "������� ������������ �������:" << endl;
	for (int i = 0; i < n; i++) {
		cout << "S ������� ����� " << i + 1 << " = "<< a[i].pl()<<endl;
	}
	cout << "������� ���������� �������:" << endl;
	cout << "S ���������� ������� ����� 1 = " << s1.plS() << endl;
	cout << "S ���������� ������� ����� 2 = " << s2.plS() << endl;
	cout << "S ���������� ������� ����� 3 = " << s3.plS() << endl;
	system("pause");
	return 0;
}