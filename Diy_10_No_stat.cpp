#include <iostream>
#include <fstream>
#include <climits>

using namespace std;

int main() {
    ifstream inFile("nums.txt");
    if (!inFile) {
        cerr << "Error opening nums.txt" << endl;
        return 1;
    }

    int num;
    int count = 0;
    long long sum = 0;
    int minVal = INT_MAX;
    int maxVal = INT_MIN;

    while (inFile >> num) {
        count++;
        sum += num;
        if (num < minVal) minVal = num;
        if (num > maxVal) maxVal = num;
    }

    if (count == 0) {
        cout << "No numbers found in the file." << endl;
    } else {
        cout << "Count: " << count << endl;
        cout << "Sum:   " << sum << endl;
        cout << "Min:   " << minVal << endl;
        cout << "Max:   " << maxVal << endl;
    }

    inFile.close();
    return 0;
}