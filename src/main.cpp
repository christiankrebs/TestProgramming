#include <iostream>
using namespace std;

int main(int argc, char **argv)
{
    // Print a simple text to the console
    cout << "Hello! This is a test program." << endl;
    cout << "You have entered the following arguments:" << endl;

    // Check, if there is an input from the user
    if (argc > 1)
    {
        // loop over all inputs the user have entered
        for (int i=1; i<argc; i++)
        {
            cout << argv[i] << endl;
        }
    // 
    }else{
        cout << "You have entered no arguments! Program usage:" << endl;
        cout << "./TestProgramming [inputs]\nExample: ./TestProgramming 1 Text und 8482" << endl;
    }
    return 0;
}
