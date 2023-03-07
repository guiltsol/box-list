#pragma once
#include <math.h>
#include<iostream>
#include<string>
#include<vector>
using namespace std;

class Box {
private:
	int h, w, s;
public:
	Box() {};
	Box(int h,int w,int s) {
		this->h = h;
		this->w = w;
		this->s = s;
	}
	Box(int w, int s) {
		this->w = w;
		this->s = s;
	}
	void setBox() {
		cout << "¬ведите высоту = ";
		cin>> h;
		cout << "¬ведите ширину = ";
		cin>>w;
		cout << "¬ведите длинну = ";
		cin>>s;
	}
	void getInfo() {
		cout << "H= " << h << endl;
		cout << "W= " << w << endl;
		cout << "S= " << s << endl;
	}
	void getInfoS() {
		cout << "W= " << w << endl;
		cout << "S= " << s << endl;
	}
	bool operator<=(Box b) {
		if (h <= b.h && w <= b.w && s <= b.s) return true;
		else return false;
	}
	int pl() {
		return 2 * s * w + 2 * s * h + 2 * w * h;
	}
	int plS() {
		return 2 * s * w;
	}
	~Box() {};
};