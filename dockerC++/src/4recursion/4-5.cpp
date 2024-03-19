#include <iostream>
using namespace std;

int fibo(int n) {
	if (n == 0) return 0;
	else if (n == 1) return 1;

	cout << "#############" << endl;
	int result = fibo(n - 1) + fibo(n - 2);
	cout << n << "項目 = " << result << endl; 
	return result;

}


int main() {
	int n;
	cin >> n;
	cout << fibo(n) << endl;
	return 0;
}

