#include<iostream>
using namespace std;
int recrusive_sum(int m, int n) {
	if (m == n)
		return m;
	return m + recrusive_sum(m + 1, n);

}

int main()
{
	int m , n ;
	cout << "Enter the value of m and n : ";
		cin >> m >> n;
	cout << "Sum : " << recrusive_sum(m, n);
	/*cout << "Enter the value of m and n : ";
		cin >> m>> n;
	int sum = 0;
	for (int i = m; i <= n; i++) {
		sum += i;
	}
	cout << "Sum : " << sum;*/
	system("pause>0");
}