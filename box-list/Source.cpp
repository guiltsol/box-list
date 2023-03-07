#include "Header.h"
int main() {
	int n;
	cout <<"Enter the number of boxes : ";
	cin >> n;
	vector <Box> a(n);
	for (int i = 0; i < n; i++) {
		cout << "Box number  " << i + 1 << ":" << endl;
		a[i].setBox();
	}
	system("cls");
	cout << "Box information: " << endl;
	for (int i = 0; i < n; i++) {
		cout << "Box number " << i + 1 << ":" << endl;
		a[i].getInfo();
	}
	cout << "Box comparison: " << endl;
	for (int i = 0; i < n;i++) {
		for (int j = i + 1;j < n;j++) {
			if (a[i] <= a[j]) cout << "Box " << i + 1 << " <= Box " << j + 1 << endl;
			else cout << "Box " << i + 1 << " > Box " << j + 1 << endl;
		}
	}
	cout << "Finding the biggest box: " << endl;
	Box max = a[0];
	int k=0;
	for (int i = 1; i < n; i++) {
		if (max <= a[i]) max = a[i]; k++;
	}
	cout << "Biggest box number "<<k<< ":" << endl;
	max.getInfo();
	cout << "There are a couple of flattened boxes: " << endl;
	Box s1(40,50), s2(100,150), s3(10,30);
	cout << "Box number 1:" << endl;
	s1.getInfoS();
	cout << "Box number 2:" << endl;
	s2.getInfoS();
	cout << "Box number 3:" << endl;
	s3.getInfoS();
	cout << "The area of ordinary boxes:" << endl;
	for (int i = 0; i < n; i++) {
		cout << "S box number " << i + 1 << " = "<< a[i].pl()<<endl;
	}
	cout << "Area of flattened boxes:" << endl;
	cout << "S flattened box number 1 = " << s1.plS() << endl;
	cout << "S flattened box number 2 = " << s2.plS() << endl;
	cout << "S flattened box number 3 = " << s3.plS() << endl;
	system("pause");
	return 0;
}