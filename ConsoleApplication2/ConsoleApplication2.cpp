#include <iostream>
using namespace std;

int main()
{
    int input, i;
    cin >> input;
    input = (input * 3 + 2); //типо мат операции вот :)
    int* output = new int[input];
    for (i = 0; i < input; i++)
    {
        output[i] = -100 + rand() % 200;
        cout << output[i] << endl;
    }

    delete[] output;
    system("pause");
    return 0;
}
