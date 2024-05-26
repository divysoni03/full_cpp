// 2. Write a program that reads a CSV file and calculates the average of a specific column of numerical data.

// Name,Age,Height,Weight
// John,28,5.9,170
// Jane,34,5.7,150
// Alice,23,5.5,120
// Bob,40,6.0,180
// Charlie,29,5.8,165

#include<iostream>
#include<string>
#include<fstream>
using namespace std;

class fileHandler{
    private:
        string str;
    public:
        string filename;
    
        void readfile(){
            ifstream file(filename.append(".txt"));

            if(file.is_open()){
                while(getline(file,str)!=){
                    str.find()
                }
            }
        }
};

int main(){

    return 0;
}

// #include <iostream>
// #include <fstream>
// #include <string>

// using namespace std;

// const int MAX_COLUMNS = 100; // maximum number of columns expected

// // Function to split a string by a delimiter and return an array of strings
// int split(const string &s, char delimiter, string tokens[], int max_tokens) {
//     int token_count = 0;
//     size_t start = 0, end = 0;

//     while ((end = s.find(delimiter, start)) != string::npos) {
//         if (token_count >= max_tokens) break;
//         tokens[token_count++] = s.substr(start, end - start);
//         start = end + 1;
//     }

//     if (token_count < max_tokens) {
//         tokens[token_count++] = s.substr(start);
//     }

//     return token_count;
// }

// double calculate_average(const string &filename, const string &column_name) {
//     ifstream file(filename);
//     if (!file.is_open()) {
//         cerr << "Error: The file " + filename + " was not found." << endl;
//         return -1;
//     }

//     string line;
//     string header[MAX_COLUMNS];
//     int column_index = -1;
//     int num_columns;

//     // Read the header line
//     if (getline(file, line)) {
//         num_columns = split(line, ',', header, MAX_COLUMNS);
//         for (int i = 0; i < num_columns; ++i) {
//             if (header[i] == column_name) {
//                 column_index = i;
//                 break;
//             }
//         }
//         if (column_index == -1) {
//             cerr << "Error: Column " + column_name + " not found." << endl;
//             return -1;
//         }
//     }

//     double total = 0.0;
//     int count = 0;
//     string row[MAX_COLUMNS];

//     // Read the data lines
//     while (getline(file, line)) {
//         int row_size = split(line, ',', row, MAX_COLUMNS);
//         if (row_size > column_index) {
//             try {
//                 total += stod(row[column_index]);
//                 count++;
//             } catch (const invalid_argument &e) {
//                 cerr << "Warning: Skipping row with invalid " << column_name << " value" << endl;
//             }
//         }
//     }

//     file.close();

//     if (count == 0) {
//         cerr << "Error: No valid data found in column: " + column_name << endl;
//         return -1;
//     }

//     return total / count;
// }

// int main() {
//     string filename = "data.csv";
//     string column_name = "Age";

//     double average = calculate_average(filename, column_name);
//     if (average != -1) {
//         cout << "The average of the column " << column_name << " is " << average << endl;
//     }

//     return 0;
// }
