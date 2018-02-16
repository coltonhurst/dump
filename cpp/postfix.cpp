// Ladies and gentlemen, for fun...
// the postfix increment!

#include <iostream>

using namespace std;

int main()
{
    int value1, value2;
    value1 = 3;
    value2 = value1++;

    cout << value1 << endl << value2 << endl;

    return 0;
}

/*
    Result:

    4
    3
*/
