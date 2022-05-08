#include "Header.h"

int calculateHowManyNuts(int numberOfSquirrels, int numberOfNuts) {
	return numberOfNuts / numberOfSquirrels;
}

int main(void) {
	/*int n, k;
	
	cout << "Input number of squerrels: ";
	cin >> n;

	cout << "Input number of nuts: ";
	cin >> k;*/

	cout << (calculateHowManyNuts(3, 14) == 4 ? "Well done!" : "Something was Wrong!") << endl;
	cout << (calculateHowManyNuts(2, 14) == 7 ? "Well done!" : "Something was Wrong!") << endl;
	cout << (calculateHowManyNuts(4, 14) == 3 ? "Well done!" : "Something was Wrong!") << endl;

	return 0;
}