#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

struct student
{
	int number;
	int course;
	string name;
	int grades[5];
};

double average(student s)
{
	double sum = 0.0;
	for (int i = 0; i < 5; i++)
	{
		sum += s.grades[i];
	}
	return sum / 5.0;
}

void input_data(student students[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << "Faculty number: ";
		cin >> students[i].number;

		cout << "Course: ";
		cin >> students[i].course;

		cin.ignore();

		cout << "Student's name: ";
		getline(cin, students[i].name);


		cout << "Grades: ";
		for (int j = 0; j < 5; j++)
		{
			cin >> students[i].grades[j];
		}

	}
}

void output_data(student students[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << students[i].number << " " << students[i].course << " " << students[i].name << " " << "Average score: " << fixed << setprecision(2) << average(students[i]) << endl;
	}
}

void sort_by_score(student students[], int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n - i - 1; j++) 
		{
			if (average(students[j]) > average(students[j + 1]))
			{
				swap(students[j], students[j + 1]);
			}
		}
	}
}

void sortByFacNom(student students[], int n)
{
	for (int i = 0; i < n - 1; i++)
	{
		for (int j = 0; j < n - i - 1; j++)
		{
			if (students[j].number > students[j + 1].number)
			{
				swap(students[j], students[j + 1]);
			}
		}
	}
}

void find_by_name(student students[], int n, string name)
{
	for (int i = 0; i < n; i++)
	{
		if (students[i].name == name)
		{
			cout << "Student with this name: \n";
			cout << students[i].number << " " << students[i].course << " " << students[i].name << " " << average(students[i]) << endl;
		}
		else {
			cout << "Student not found.";
		}
	}
}

int main()
{
	student students[30];
	int n;

	cout << "Number of students: ";
	cin >> n;

	input_data(students, n);
	
	cout << "\nAll students: \n";
	output_data(students, n);

	cout << "Sorting students by average score:\n";
	sort_by_score(students, n);
	output_data(students, n);

	cout << "\nSortng stdents by faculty number:\n";
	sortByFacNom(students, n);
	output_data(students, n);

	string name;
	cout << "\nSearching by name: ";
	cin >> name;
	find_by_name(students, n, name);

	return 0;

}
