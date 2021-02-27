#include <iostream>
using namespace std;

int findDivisor (int numerator, int denominator) {
    while (numerator != denominator) {
        if (numerator > denominator) numerator -= denominator;
        else denominator -= numerator;
    }
    return numerator;
}

int main()
{
    int N;
    cin >> N;
    for (int i = 1; i < N; i++) {
        if (findDivisor(i, N) == 1)
            cout << i << "/" << N << endl;
    }
    cin >> N;
}


