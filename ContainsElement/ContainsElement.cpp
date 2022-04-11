// ContainsElement.cpp

#include <iostream>
#include <vector>
using namespace std;

bool containsElement(vector<int> &arr, int key) {
	// add your logic here
	int i = 0;
	int j = arr.size() - 1;
	bool result = false;
	while (i < j)
	{
		if (arr[i] == key) {
			result = true;
			break;
		}
		if (arr[j] == key) {
			result = true;
			break;
		}
		i++;
		j--;
	}
	return result;
}

bool containsElement1(vector<int> &arr, int key) {
	// add your logic here
	bool result = false;
	int left = 0;
	int right = arr.size() - 1;

	while (left <= right)
	{
		int mid = (left + right) / 2;
		if (arr[mid] == key) {
			return true;
		}
		else if (key < arr[mid]) {
			right = mid - 1;
		}
		else {
			left = mid + 1;
		}
	}
	return false;
}

int main()
{
	int t(0);
	cin >> t;

	while (t--)
	{
		int n(0), ele(0), key(0);
		cin >> n;
		vector<int> v;
		for (int i = 0; i < n; i++)
		{
			cin >> ele;
			v.push_back(ele);
		}
		cout << containsElement(v, key) << endl;
	}
	return 0;
}
