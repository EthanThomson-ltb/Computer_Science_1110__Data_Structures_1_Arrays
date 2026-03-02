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

//Reverses the values of the array, back to front
void arrayReverse(int arr[], int arraySize);

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
    cout << "Scanning for  " << arraySize << " numbers." << endl;
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

    arrayReverse(arr, arraySize);
    cout << endl << "Reversed data values:" << endl;
    for (int i = 0; i < arraySize; i++) {
        cout << "Index " << i << ": " << arr[i] << endl;
    }

    /*  Reflection
     *  1. Arrays allow you to write smaller and faster code by letting you avoid having to call several similar variables in succession,
     *  instead allowing you to simply use loops and functions to traverse the array elements. The use of arrays make code significantly
     *  more efficient in comparison to a large, multi-variable switch statement.
     *
     *  2.In an array with ten elements, attempting to call element 10 will result in a garbage value being colleted due to the value
     *  being drawn from a neighboring memory location that likely belongs to another unrelated variable. This is because arrays begin
     *  with element 0 rather than the more intuitive element 1. In this case, the final functioning elements of the array would be element 9.
     *
     *  3.Computers do not have a sense of the value 0, thus what a human reads as a value of 0, a computer would read as a value of 1.
     *  As such when your code calls an index of 0, the computer reads this as a call for the first element in the array.
     *
     *  4.If the array is too small, your code may unintentionally be attempting to write outside the bounds of the array and into adjacent
     *  memory locations, potentially destroying the values of other variables. This can result in data loss and corruption, in the worst cases
     *  representing a security risk were unwanted or even malicious code may be accidentally executed.
     */


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
//
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

//Reverses the values of the array, back to front
void arrayReverse(int arr[], int arraySize) {
    int arrTemp[arraySize];
    for(int i = 0; i < arraySize; i++) {
        arrTemp[i] = arr[arraySize - i - 1];
    }
    for(int i = 0; i < arraySize; i++) {
        arr[i] = arrTemp[i];
    }
}
