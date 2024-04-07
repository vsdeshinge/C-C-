#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int calculateAverage(const vector<int>& oxygenLevels) {
    int sum = 0;
    for (int level : oxygenLevels) {
        sum += level;
    }
    return sum / oxygenLevels.size();
}

int main() {
    // Initialize oxygenLevels as a vector of vectors
    vector<vector<int>> oxygenLevels(3, vector<int>(3));

    // Input oxygen levels for each trainee after each round
    for (int i = 0; i < 3; ++i) {
        cout << "Enter oxygen levels for trainee " << i + 1 << ":\n";
        for (int j = 0; j < 3; ++j) {
            cin >> oxygenLevels[i][j];
            if (oxygenLevels[i][j] < 1 || oxygenLevels[i][j] > 100) {
                cout << "Oxygen value should be in the range between 1 and 100.\n";
                return 1;
            }
        }
    }

    vector<int> averages;

    // Calculate average oxygen level for each trainee
    for (const auto& levels : oxygenLevels) {
        averages.push_back(calculateAverage(levels));
    }

    // Find the maximum average oxygen level
    int maxAverage = *max_element(averages.begin(), averages.end());

    // Check fitness level based on maximum average
    if (maxAverage < 70) {
        cout << "All trainees are unfit.\n";
    } else {
        // Output most fit trainee(s) with the highest average oxygen level
        cout << "Most fit trainee(s) with the highest average oxygen level:\n";
        for (int i = 0; i < averages.size(); ++i) {
            if (averages[i] == maxAverage) {
                cout << "Trainee Number: " << i + 1 << "\n";
            }
        }
    }

    return 0;
}
 
2,4,6,8,10,12,14,16,18,20,22,24