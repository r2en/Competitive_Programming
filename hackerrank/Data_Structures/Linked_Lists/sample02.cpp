#include <iostream>
#include <iterator>
using namespace std;
int main()
{
	const int list[] = {NULL,1,2,NULL,3,2};

	auto End = end(list);
	for (auto i = begin(list); i != End; ++i) {
		cout << *i << "\n";
	}
	cout << flush;
}