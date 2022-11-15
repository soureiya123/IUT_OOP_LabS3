#include<iostream>
#include<set>
#include<vector>
#include<algorithm>

//#include <bits/stdc++.h>
using namespace std;

int main()
{
	
	vector<int> arr1 = { 2, 4, 6, 8 };


	vector<int> arr2 = { 1, 3, 5, 7};

	
	vector<int> arr3(8);



	merge(arr1.begin(), arr1.end(), arr2.begin(), arr2.end(), arr3.begin());

	
	cout << "The container after merging initial containers is : ";

	for (int i = 0; i < arr3.size(); i++)
		cout << arr3[i] << " ";
	return 0;
}






