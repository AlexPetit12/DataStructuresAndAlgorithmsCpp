/*
 * BubbleSort.cpp
 *
 *  Created on: Aug 30, 2015
 *      Author: Alex
 */

#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

template <class T>
void BubbleSort(vector<T> &v)
{
	unsigned int lastPositionSorted = v.size() - 1;
	bool swapped = false;
	do
	{
		swapped = false;
		for(unsigned int i = 0; i < lastPositionSorted; i++)
		{
			if(v[i] > v[i + 1])
			{
				swap(v[i], v[i + 1]);
				swapped = true;
			}
		}

		lastPositionSorted -= 1;

	} while(swapped);
}

int main()
{
	//test vector of ints
	vector<int> v_ints = {5,10,15,6,1,2,3,18};
	BubbleSort(v_ints);
	for(int &e : v_ints)
		cout << e << " ";
	cout << endl;

	//test vector of floats
	vector<float> v_floats = {0.01, 0.5, 1.5, 6.7, 2.1, 3.8, 10.1};
	BubbleSort(v_floats);
	for(float &e : v_floats)
		cout << e << " ";

	return 0;
}



