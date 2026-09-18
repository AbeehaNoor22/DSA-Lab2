#include <iostream> 
using namespace std;

int main() {
    const int size = 20; 
    int *salary=new int[size];

    // Input salaries
    for (int i = 0; i < size; i++) {
        cout << "Enter Salary for employee " << (i + 1) << ": "; cin >> salary[i];
    }

    // Apply increment formula
    for (int i = 0; i < size; i++) {
        *(salary+i)=*(salary+i) + *(salary+i)/(i+1);
    }

    // Display updated salaries
    cout << "\nUpdated Salaries: "; 
    for (int i = 0; i < size; i++) {
        cout << *(salary+i) << " ";
    }
    cout << endl; 
    delete [] salary;
    return 0;
}