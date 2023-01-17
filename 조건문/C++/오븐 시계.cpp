#include<iostream>
using namespace std;
class Oven {
private:
	int hour, min, time;
public:
	Oven(int a, int b, int time);
	Oven();
	void cal();
	void print();
};
Oven::Oven(int a, int b, int c) {
	hour = a;
	min = b;
	time = c;
}
Oven::Oven() {
	hour = 0;
	min = 0;
	time = 0;
}
void Oven::cal() {
	hour += (min + time) / 60;
	min = (min + time) % 60;
	if (hour > 23)hour %= 24;
}
void Oven::print() {
	cout << hour << " " << min;
}
int main() {
	int hour, min, time;
	cin >> hour >> min;
	cin >> time;
	Oven clock = Oven(hour, min, time);
	clock.cal();
	clock.print();
	return 0;
}
