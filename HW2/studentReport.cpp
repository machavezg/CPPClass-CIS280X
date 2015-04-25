#include <iostream>
#include <vector>
#include <fstream>
#include <sstream>
#include <iomanip>
#include <string>
#include <numeric>

using namespace std;

int main() { 
    string grade2;
    ifstream inFile("data.txt", ios::in);
    vector<vector<int> > scores;
    vector<int> grade;
    ofstream outFile("vector_data.txt", ios::out);
    ofstream outReport("student_report.txt", ios::out);
    int value, num, suma, sumb, sumc, sumd, sumf;
    int lines = 0, average = 0, a=0, b=0, c=0, d=0, f=0;
    outReport << "Scores\t\tAverage\tLetter Grade" << '\n';
    while(!inFile.eof()){
        ++lines;
        grade.push_back(lines);
        getline(inFile, grade2);
//        outReport << grade2;
        stringstream assignNum(grade2);
        while (assignNum >> value)
        {
            grade.push_back(value);
            if (assignNum.peek() == ' ')
                assignNum.ignore();
        }
        int length = grade.size();
        for(int i = 2; i < length; i++){
            outReport << setw(3) << left << grade[i] << " ";
        }
        grade.erase (grade.begin()+1);

        if(grade.size() == 3)
            num = 15;
        else if(grade.size() == 4)
            num = 11;
        else if(grade.size() == 5)
            num = 7;
        else
            num = 3;
        
        int average = accumulate(grade.begin()+1, grade.end(), 0) / (grade.size() - 1);
        outReport << setw(num) << right << average;
        if ((average >= 90) && (average <= 100)){
            outReport <<" Your grade is an A" << '\n';
            suma = ++a;
        }
        else if ((average >= 80) && (average <= 89)){
            outReport << " Your grade is a B" << '\n';
            sumb = ++b;
        }
        else if ((average >= 65) && (average <= 79)){
            outReport << " Your grade is a C" << '\n';
            sumc = ++c;
        }
        else if ((average >= 55) && (average <= 64)){
            outReport << " Your grade is a D" << '\n';
            sumd = ++d;
        }
        else if (average < 55){
            outReport << " Your grade is a F" << '\n';
            sumf = ++f;
        }
        
        scores.push_back(grade);
        grade.clear();
    }
    outReport << "\nNumber of A's: " << suma << "\nNumber of B's: " << sumb 
              << "\nNumber of C's: " << sumc << "\nNumber of D's: " << sumd 
              << "\nNumber of F's: " << sumf;
    outFile << scores.size() << " student records were processed.\n" 
            << "Here is the accumulated data in the vector studentData:\n\n";
    for(int i = 0; i < scores.size(); i++){
        for(int j = 0; j < scores[i].size() ; j++){
            outFile << setw(3) << left << scores[i][j];
        }
        outFile << '\n';
    }
}
