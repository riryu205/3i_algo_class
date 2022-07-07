// 2017/04/21 Tazoe

#include <iostream>
using namespace std;

int LinearSearch(int x, int S[], int N)
{
	for(int i=0; i<N; i++){
		if(S[i]==x)
			return i;
	}

	return -1;
}

int main()
{
	int S[10] = {30, 100, 70, 90, 10, 50, 20, 60, 80, 40};

	for(int i=0; i<10; i++){
		cout << S[i] << ' ';
	}
	cout << '\n';

	cout << LinearSearch( 10, S, 10) << '\n';
	cout << LinearSearch( 20, S, 10) << '\n';
	cout << LinearSearch( 30, S, 10) << '\n';
	cout << LinearSearch( 40, S, 10) << '\n';
	cout << LinearSearch( 50, S, 10) << '\n';
	cout << LinearSearch( 60, S, 10) << '\n';
	cout << LinearSearch( 70, S, 10) << '\n';
	cout << LinearSearch( 80, S, 10) << '\n';
	cout << LinearSearch( 90, S, 10) << '\n';
	cout << LinearSearch(100, S, 10) << '\n';
	cout << LinearSearch(110, S, 10) << '\n';

	return 0;
}