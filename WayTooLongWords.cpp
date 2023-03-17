#include <iostream>
using namespace std;
#include<string.h>

int main()
{
    int n;
    cin >> n;
    string w;
    if (n) {
        do {
            cin >> w;
            if (w.size() > 10) {
                cout << w[0] << w.size() - 2 << w[w.size() - 1]<<endl;
            }
            else {
                cout << w << endl;;
            }
            n--;
        } while (n);
    }
}
