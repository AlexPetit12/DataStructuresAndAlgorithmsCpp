/*
 * SelectSort.cpp
 *
 *  Created on: Aug 30, 2015
 *      Author: Alex
 */

#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

template <class T>
void SelectSort(vector<T> &v)
{
	T currentMin;
	int minPosition;

	for(int i = 0; i < v.size(); i++)
	{
		currentMin = v[i];
		minPosition = i;
		for(int j = i; j < v.size(); j++)
		{
			if(v[j] < currentMin)
			{
				currentMin = v[j];
				minPosition = j;
			}
		}

		swap(v[i], v[minPosition]);
	}
}

int main()
{
	//test vector of ints
	vector<int> v_ints = {12,5,2,10,9,6};
	SelectSort(v_ints);
	for(int &e : v_ints)
		cout << e << " ";
	cout << endl;

	//test vector of floats
	vector<float> v_floats = {0.5, 0.2, 1.5, 6.7, 8.9, 3.4, 2.1};
	SelectSort(v_floats);
	for(float &e : v_floats)
		cout << e << " ";
}


