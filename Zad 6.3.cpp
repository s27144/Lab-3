#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
using namespace std;
struct Student
{
    string name;
    string surname;
    int index;
};

int main()
{
    vector<Student> students;

    // Wczytanie danych studentów.

    students.push_back({ "Jan", "Kowalski", 101523 });
    students.push_back({ "Anna", "Nowak", 94321 });
    students.push_back({ "Piotr", "Wisniewski", 67890 });
    cout << "Lista przed sortowaniem: " << endl;
    for (const auto& student : students)
    {
        cout << student.name << " " << student.surname << " " << student.index << endl;
    }
    cout << endl;
    // Sortowanie studentów według numerów indeksów.
    sort(students.begin(), students.end(),
        [](const Student& s1, const Student& s2) { return s1.index < s2.index; });
    cout << "Lista po sortowaniu: " << endl;
    // Wyświetlenie posortowanej listy studentów.
    for (const auto& student : students)
    {
        cout << student.name << " " << student.surname << " " << student.index <<endl;
    }

    return 0;
}
