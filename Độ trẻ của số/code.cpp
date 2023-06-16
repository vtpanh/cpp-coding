#include <iostream>
#include <string>

using namespace std;

int main()
{
    string num;
    bool diff = false;
    int dem = 0;
    cin >> num;
    for (int i = num.length() - 1; i >= 0; --i) {
        if (num[i] != '0') {
            diff = true;
        }
        if (diff) {
            if (num[i] == '0') {
                dem++;
            }
        }
    }
    cout << dem;
    return 0;
}
