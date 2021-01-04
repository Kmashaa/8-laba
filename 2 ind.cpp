#include <iostream>
#include<fstream>
using namespace std;

struct Information {
	string surname;
	string name;
	string patronymic;
	string group;
	float mark;
	int salary;
};

void sortingsal(int size, Information* nmass) {
	for (int i = 1; i < size; i++)
		for (int j = i; j > 0 && nmass[j - 1].salary> nmass[j].salary; j--)
		{
			swap(nmass[j - 1].surname, nmass[j].surname);
			swap(nmass[j - 1].name, nmass[j].name);
			swap(nmass[j - 1].patronymic, nmass[j].patronymic);
			swap(nmass[j - 1].group, nmass[j].group);
			swap(nmass[j - 1].mark, nmass[j].mark);
			swap(nmass[j - 1].salary, nmass[j].salary);
		}
}
void sortingmark(int size, Information* nmass) {
	for (int i = 1; i < size; i++)
		for (int j = i; j > 0 && nmass[j - 1].mark < nmass[j].mark; j--)
		{
			swap(nmass[j - 1].surname, nmass[j].surname);
			swap(nmass[j - 1].name, nmass[j].name);
			swap(nmass[j - 1].patronymic, nmass[j].patronymic);
			swap(nmass[j - 1].group, nmass[j].group);
			swap(nmass[j - 1].mark, nmass[j].mark);
			swap(nmass[j - 1].salary, nmass[j].salary);
		}
}
void initialization(int size, Information* mass) {
	for (int i = 0; i < size; i++) {
		cin >> mass[i].surname;
		cin >> mass[i].name;
		cin >> mass[i].patronymic;
		cin >> mass[i].group;
		cin >> mass[i].mark;
		cin >> mass[i].salary;
	}
}
void viewing(int size, Information* mass) {

	for (int i = 0; i < size; i++) {
		cout << mass[i].surname << endl;
		cout << mass[i].name << endl;
		cout << mass[i].patronymic << endl;
		cout << mass[i].group << endl;
		cout << mass[i].mark << endl;
		cout << mass[i].salary << endl << endl;

	}

}
void addition(int size, Information* mass, int num_add, Information* nmass) {
	for (int i = 0; i < size; i++)
	{
		nmass[i].surname = mass[i].surname;
		nmass[i].name = mass[i].name;
		nmass[i].patronymic = mass[i].patronymic;
		nmass[i].group = mass[i].group;
		nmass[i].mark = mass[i].mark;
		nmass[i].salary = mass[i].salary;
	}
	int i = size;
	for (size; size < i + num_add; size++)
	{
		cin >> nmass[i].surname;
		cin >> nmass[i].name;
		cin >> nmass[i].patronymic;
		cin >> nmass[i].group;
		cin >> nmass[i].mark;
		cin >> nmass[i].salary;
	}
}
void changing(int a, Information* nmass) {
	for (int i = 0; i < a; i++) {
		int t;
		cout << "What element you want to change(1-surname,2-name,3-patronymic,4-group,5-mark,6-salary)?";
		cin >> t;
		int k;
		cout << "Enter the number of person in the sorted list";
		cin >> k;
		if (t == 1) {
			string text;
			cout << "Enter new surname";
			cin >> text;
			nmass[k - 1].surname = text;

		}
		else if (t == 2) {
			string text;
			cout << "Enter new name";
			cin >> text;
			nmass[k - 1].name = text;
		}
		else if (t == 3) {
			string text;
			cout << "Enter new patronymic";
			cin >> text;
			nmass[k - 1].patronymic = text;
		}
		else if (t == 4) {
			string text;
			cout << "Enter new group";
			cin >> text;
			nmass[k - 1].group = text;
		}
		else if (t == 5) {
			float text;
			cout << "Enter new mark";
			cin >> text;
			nmass[k - 1].mark = text;
		}
		else if (t == 6) {
			int text;
			cout << "Enter new salary";
			cin >> text;
			nmass[k - 1].salary = text;
		}

	}
}
void deletion(int size, Information* nmass, int a) {

	for (int i = 0; i < a; i++) {
		int element;
		int numb;
		cout << "  What element you want to delete?(1-surname,2-name,3-patronymic,4-group,5-mark,6-salary):";
		cin >> element;
		cout << "Enter the NUMBER of person where you want to delete this element";
		cin >> numb;
		if (element == 1) {
			nmass[numb - 1].surname = "";

		}
		else if (element == 2) {
			nmass[numb - 1].name = "";
		}
		else if (element == 3) {
			nmass[numb - 1].patronymic = "";
		}
		else if (element == 4) {
			nmass[numb - 1].group = "";
		}
		else if (element == 5) {
			nmass[numb - 1].mark = 0.0;
		}
		else if (element == 6) {
			nmass[numb - 1].salary = 0;

		}
	}
}

int main() {
	int n = 10;
	Information* arr = new Information[n];
	ifstream file("file.txt");
	for (int i = 0; i < 10; i++) {
		file >> arr[i].surname;
		file >> arr[i].name;
		file >> arr[i].patronymic;
		file >> arr[i].group;
		file >> arr[i].mark;
		file >> arr[i].salary;
	}
	cout << "The first list:" << endl;
	for (int i = 0; i < 10; i++) {
		cout << arr[i].surname << endl;
		cout << arr[i].name << endl;
		cout << arr[i].patronymic << endl;
		cout << arr[i].group << endl;
		cout << arr[i].mark << endl;
		cout << arr[i].salary << endl<<endl;
	}
	sortingsal(n, arr);
	
	int i = 0;
	Information list[10];
	while (arr[i].salary < 100) {
		list[i].surname = arr[i].surname;
		list[i].name = arr[i].name;
		list[i].patronymic = arr[i].patronymic;
		list[i].group = arr[i].group;
		list[i].mark = arr[i].mark;
		list[i].salary = arr[i].salary;
		i++;

	}
	int t = i;
	int k = n - i;
	int j = 0;
	Information ost[10];
	while (i < n) {
		ost[j].surname = arr[i].surname;
		ost[j].name = arr[i].name;
		ost[j].patronymic = arr[i].patronymic;
		ost[j].group = arr[i].group;
		ost[j].mark = arr[i].mark;
		ost[j].salary = arr[i].salary;
		j++;
		i++;
	}


	sortingmark(n, ost);
	int p = 0;
	for (t; t < n; t++) {
		list[t].surname = ost[p].surname;
		list[t].name = ost[p].name;
		list[t].patronymic = ost[p].patronymic;
		list[t].group = ost[p].group;
		list[t].mark = ost[p].mark;
		list[t].salary = ost[p].salary;
		p++;
	}
	
	cout << endl << endl<<"Min. salary=100"<< endl<<"Sorted list:"<< endl;
	for (int i = 0; i < 10; i++) {
		cout << i + 1 << " person:" << endl;
		cout << list[i].surname << endl;
		cout << list[i].name << endl;
		cout << list[i].patronymic << endl;
		cout << list[i].group << endl;
		cout << list[i].mark << endl;
		cout << list[i].salary << endl<<endl;
	}
	ofstream sort("sorted list.txt");
	for (int i = 0; i < 10; i++) {
		sort << list[i].surname << endl;
		sort << list[i].name << endl;
		sort << list[i].patronymic << endl;
		sort << list[i].group << endl;
		sort << list[i].mark << endl;
		sort << list[i].salary << endl;
	}
}