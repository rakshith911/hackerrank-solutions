#include <iostream>
using namespace std;

int main()
 {

   int n,sum = 0;
   int a;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        cin >> a;
        sum = sum +a;
    }
    cout << sum << endl;
    return 0;
}