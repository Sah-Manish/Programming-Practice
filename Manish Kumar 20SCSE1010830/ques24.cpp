#include <iostream>
#define N 5
using namespace std;
class Test {
	int x, y;
public:
    Test(int x, int y)
	{
		this->x = x;
		this->y = y;
	}
	void print() { cout << x << " " << y << endl; }
};
int main()
{
	Test* arr = (Test*)malloc(sizeof(Test) * N);
	for (int i = 0; i < N; i++) {
		arr[i] = Test(i, i + 1);
	}
	for (int i = 0; i < N; i++) {
		arr[i].print();
	}
	return 0;
}
