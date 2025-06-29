#include <iostream>
#include <fstream>
#include <vector>
#include <string>
using namespace std;

struct Subject {
    string name;
    int weakness; // 1 (strong) to 5 (very weak)
};

vector<Subject> subjects;

void loadSubjects() {
    subjects.clear();
    ifstream file("data/subjects.txt");
    string name;
    int weakness;
    while (file >> name >> weakness) {
        subjects.push_back({name, weakness});
    }
    file.close();
}

void generatePlan(int availableTime) {
    cout << "\n🧠 Your Study Plan for Today:\n";
    int totalWeight = 0;
    for (auto &s : subjects) totalWeight += s.weakness;

    for (auto &s : subjects) {
        int timeForSubject = (s.weakness * availableTime) / totalWeight;
        cout << "📌 " << s.name << " → " << timeForSubject << " minutes\n";
    }
}
