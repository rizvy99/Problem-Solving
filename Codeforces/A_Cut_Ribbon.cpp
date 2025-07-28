#include <bits/stdc++.h>

using namespace std;

// Function to print calendar for a given month and year
void printCalendar(int month, int year, int startDay) {
    // Set up an array of month names
    string monthNames[] = {"January", "February", "March", "April", "May", "June",
                           "July", "August", "September", "October", "November", "December"};

    // Get the number of days in the month
    int daysInMonth;
    if (month == 2) {
        if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
            daysInMonth = 29; // Leap year
        } else {
            daysInMonth = 28;
        }
    } else if (month == 4 || month == 6 || month == 9 || month == 11) {
        daysInMonth = 30;
    } else {
        daysInMonth = 31;
    }

    // Print the calendar header
     cout << "|---------------------------|" << endl;
     cout << "|Sun|Mon|Tue|Wed|Thu|Fri|Sat|" << endl;
     cout << "|---------------------------|" << endl;

    // Print leading spaces based on the start day of the month
    for (int i = 0; i < startDay; i++) {
        cout << " ";
    }

    // Print the days of the month
    int currentDay = 1;
    for (int row = 0; row < 5; row++) {
        cout << "| ";
        for (int col = 0; col < 7; col++) {
            if ((row == 0 && col < startDay) || currentDay > daysInMonth) {
                cout << " ";
            } else {
                cout << setw(3) << currentDay << " ";
                currentDay++;
            }
        }
        cout << endl;
        cout << "|---------------------------|" << endl;
    }
}

int main() {
    int t;
    cin >> t;
    while(t--){
    // Given date: 20/02/2024 (February 20, 2024)
    int day = 0;
    int month = 0;
    int year = 0;
    string s;
    cin >> s;
    string t = "";
    int cnt = 0, x = 0;
    for(int i = 0; i<s.size(); i++)
    {
        t += s[i];
        
        if(s[i] == '/') 
        {
            x = stoi(t);
            cnt++;
            continue;
        }
        if(cnt == 1) day = x;
        else if(cnt == 2) month = x;
        else year = x;
    }

    // Create a tm struct and initialize it with the specified date
    struct tm timeinfo = {0};
    timeinfo.tm_year = year - 1900; // years since 1900
    timeinfo.tm_mon = month - 1;    // months since January (0-based)
    timeinfo.tm_mday = day;         // day of the month

    // Call mktime to normalize the tm struct and calculate its other members
    mktime(&timeinfo);

    // Get the day of the week for the first day of the month (0 = Sunday, 1 = Monday, ..., 6 = Saturday)
    int startDay = timeinfo.tm_wday;

    // Print calendar
    printCalendar(month, year, startDay);
    }
    return 0;
}
