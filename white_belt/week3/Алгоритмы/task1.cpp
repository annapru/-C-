#include <iostream> 
#include <algorithm>
#include <vector>
using namespace std;

int main()

{
	int N;
	cin >> N;
	vector<string> v;
	string str;

	for (unsigned int i = 0; i < N; i++) {
		cin >> str;
		v.push_back(str);
	}

	sort(begin(v), end(v), [](const string& x, const string& y) {
		for (unsigned int i = 0; i < min(x.length(), y.length()); i++)
		{

			bool k = tolower(x[i]) > tolower(y[i]);
			if (tolower(x[i]) > tolower(y[i]))
			{
				return false;
			}
			else if (tolower(x[i]) < tolower(y[i])) {
				return  true;
			}
		}
		if (x.length() > y.length())
		{
			return false;
		}
		return true;
		; });


	for (const auto& word : v) {
		cout << word << " ";
	}

}
