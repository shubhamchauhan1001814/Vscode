#include <iostream>
using namespace std;

int main() {
    int totalHours = 1, pomodoroDuration = 0, singlePomodoroTime;
    int totalPomodoros, extraTimeCheck,Hour,totalMun_2, get_value, totalMinutes = 0;
    while (true) {
        cout << "0.Exit" << endl;
        cout << "1.Enter corrent time" << endl;
        cout << "2.Enter Remeaning time" << endl;
        cin  >> get_value;
        if (get_value==1) {
                   int hour, min;
    cout << " Enter the Hour  : ";
    cin >> hour;
    cout << " Enter the Minute: ";
    cin >> min;
    if (min==0){
        hour=22-hour;
        cout << "Remeaning time is " << hour << " hour and 0 min" << endl;  
    }
    else {
        hour =21-hour;
        min = 60-min;
        cout << "Remeaning time is " << hour << " hour and " << min << " min "  << endl;
    }   totalMinutes==min;
        totalMun_2=totalMinutes;
        totalHours = hour * 60 + min;
            }
        else if (get_value == 0) {
            cout << "Exiting the program." << endl;
            break;
        }
        else{
             cout << "Enter the hours available: ";
        cin >> totalHours;
    cout << "Enter the minutes available: ";
    cin >> totalMinutes;
    totalMun_2=totalMinutes;
    // Total time available in minutes
    totalHours = totalHours * 60 + totalMinutes;
    cout << "Ok, total time available is: " << totalHours << " minutes." << endl;
        }
    // Input pomodoro and break times
    cout << "Enter the pomodoro duration (in minutes): ";
    cin >> pomodoroDuration;
    extraTimeCheck = pomodoroDuration;
    singlePomodoroTime = pomodoroDuration; // Save pomodoro duration separately
    cout << "Enter the break time (in minutes): ";
    cin >> totalMinutes;
    // Combined time for one pomodoro and one break
    pomodoroDuration = pomodoroDuration + totalMinutes;
    // Total number of pomodoros that can fit
    totalPomodoros = totalHours / pomodoroDuration;
    // Check if extra time is enough for one more pomodoro
    double remainingTime = totalHours - (totalPomodoros * pomodoroDuration);
cout << endl;
    if (remainingTime >= singlePomodoroTime) {
        totalPomodoros++;
        cout << "Total Number of Section: " << totalPomodoros <<endl;
        totalPomodoros= totalPomodoros*extraTimeCheck;
    }
    else{
        cout << "Total Number of Section: " << totalPomodoros <<endl;
        totalPomodoros= totalPomodoros*extraTimeCheck+totalMun_2;
    }
    cout << "Total pomodoros that can be completed: " << totalPomodoros << endl;
    Hour=totalPomodoros%60;
    totalPomodoros=totalPomodoros/60;
    cout << "in Hour : " << totalPomodoros<< " H and " << Hour <<" munutes";
    cout << endl;
cout << endl;
cout << endl;
    }
    return 0;
}