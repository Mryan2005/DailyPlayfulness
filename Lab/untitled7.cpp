#include <iostream>
#include <iomanip>
using namespace std;
double count(double m, double n) {
	if(m <= 1 || n <= 0) return 1;
	if(m<n) {
		return count(m,m);
	} else {
		return count(m,n-1)+count(m-n,n);
	}
}
int main() {
	double apples,plates;
	cin >> apples >> plates;
	cout << count(apples,plates);
}
