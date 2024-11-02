#include<iostream>
using namespace std;
int main() {
	int i = 1;
	while (i <= 5) {
		cout << " ROW " << i;
		int j = 1;
		while (j <= 10) {
			cout << " SEAT " << j ;
			j++;
		}
		cout << endl;
		i++;
	}


	return 0;

}