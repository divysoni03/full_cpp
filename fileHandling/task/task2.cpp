// 2. Write a program that reads a CSV file and calculates the average of a specific column of numerical data.

// Name,Age,Height,Weight
// John,28,5.9,170
// Jane,34,5.7,150
// Alice,23,5.5,120
// Bob,40,6.0,180
// Charlie,29,5.8,165

#include <iostream>
#include <fstream>
#include <sstream>
#include <string>

using namespace std;

double calculateAverage(const string &filePath, const string &columnName) {
    ifstream file(filePath);
    if (!file.is_open()) {
        cerr << "Could not open the file!" << endl;
        return -1;
    }

    string line;
    string headers;
    getline(file, headers);  // Read the header line

    istringstream headerStream(headers);
    string header;
    int columnIndex = -1;
    int currentIndex = 0;

    // Find the index of the specified column
    while (getline(headerStream, header, ',')) {
        if (header == columnName) {
            columnIndex = currentIndex;
            break;
        }
        currentIndex++;
    }

    if (columnIndex == -1) {
        cerr << "Column not found!" << endl;
        return -1;
    }

    double sum = 0.0;
    int count = 0;

    // Read each line of the file and extract the data from the specified column
    while (getline(file, line)) {
        istringstream lineStream(line);
        string cell;
        int currentCellIndex = 0;
        double value = 0.0;

        while (getline(lineStream, cell, ',')) {
            if (currentCellIndex == columnIndex) {
                try {
                    value = stod(cell);
                    sum += value;
                    count++;
                } catch (const invalid_argument &e) {
                    cerr << "Invalid data: " << cell << endl;
                }
                break;
            }
            currentCellIndex++;
        }
    }

    file.close();

    if (count > 0) {
        return sum / count;
    } else {
        cerr << "No valid data found in the " << columnName << " column." << endl;
        return -1;
    }
}

int main() {
    string filePath = "data.csv";
    string columnName = "Age";  // Change to "Height" or "Weight" for other columns

    double average = calculateAverage(filePath, columnName);
    if (average != -1) {
        cout << "The average of the " << columnName << " column is " << average << endl;
    }

    return 0;
}
