// IsPerfectSquare.cpp 

#include <iostream>
#include <string>
using namespace std;

bool isPerfectSquare(int num) {
	// add your logic here
	for (int i = 0; i < num; i++)
	{
		if (i * i > num)
			return false;
		else if (i * i == num)
			return true;
		else
			if(i * i <num)
				continue;
	}
}

int main()
{
	int n(0);
	cin >> n;
	cout << isPerfectSquare(n) << endl;
	return 0;
}
