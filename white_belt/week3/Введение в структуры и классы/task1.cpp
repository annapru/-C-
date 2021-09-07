#include <iostream> 
#include <algorithm>
#include <vector>
#include <map>
using namespace std;

class Person {
public:
    void ChangeFirstName(int year, const string& first_name) {
        // добавить факт изменения имени на first_name в год year
        first_names[year] = first_name;
    }

    void ChangeLastName(int year, const string& last_name) {
        // добавить факт изменения фамилии на last_name в год year
        last_names[year] = last_name;
    }


    string GetFullName(int year) {
        // получить имя и фамилию по состоянию на конец года year
        int tmp = year;
        string name = "", surname = "";


        while (tmp > 0)
        {
            if (!last_names[tmp].empty()) {
                surname = last_names[tmp];
                break;
            }
            tmp--;
        }

        int tmp2 = year;

        while (tmp2 > 0)
        {
            if (!first_names[tmp2].empty()) {
                name = first_names[tmp2];
                break;
            }
            tmp2--;
        }

        if (name.empty() && surname.empty()) {
            return "Incognito";
        }
        if (!surname.empty() && !name.empty()) {
            return name + " " + surname;
        }
        if (surname.empty() && !name.empty()) {
            return name + " with unknown last name";
        }
        if (!surname.empty() && name.empty()) {
            return surname + " with unknown first name";
        }
    }



    void Print() {
        for (auto i : first_names) {
            cout << i.first << " " << i.second;
        };

    }
private:

    map<int, string> first_names;
    map<int, string> last_names;
};



int main() {

    Person person;

    person.ChangeFirstName(1965, "Polina");
    person.ChangeLastName(1967, "Sergeeva");
    for (int year : {1900, 1965, 1990}) {
        cout << person.GetFullName(year) << endl;
    }

    person.ChangeFirstName(1970, "Appolinaria");
    for (int year : {1969, 1970}) {
        cout << person.GetFullName(year) << endl;
    }

    person.ChangeLastName(1968, "Volkova");
    for (int year : {1969, 1970}) {
        cout << person.GetFullName(year) << endl;
    }

    return 0;

}