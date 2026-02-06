#include <iostream>
using namespace std;

class Time {
public:
    int hours, minutes, seconds;

    void enterTime();
    void printTime();
};

void Time::enterTime() {
    do {
        cout << "Enter hours (0-23), minutes (0-59), and seconds (0-59): ";
        cin >> hours >> minutes >> seconds;
    } while (!(hours >= 0 && hours <= 23 &&
        minutes >= 0 && minutes <= 59 &&
        seconds >= 0 && seconds <= 59));
}

void Time::printTime() {
    cout << "Choose format:\n";
    cout << "1. 24-hour format\n";
    cout << "2. 12-hour AM/PM format\n";
    cout << "3. Both formats\n";
    cout << "Enter choice: ";
    int n;
    cin >> n;

    switch (n) {
    case 1: {
        cout << hours << ":"
            << (minutes < 10 ? "0" : "") << minutes << ":"
            << (seconds < 10 ? "0" : "") << seconds << "\n";
        break;
    }

    case 2: {
        int displayHour = hours % 12;
        if (displayHour == 0) displayHour = 12;
        string period = (hours < 12) ? "AM" : "PM";
        cout << displayHour << ":"
            << (minutes < 10 ? "0" : "") << minutes << ":"
            << (seconds < 10 ? "0" : "") << seconds
            << " " << period << "\n";
        break;
    }

    case 3: {
        // 24-hour format
        cout << "24-hour format: "
            << hours << ":"
            << (minutes < 10 ? "0" : "") << minutes << ":"
            << (seconds < 10 ? "0" : "") << seconds << "\n";

        // 12-hour format
        int displayHour = hours % 12;
        if (displayHour == 0) displayHour = 12;
        string period = (hours < 12) ? "AM" : "PM";
        cout << "12-hour format: "
            << displayHour << ":"
            << (minutes < 10 ? "0" : "") << minutes << ":"
            << (seconds < 10 ? "0" : "") << seconds
            << " " << period << "\n";
        break;
    }

    default:
        cout << "Invalid choice!\n";
    }
}

int main() {
    Time time1;
    time1.enterTime();
    time1.printTime();
}