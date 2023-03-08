#include <iostream> 
#include <cmath> 
#include <vector> 

using namespace std;
void task1() {
    int main();
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    vector<int> arr(n);

    cout << "Enter the array elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // видалення від'ємних елементів 
    for (int i = 0; i < n; i++) {
        if (arr[i] < 0) {
            arr.erase(arr.begin() + i);
            n--;
            i--;
        }
    }

    cout << "Array after removing negative elements: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    // code for task 1 
    cout << "Task 1" << endl;
}

void task2() {
    int main();
    int n, t;
    cout << "Enter the size of the array: ";
    cin >> n;

    vector<int> arr(n);

    cout << "Enter the array elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Enter the value of T: ";
    cin >> t;

    int max_neg = -1;  // номер першого максимального значення серед від'ємних елементів 
    for (int i = 0; i < n; i++) {
        if (arr[i] < 0 && (max_neg == -1 || arr[i] > arr[max_neg])) {
            max_neg = i;
        }
        if (arr[i] == t) {
            break;
        }
    }

    if (max_neg == -1) {
        cout << "There are no negative elements in the array before T." << endl;
    }
    else {
        cout << "The index of the first maximum negative element before T is: " << max_neg << endl;
    }
    // code for task 2 
    cout << "Task 2" << endl;
}
void task3() {
    int main();
    int a, b, n;
    cout << "Enter the coordinates of the school (a,b): ";
    cin >> a >> b;

    cout << "Enter the number of houses: ";
    cin >> n;

    vector<int> x(n);
    vector<int> y(n);

    cout << "Enter the coordinates of the houses:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> x[i] >> y[i];
    }

    double total_distance = 0;
    for (int i = 0; i < n; i++) {
        double distance = sqrt(pow(x[i] - a, 2) + pow(y[i] - b, 2));
        total_distance += distance;
    }

    double average_distance = total_distance / n;

    cout << "The average distance from the houses to the school is: " << average_distance << endl;
    // code for task 3
    cout << "Task 3" << endl;
}

int main() {
    int choice;
    do {
        cout << "Menu:" << endl;
        cout << "1. Task 1" << endl;
        cout << "2. Task 2" << endl;
        cout << "3. Task 3" << endl;
        cout << "0. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
        case 1:
            task1();
            break;
        case 2:
            task2();
            break;
        case 3:
            task3();
            break;
        case 0:
            cout << "Exiting..." << endl;
            break;
        default:
            cout << "Invalid choice. Please enter a number from the menu." << endl;
            break;
        }
    } while (choice != 0);

    return 0;
}