#include <iostream>
using namespace std;

//scans for array values (Not necessary, but I wanted to test it)
void arrayScan(int arr[], int arraySize);


//sums the array
int arraySum(int arr[], int arraySize);

int arrayMin(int arr[], int arraySize);

int arrayMax(int arr[], int arraySize);

int countEven(int arr[], int arraySize);

int countAbvAvg(int arr[], int arraySize, int arrayAvg);

int main() {

    //Gathering initial array
    cout << "Please enter how many numbers will this array consist of:" << endl << "(max of 20)" << endl;
    int arraySize = 0;
    while (arraySize < 1 || arraySize > 20) {
        cin >> arraySize;
        if (arraySize < 1 || arraySize > 20) {
            cout << "Invalid size, please try again." << endl;
        }
    }
    cout << "Scanning for " << arraySize << " numbers." << endl;
    int arr[arraySize];
    arrayScan(arr, arraySize);

    //Printing collected array
    cout << "Data values:" << endl;
    for (int i = 0; i < arraySize; i++) {
        cout << "Index " << i << ": " << arr[i] << endl;
    }

    cout << endl;
    //Sum/Avg calculations
    int sum = arraySum(arr, arraySize);
    int avg = sum / arraySize;


    //Printing output data
    cout << "Total: " << sum << endl;
    cout << "Average: " << avg << endl;
    cout << "Minimum: " << arrayMin(arr, arraySize) << endl;
    cout << "Maximum: " << arrayMax(arr, arraySize) << endl;
    cout << "# of Even Values: " << countEven(arr, arraySize) << endl;
    cout << "# of Values Above Average: " << countAbvAvg(arr, arraySize, avg) << endl;

    return 0;
}

//scans for array values
void arrayScan(int arr[], const int arraySize) {
    for (int i = 0; i < arraySize; i++) {
        cin >> arr[i];
    }
}

//sums the array
int arraySum(const int arr[], const int arraySize) {
    int sum = 0;
    for (int i = 0; i < arraySize; i++) {
        sum += arr[i];
    }
    return sum;
}

