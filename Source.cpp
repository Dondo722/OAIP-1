#include <iostream>


using namespace std;

double exmple(int n)
{
	if (n == 0)
		return 1;
	return 1 / (1 + 1 / exmple(n - 1));
}
int main()
{
	cout << exmple(1) << endl;

	return 0;
}