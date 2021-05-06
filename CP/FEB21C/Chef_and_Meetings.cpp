#include <bits/stdc++.h>
using namespace std;
int toHourClock24(string time)
{
    int hrs, mins;
    hrs = (time[0] - '0') * 10 + (time[1] - '0');
    mins = (time[3] - '0') * 10 + (time[4] - '0');
    // cout<<"hrs="<<hrs<<" "<<"mins="<<mins<<endl;
    if (hrs == 12 && time[6] == 'A')
    {
        return mins;
    }
    else if (time[6] == 'A' && (hrs >= 1 && hrs <= 11))
    {
        return mins + hrs * 60;
    }
    else if (hrs == 12 && time[6] == 'P')
    {
        return mins+hrs*60;
    }
    else 
    {
        hrs+=12;
        return mins+hrs*60;
    }
}
int main()
{
     int t;
    cin >> t;
    cin.ignore();
    while (t--)
    {
        string timeP;
        getline(cin, timeP);
        int p = toHourClock24(timeP);
        int n;
        cin >> n;
        cin.ignore();
        while (n--)
        {
            string lr;
            getline(cin, lr);
            // cout<<lr<<endl;
            int li = toHourClock24(lr.substr(0,8));
            int ri = toHourClock24(lr.substr(9,8));
            // cout<<li<<"  "<<ri<<endl;
            if (p >= li && p <= ri)
                cout << '1';
            else
                cout << '0';
        }
        cout << endl;
    }
}