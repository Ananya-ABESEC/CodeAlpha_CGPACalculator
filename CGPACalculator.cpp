#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    float totalCredits = 0, totalGradePoints = 0;

    cout << "========== CGPA Calculator ==========\n";
    cout << "Enter the number of courses: ";
    cin >> n;

    vector<string> courseName(n);
    vector<float> grade(n), credit(n);

    // Input course details
    for (int i = 0; i < n; i++) {
        cout << "\nCourse " << i + 1 << " Name: ";
        cin >> courseName[i];

        cout << "Enter Grade Point (0 - 10): ";
        cin >> grade[i];

        cout << "Enter Credit Hours: ";
        cin >> credit[i];

        totalCredits += credit[i];
        totalGradePoints += grade[i] * credit[i];
    }

    // Calculate GPA/CGPA
    float cgpa = totalGradePoints / totalCredits;

    // Display results
    cout << "\n========== Result ==========\n";
    for (int i = 0; i < n; i++) {
        cout << "Course:" << courseName[i] << endl << "Grade:" << grade[i]<< endl << "Credits:" << credit[i] << endl;
        cout<<endl;
    }

    cout << "\nTotal Credits      : " << totalCredits;
    cout << "\nTotal Grade Points : " << totalGradePoints;

    cout << "\nSemester GPA       : " << cgpa;
    cout << "\nOverall CGPA       : " << cgpa << endl;

    cout << "\n=====================================\n";

    return 0;
}