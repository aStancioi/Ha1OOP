#include <iostream>
#include <algorithm>
#include <vector>
#include <functional>
#include "H1_2.h"

using namespace std;

template<class T>
T sum(T a[], int start, int end, T afw)
{
	int s;
	s = afw;
	for (int i = start; i <= end; i++)
		s = s + a[i];
	return s;
}

template<class TT>
TT lsum(TT a[], int start, int end, TT afw)
{
	int i;
	vector<TT> w;
	for (i = start; i <= end; i++)
		w.push_back(a[i]);
	std::for_each(w.begin(), w.end(), [&afw](TT aux) {afw = afw + aux; });
	return afw;
}

int main()
{
	int a[20] = { 1,2,3,4,5,6,7,8,9 };
	int s = sum<int> (a, 2,5);
	cout << s << endl;
	int s2 = lsum<int> (a, 2, 5);
	cout << s2;
	return 0;
}
