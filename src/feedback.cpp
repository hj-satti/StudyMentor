#include <fstream>
#include <ctime>

void saveFeedback(int success) {
    ofstream file("data/feedback.csv", ios::app);
    time_t now = time(0);
    char* dt = ctime(&now);
    dt[strcspn(dt, "\n")] = 0;
    file << dt << "," << success << endl;
    file.close();
}
