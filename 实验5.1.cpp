#include<iostream>
using namespace std;
class Time             // 定义Time类
{
private:              
	int hour;
	int minute;
	int sec;
public:
	void inhour(int hour1) {
		hour = hour1;
	}
	void inminute(int minute1) {
		minute = minute1;
	}
	void insec(int sec1) {
		sec = sec1;
	}
	int gethour() {
		return hour;
	}
	int getminute() {
		return minute;
	}
	int getsec() {
		return sec;
	}
};
int main()
{
	Time t1;          //定义t1为Time类对象
	int hour, minute, sec;
	cin >> hour;      //输入设定的时间 
	cin >> minute;
	cin >> sec;
	t1.inhour(hour);
	t1.inminute(minute);
	t1.insec(sec);
	cout << t1.gethour() << ":" << t1.getminute() << ":" << t1.getsec() << endl;
	return 0;
}