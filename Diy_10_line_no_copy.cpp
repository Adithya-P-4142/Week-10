#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    ifstream inFile("in.txt");
    ofstream outFile("out.txt");

    if (!inFile || !outFile) {
        cerr << "Error opening input or output file." << endl;
        return 1;
    }

    string line;
    int lineNumber = 1;

    while (getline(inFile, line)) {
        outFile << lineNumber << ": " << line << "\n";
        lineNumber++;
    }

    cout << "File copied with line numbers successfully." << endl;

    inFile.close();
    outFile.close();
    return 0;
}