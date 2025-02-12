#include <iostream>
#include <algorithm>
#include <random>
#include <vector>
#include "BubbleSort.h"

using namespace std;

int main()
{
    vector<int> toSort(10);

    toSort = fillVector(toSort, true);
    printVector(toSort);

    vector<int >result = bubbleSort(toSort);
    printVector(result);
}

vector<int> fillVector(vector<int> vec, bool randomize)
{
    for (int i = 0; i < vec.size(); i++)
    {
        vec[i] = i;
    }

    if (randomize)
    {
        random_shuffle(begin(vec), end(vec));
    }

    return vec;
}

void printVector(vector<int> vec)
{
    for (int i : vec)
    {
        cout << i << ", ";
    }

    cout << endl;
}

vector<int> bubbleSort(vector<int> vec)
{
    bool swapped = true;

    while (swapped)
    {
        swapped = false;

        for (int i = 0; i < vec.size() - 1; i++)
        {
            if (vec[i] > vec[i + 1])
            {
                iter_swap(vec.begin() + i, vec.begin() + i + 1);
                swapped = true;
            }
        }
    }

    return vec;
}