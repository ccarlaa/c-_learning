
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    long elapsedSeconds = time(nullptr);
    srand(elapsedSeconds);
    int number = rand() % 10;
    cout << number << "\n";

    return 0;
}