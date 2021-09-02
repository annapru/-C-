#include<iostream>
#include<string>
#include<set>
#include<map>
using namespace std;

int main() {
	int Q; // количество запросов 
	cin >> Q;
	string word, word1, word2;
	map<string, set<string>> dic;
	for (int i = 0; i < Q; i++) {
		string s;
		cin >> s;
		if (s == "ADD") {
			cin >> word1;
			cin >> word2;
			dic[word1].insert(word2);
			dic[word2].insert(word1);
		}
		else {
			if (s == "COUNT") {
				cin >> word;
				int tmp = 0;
				if (dic[word].size() == 0) { cout << 0 << endl; }
				else { cout << dic[word].size()<<endl; }
			}
			else {
				if (s == "CHECK") {
					cin >> word1;
					cin >> word2;
					if (dic[word1].size() == 0) {
						cout << "NO" << endl;
					}
					else {
						if (dic[word1].count(word2))
						{
							cout << "YES" << endl;
						}
						else
						{
							cout << "NO" << endl;
						}
					}
				}
				}
			} 
	}
}