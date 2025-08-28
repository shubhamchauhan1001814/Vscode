#include <iostream>
using namespace std;

int main() {
    int pomodoroDuration, shortBreakDuration, longBreakDuration, cyclesBeforeLongBreak, totalCycles;
    char startTimer;

    cout << "Welcome to the Customizable Pomodoro Timer!" << endl;

    // Input custom timings
    cout << "Enter the pomodoro duration (in minutes): ";
    cin >> pomodoroDuration;

    cout << "Enter the short break duration (in minutes): ";
    cin >> shortBreakDuration;

    cout << "Enter the long break duration (in minutes): ";
    cin >> longBreakDuration;

    cout << "Enter the number of pomodoros before a long break: ";
    cin >> cyclesBeforeLongBreak;

    cout << "Enter the total number of pomodoros you want to complete: ";
    cin >> totalCycles;

    cout << "\nPomodoro duration: " << pomodoroDuration << " minutes";
    cout << "\nShort break duration: " << shortBreakDuration << " minutes";
    cout << "\nLong break duration: " << longBreakDuration << " minutes";
    cout << "\nCycles before a long break: " << cyclesBeforeLongBreak;
    cout << "\nTotal pomodoros: " << totalCycles << endl;

    cout << "\nStart the timer? (y/n): ";
    cin >> startTimer;

    if (startTimer == 'y' || startTimer == 'Y') {
        cout << "\nStarting your custom Pomodoro Timer...\n" << endl;

        for (int i = 1; i <= totalCycles; i++) {
            cout << "Pomodoro " << i << ": Focus for " << pomodoroDuration << " minutes." << endl;

            if (i % cyclesBeforeLongBreak == 0 && i != totalCycles) {
                cout << "Take a LONG BREAK for " << longBreakDuration << " minutes." << endl;
            } else if (i != totalCycles) {
                cout << "Take a SHORT BREAK for " << shortBreakDuration << " minutes." << endl;
            }
        }

        cout << "\nCongratulations! You've completed all " << totalCycles << " pomodoros!" << endl;
    } else {
        cout << "Pomodoro Timer exited. Customize and start when ready!" << endl;
    }

    return 0;
}
