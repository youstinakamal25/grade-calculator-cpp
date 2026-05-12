#include <iostream>
using namespace std;

int main() {
    int subjects;
    float mark, total = 0;

    cout << "Enter number of subjects: ";
    cin >> subjects;

    for (int i = 1; i <= subjects; i++) {
        cout << "Enter mark for subject " << i << ": ";
        cin >> mark;
        total += mark;
    }

    float average = total / subjects;

    cout << "Total Marks:  "<< total<<endl;
    cout << "\nAverage: " << average<<endl;

    if (average >= 90)
        cout <<"Grade: A"<<endl;
    else if (average >= 80)
        cout <<"Grade: B"<<endl;
    else if (average >= 70)
        cout <<"Grade: C"<<endl;
    else if (average >= 50)
        cout <<"Grade: D"<<endl;
    else
        cout <<"Grade: F"<<endl;

    return 0;
}
