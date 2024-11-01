#include <iostream>
using namespace std;

int main()
{
    string lines[] = {
        "           *********         ",
        "      *****         ****     ",
        "    **                  **   ",
        "   *                      *  ",
        " **                        **",
        "*                            *",
        "*                            *",
        "**                          **",
        " **  *    ****  ****    *  **",
        "   ** ***** ****** ***** **  ",
        "             ****            ",
        "             ****            ",
        "             ****            ",
        "             ****            ",
        "            ******           ",
        "           ********          "};

    for (string line : lines)
    {
        cout << line << endl;
    }

    return 0;
}
