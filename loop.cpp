
#include <iostream>

using namespace std;

int main()
{
    int i = 0;

    // for(i = 0; i < 5; i++) 
    // {
    //     cout << "hello" << "\n";
    // }
    
    // while(i < 5) 
    // {
    //     i++;
    //     cout << "hello" << "\n";

    // }

    do {
        i++;
        cout << "hello" << "\n";

    } while (i != 5);

    std::cin.get(); //stop till the user press enter

}