#include <iostream>
#include "planner.cpp"
#include "feedback.cpp"
using namespace std;

int main() {
    cout << "📘 Welcome to StudyMentor++\n";
    int availableTime;
    cout << "Enter available study time today (in minutes): ";
    cin >> availableTime;

    loadSubjects();
    generatePlan(availableTime);

    char didStudy;
    cout << "\nDid you complete the plan? (y/n): ";
    cin >> didStudy;
    saveFeedback(didStudy == 'y' ? 1 : 0);

    cout << "\n✅ Session complete. Come back tomorrow!\n";
    return 0;
}
