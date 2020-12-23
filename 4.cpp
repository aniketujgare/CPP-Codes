#include <iostream>
#include <cstdio>
using namespace std;

/*
Add `int max_of_four(int a, int b, int c, int d)` here.
*/

int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    
    if(a>b && a>b && a>c && a>d)
    cout<<a;
    if(b>a && b>b && b>c && b>d)
    cout<<b;
    if(c>b && c>b && c>c && c>d)
    cout<<c;
    if(d>a && d>b && d>c && d>d)
    cout<<d;
 
    return 0;
}