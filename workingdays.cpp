// NAME: NUR BATRISYIA BINTI AHMAD SHAHFARIN  MATRIC:B032610246  SESSION:S2G2
#include <iostream>
using namespace std;

void printHeader();
double getValidScore();
double calculateAverage(double sum);
void displayResult(double avg, char grade);

char determineGrade(double avg);

int main() {
    printHeader();

    double totalSum = 0.0;

    for (int i = 0; i < 5; i++) {
        double score = getValidScore();
        totalSum += score; 
    }

    double average = calculateAverage(totalSum);
    char grade = determineGrade (average);

    displayResult(average, grade);

    return 0;
}

void printHeader() {
    cout << "Find Average for 5 Scores" << endl;
}

double getValidScore() {
    double score;
    while (true) {
        cout << "Enter Score: ";
        cin >> score;

        if (score >= 0 && score <= 100) {
            return score;
        } else {
            cout << "!!! INVALID SCORE" << endl;
        }
    }
}

double calculateAverage(double sum) {
    return sum / 5.0;
}

char determineGrade(double avg) {
    if (avg >= 80 && avg <= 100)
        return 'A';
    else if (avg >= 65)
        return 'B';
    else if (avg >= 50)
        return 'C';
    else if (avg >= 40)
        return 'D';
    else
        return 'F';
}

void displayResult(double avg, char grade) {
    cout << "The average score is " << avg << endl;
    cout << "The average grade is " << grade << endl;
}