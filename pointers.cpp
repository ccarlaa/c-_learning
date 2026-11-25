
#include <iostream>
#include <cstring>

using namespace std;

// int main()
// {
//     int var = 0;
//     int* ptr = &var;
//     *ptr = 10;

//     cout << *ptr;

//     cin.get();
//     return 0;
// }

int main() 
{
    char* buffer = new char[8];
    memset(buffer, 0, 8);

    delete[] buffer;

    cin.get();
}