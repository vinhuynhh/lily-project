#include <iostream>
#include <string>

using namespace std;

int main()
{
    string input;
    cout << "Say 'Hi'" << endl;
    cin >> input;
    cout << endl;

    if (input == "Hi") cout << "Glad to meet you, mentor :> " << endl;
    else cout << "You didn't say 'Hi' :<"<< endl
        ;

    return 0;
}
