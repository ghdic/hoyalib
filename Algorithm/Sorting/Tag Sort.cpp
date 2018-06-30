////////////////////////////////
//	Tag Sort
//	태그 정렬
////////////////////////////////

/*
#include <iostream>
#include <string>
using namespace std;

class Person {
private:
	int id;
	float salary;
	
public:
	Person(int id, float salary) {
		this->id = id;
		this->salary = salary;
	}

	float getSalary() {
		return salary;
	}

	string toString() {
		return "Person{id=" + to_string(id) + ", salary=" + to_string(salary) + "}";
	}
};

void tagSort(Person persons[], int tag[]) {
	for (int i = 0; i < 5; i++) {
		for (int j = i + 1; j < 5; j++) {
			if (persons[tag[i]].getSalary() > persons[tag[j]].getSalary())
			{
				int tmp = tag[i];
				tag[i] = tag[j];
				tag[j] = tmp;
			}
		}
	}
}

int main() {
	Person persons[5]{ {0, 233.5f},
	{1, 23.0f}, {2, 13.98f}, {3, 143.2f}, {4, 3.0f}
	};
	int tag[5];

	for (int i = 0; i < 5; i++)
		tag[i] = i;

	cout << "Given Person and Tag " << endl;
	for (int i = 0; i < 5; i++)
		cout << persons[i].toString() << " : Tag: " << tag[i] << endl;

	tagSort(persons, tag);

	cout << "New Tag Array after getting sorted as per Person[] " << endl;

	for (int i = 0; i < 5; i++)
		cout << tag[i] << " ";
	cout << endl;

	for(int i=0;i<5;i++)
		cout << persons[tag[i]].toString() << " : Tag: " << tag[i] << endl;

	return 0;
}
*/