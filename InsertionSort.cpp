//Insertion sort algorithm

#include <iostream>
#include <vector>
using namespace std;

template <typename T>
void InsertionSort(vector<T> &v)
{
    for(int i = 1; i < v.size(); i++)
    {
        T key = v[i];
        int j = i - 1;
        while(j >= 0 && v[j] > key)
        {
            v[j + 1] = v[j];
            j -= 1;
        }

        v[j + 1] = key;
    }
}

int main()
{
    vector<int> vectorInts = {6, 10, 15, 1, 5, 2, 2, 2, 5, 4, 3, 12, 11, 9};

    InsertionSort(vectorInts);

    for(int i = 0; i < vectorInts.size(); i++)
        cout << vectorInts[i] << " ";
    cout << endl;

    return 0;
}
