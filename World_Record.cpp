#include <bits/stdc++.h>
using namespace std;
float sround(float var)
{
    float value = (int)(var * 100 + .5);
    return (float)value / 100;
}
const float prevRecord = 9.58; // time to finish race
const int raceTrack = 100; // 100meters
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        float k1, k2, k3, v;
        cin >> k1 >> k2 >> k3 >> v;
        float time = raceTrack / (k1 * k2 * k3 * v); // time taken to finish race
        float ans = sround(time);
        ans < prevRecord ? cout << "YES" << endl : cout << "NO" << endl;
    }

    return 0;
}