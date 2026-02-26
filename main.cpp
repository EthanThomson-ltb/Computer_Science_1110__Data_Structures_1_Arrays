#include <iostream>
using namespace std;

//scans for array values (Not necessary, but I wanted to test it)
void arrayScan(int arr[], int arraySize);

//sums the array
int arraySum(int arr[], int arraySize);

//Finds the smallest number
int arrayMin(int arr[], int arraySize);

//Find the largest number
int arrayMax(int arr[], int arraySize);

//Counts number of even ints
int countEven(int arr[], int arraySize);

//Counts number of ints above average
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
    //(used in the countAbvAvg function)
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
int arraySum(int arr[], const int arraySize) {
    int sum = 0;
    for (int i = 0; i < arraySize; i++) {
        sum += arr[i];
    }
    return sum;
}

//Finds the smallest number
int arrayMin(int arr[], const int arraySize) {
    int min = arr[0];
    for (int i = 1; i < arraySize; i++) {
        if (arr[i] < min) {
            min = arr[i];
        }
    }
    return min;
}

//Find the largest number
int arrayMax(int arr[], const int arraySize) {
    int max = arr[0];
    for (int i = 1; i < arraySize; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}

//Counts number of even ints
int countEven(int arr[], const int arraySize) {
    int evenCount = 0;
    for (int i = 0; i < arraySize; i++) {
        if (arr[i] % 2 == 0) {
            evenCount++;
        }
    }
    return evenCount;
}

//Counts number of ints above average
int countAbvAvg(int arr[], const int arraySize, int arrayAvg) {
    int avgCount = 0;
    for (int i = 0; i < arraySize; i++) {
        if (arr[i] > arrayAvg) {
            avgCount++;
        }
    }
    return avgCount;
}