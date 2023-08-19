// bismillahir rahmanir rahim

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define dl double
#define st string
#define cll(n)   \
    long long n; \
    cin >> n
#define cdl(n) \
    double n;  \
    cin >> n
#define cst(s) \
    string s;  \
    cin >> s
#define ct(n) cout << n
#define w(n)     \
    long long n; \
    cin >> n;    \
    while (n--)
#define a(m, n)                 \
    long long a[n];             \
    for (int i = m; i < n; i++) \
    cin >> a[i]
#define b(m, n)                  \
    long long b[n];              \
    for (int i = m; i <= n; i++) \
    b[i] = 0
#define f(m, i, n) for (int i = m; i < n; i++)
#define fr(m, n) for (int i = m - 1; i >= n; i--)
#define pb push_back
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define bye cout << endl

ll difference, leap_year, total_days, space, extra_space;
st days_of_week[] = {"Sun", "Mon", "Tue", "Wed", "Thu", "Fri", "Sat", " "};
ll days_of_year[] = {32, 29, 32, 31, 32, 31, 32, 32, 31, 32, 31, 32};
ll days_of_leap_year[] = {32, 30, 32, 31, 32, 31, 32, 32, 31, 32, 31, 32};
st month_of_year[] = {"          JANUARY", "         FEBRUARY", "           MARCH", "           APRIL",
                      "            MAY", "           JUNE", "           JULY", "          AUGUST",
                      "         SEPTEMBER", "          OCTOBER", "         NOVEMBER", "         DECEMBER", " "};

int days_of_month(ll total)
{
    bye, bye;
    f(0, i, 7) ct(days_of_week[i] << " ");
    bye, bye;
    space = ((total_days % 7) * 3) + (total_days % 7); //(n-1) spaces from day to day. each day name contains 3 characters+1 " ".
    f(0, i, space) ct(" ");
    extra_space = 27 - space;                                // sun to sat=27 characters(with " ")
    f(1, i, (extra_space + 1) / 4 + 1) ct("  " << i << " "); // "/4" cause day name+" "=4 characters. +1 for for(int i=m; i<n; i++)
    bye;
    total_days += (extra_space + 1) / 4;
    f((extra_space + 1) / 4 + 1, i, total)
    {
        if (i < 10)
            ct("  " << i << " ");
        else
            ct(" " << i << " ");
        if ((i - (extra_space + 1) / 4) % 7 == 0)
            bye;
        total_days++;
    }
    bye, bye, bye;
}

void box()
{
    bye;
    ct("___________________________");
    bye;
}

void Normal_Year()
{
    f(0, i, 12)
    {
        box();
        ct(month_of_year[i]);
        box();
        days_of_month(days_of_year[i]);
    }
}

int Leap_Year()
{
    f(0, i, 12)
    {
        box();
        ct(month_of_year[i]);
        box();
        days_of_month(days_of_leap_year[i]);
    }
}

int main()
{
    ct("# This program is able to show you calendar from of 1 to unlimited.");
    bye, bye;
    ll t = 0;
    while (1)
    {
        t++;
        ct("Case-" << t);
        bye;
        ct("Enter a year that calendar you want to see: ");
        cll(year);
        bye, bye;
        ct("    -CALENDAR OF " << year << "-     ");
        bye, bye, bye;
        difference = year - 1;
        leap_year = difference / 4 - difference / 100 + difference / 400;
        total_days = difference * 365 + leap_year + 1; //+1 cause 1 january, 0001= monday
        if (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0))
            Leap_Year();
        else
            Normal_Year();
    }
}
