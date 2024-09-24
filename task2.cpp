#include <iostream>
using namespace std;

const int days = 7;
const int hours = 24;

int main() 
{
    double temperatures[days][hours];
    cout << "Enter the temperatures for the week (7 days x 24 hours):\n";
    for (int i = 0; i < days; ++i) {
        for (int j = 0; j <hours; ++j) {
            cout << "Day " << i + 1 << ", Hour " << j + 1 << ": ";
            cin >> temperatures[i][j];
        }
    }
    double dailyAverage[days] = {0};
    for (int i = 0; i <days; ++i) {
        double sum = 0;
        for (int j = 0; j <hours; ++j) {
            sum += temperatures[i][j];
        }
        dailyAverage[i] = sum /hours;
        cout << "Average temperature for Day " << i + 1 << ": " << dailyAverage[i] << "°C\n";
    }
    double highestTemp = temperatures[0][0];
    int highestDay = 0, highestHour = 0;
    for (int i = 0; i <days; ++i) {
        for (int j = 0; j <hours; ++j) {
            if (temperatures[i][j] > highestTemp) {
                highestTemp = temperatures[i][j];
                highestDay = i;
                highestHour = j;
            }
        }
    }
    cout << "Highest temperature of the week: " << highestTemp << "°C on Day " << highestDay + 1 << ", Hour " << highestHour + 1 << "\n";
    double lowestAverage = dailyAverage[0];
    int lowestDay = 0;
    for (int i = 1; i <days; ++i) {
        if (dailyAverage[i] < lowestAverage) {
            lowestAverage = dailyAverage[i];
            lowestDay = i;
        }
    }
    cout << "Day " << lowestDay + 1 << "with lowest average temperature:" << lowestAverage << "°C\n";

    return 0;
}
