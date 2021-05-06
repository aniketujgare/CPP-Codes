#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, d;
    cin >> n >> d;
    int songDuration[n];
    int songTime{0};
    for (int i = 0; i < n; i++)
    {
        cin >> songDuration[i];
        songTime += songDuration[i];
    }

    int jokeTime = (n - 1) * 10;
    if (jokeTime + songTime > d)
    {
        cout << -1;
        return 0;
    }
    jokeTime += d - (songTime + jokeTime);

    int nOfJokes = jokeTime / 5;
    cout << nOfJokes;

    return 0;
}