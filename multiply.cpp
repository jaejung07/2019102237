#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	int dan = 9; //dan�� 9�� �����Ͽ� 9�ܱ��� ���� �� �ֵ��� ����
	for (int row = 1; row <= dan; row++) {
		for (int col = 1; col <= dan; col++)
			cout << setw(4) << (row * col) << " ";
		cout << endl;
	}
}