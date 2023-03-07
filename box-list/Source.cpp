#include "Header.h"
int main() {
	setlocale(LC_ALL, "Russian");
	int n;
	cout <<"Введите кол-во коробок: ";
	cin >> n;
	vector <Box> a(n);
	for (int i = 0; i < n; i++) {
		cout << "Коробка номер " << i + 1 << ":" << endl;
		a[i].setBox();
	}
	system("cls");
	cout << "Информация о коробках: " << endl;
	for (int i = 0; i < n; i++) {
		cout << "Коробка номер " << i + 1 << ":" << endl;
		a[i].getInfo();
	}
	cout << "Сравнение коробок: " << endl;
	for (int i = 0; i < n;i++) {
		for (int j = i + 1;j < n;j++) {
			if (a[i] <= a[j]) cout << "Коробка " << i + 1 << " <= Коробке " << j + 1 << endl;
			else cout << "Коробка " << i + 1 << " > Коробки " << j + 1 << endl;
		}
	}
	cout << "Поиск самой большой коробки: " << endl;
	Box max = a[0];
	int k=0;
	for (int i = 1; i < n; i++) {
		if (max <= a[i]) max = a[i]; k++;
	}
	cout << "Самая большая коробка номер "<<k<< ":" << endl;
	max.getInfo();
	cout << "Есть пару сплющенныйх коробок: " << endl;
	Box s1(40,50), s2(100,150), s3(10,30);
	cout << "Коробка номер 1:" << endl;
	s1.getInfoS();
	cout << "Коробка номер 2:" << endl;
	s2.getInfoS();
	cout << "Коробка номер 3:" << endl;
	s3.getInfoS();
	cout << "Площадь обыкновенных коробок:" << endl;
	for (int i = 0; i < n; i++) {
		cout << "S коробки номер " << i + 1 << " = "<< a[i].pl()<<endl;
	}
	cout << "Площадь сплющенных коробок:" << endl;
	cout << "S сплющенной коробки номер 1 = " << s1.plS() << endl;
	cout << "S сплющенной коробки номер 2 = " << s2.plS() << endl;
	cout << "S сплющенной коробки номер 3 = " << s3.plS() << endl;
	system("pause");
	return 0;
}