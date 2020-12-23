#include <iostream>
using namespace std;
class rational //declaration and definition of rational class
{
private:
    int num;
    int den;
    int lcm(int a, int b);
    int hcf(int a, int b);

public:
    rational() //default constructor in rational class
    {
        num = 0;
        den = 1;
    }
    rational(int n, int d = 1) //double argumented constructor in rational class
    {
        if (d == 0)
        {
            cout << "denominator can't be zero";
            exit(1);
        }
        else
        {
            num = n;
            den = d;
        }
    }
    rational reduce() //reduce() function to reduce numerator and denominator by HCF
    {
        rational temp;
        int h = hcf(num, den);
        temp.num = num / h;
        temp.den = den / h;
        return temp;
    }
    rational operator+(rational r)
    {
        int l, t1, t2, x1, x2, den1, den2, p;
        rational ans;
        if (den < 0)
            den1 = -den;
        else
            den1 = den;
        if (r.den < 0)
            den2 = -r.den;
        else
            den2 = r.den;
        p = lcm(den1, den2);
        if ((den < 0 && r.den > 0) || (den > 0 && r.den < 0))
            l = -p;
        else
            l = p;
        ans.den = l;
        t1 = l / den;
        t2 = l / r.den;
        x1 = num * t1;
        x2 = r.num * t2;
        ans.num = x1 + x2;
        return ans;
    }
    friend istream &operator>>(istream &s, rational &r); //>> operator overloading
    friend ostream &operator<<(ostream &s, rational &r); //<< operator overloading
};
int rational::lcm(int a, int b)
{
    int i, lcm = 1;
    while (!(a == 1 && b == 1))
    {
        i = 2;
        while (!(a % i == 0 || b % i == 0) && i < (a > b ? a : b))
            i++;
        lcm *= i;
        if (a % i == 0)
            a /= i;
        if (b % i == 0)
            b /= i;
    }
    return lcm;
}
int rational::hcf(int a, int b)
{
    int r = a % b;
    while (r)
    {
        a = b;
        b = r;
        r = a % b;
    }
    return b;
}
istream &operator>>(istream &s, rational &r)
{
    int a, b;
    char c;
    s >> a >> c >> b;
    if (c != '/')
    {
        cout << "use of invalid notation";
        exit(0);
    }
    if (b == 0)
    {
        cout << "denominator can't be zero.";
        exit(1);
    }
    r.num = a;
    r.den = b;
    return s;
}
ostream &operator<<(ostream &s, rational &r)
{
    if (r.den == 1)
        s << r.num;
    else
    {
        if (r.den == -1)
            s << -r.num;
        else
            s << r.num << '/' << r.den;
    }
    return s;
}
int main() //main() function to test rational class
{
    rational r1, r2, r3;
    cout << "enter r1:";
    cin >> r1;
    cout << "enter r2:";
    cin >> r2;
    r3 = r1 + r2;
    cout << r1 << " + " << r2 << " = " << r3 << " = ";
    r3 = r3.reduce();
    cout << r3 << endl;
    return 0;
}



OUTPUT :-
enter r1:11/22
enter r2:56/78
11/22 + 56/78 = 1045/858 = 95/78