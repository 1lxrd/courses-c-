#include <iostream>

using namespace std;

int main()

{
    int num, separateNum;

    cout << "Enter your number:" << endl;
    cin >> num;
    num = num < 0 ? -num : num;
    int i = 0;
    int n = 10000;
    

    while (i <5) {
        separateNum = num / n;
        separateNum %= 10;
        cout << separateNum << endl;
        i++;
        n /= 10;
    }
    cout << endl;

	system("pause");
}
