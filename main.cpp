#include <iostream>

using namespace std;

int add(int &a, int &b);

int main()
{
    cout << "Greetings.....\n";
    cout << "Hello World\n";

    int x = 5;
    int y = 3;
    add(x, y);
    return 0;
}

int add(int &a, int &b)
{
    a = 7;
    int sum = a + b;
    return sum;
}