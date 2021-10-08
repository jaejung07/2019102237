#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	int dan = 9; //dan을 9로 수정하여 9단까지 나올 수 있도록 수정
	for (int row = 1; row <= dan; row++) {
		for (int col = 1; col <= dan; col++)
			cout << setw(4) << (row * col) << " ";
		cout << endl;
	}
}