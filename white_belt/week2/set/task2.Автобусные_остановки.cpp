#include<iostream>
#include<string>
#include<set>
#include<map>
using namespace std;

int main() {
	int N, Q,number = 0;
	cin >> Q;// количество запросов
	map<set<string>, int> dic;
	string stop;

	for (int i = 0; i < Q; i++) {
		cin >> N; //количество остановок
		set<string> stops;
		for (int j = 0; j < N; j++) {
			cin >> stop;
			stops.insert(stop);
		}

	if (dic.count(stops))
		{
			cout << "Already exists for " << dic[stops]<<endl;
		}
	else {
		number++;
		dic[stops] = number;
		cout << "New bus "<< number<<endl;
	}
	}
}