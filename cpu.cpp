#include <iostream>
using namespace std;

enum CPU_Rank { p1 = 1, p2, p3, p4, p5, p6, p7 };
class CPU
{

private:
	CPU_Rank rank;
	int frequency;
	float voltage;
public:
	CPU(CPU_Rank r, int f, float v)
	{
		rank = r;
		frequency = f;
		voltage = v;
		cout << "你构建了CPU" << endl;
	}
	~CPU() { cout << "你析构了CPU" << endl; }
	void setrank(CPU_Rank r) { rank = r; }
	void setFrequency(int f) { frequency = f; }
	void setvoltage(float v) { voltage = v; }
	void run() { cout << "CPU开始运行" << endl; }
	void stop() { cout << "CPU已经停止" << endl; }
};
int main()
{
		CPU a(p6, 50, 30.0);
		a.run();
		a.stop();
		CPU aa(p7, 50, 30.0);
		aa.run();
		aa.stop();
	}
