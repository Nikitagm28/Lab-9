1 задание:
#include<iostream>
#include<math.h>
using namespace std;
int main() {
    int time;
    cin >> time;
    cout << time % 60;
}
2 задание:
#include<iostream>
#include<math.h>
using namespace std;
int main() {
    int k;
    cin >> k;
    cout << k % 7;
}
3 задание:
#include<iostream>
#include<math.h>
using namespace std;
int main() {
    int k, n;
    cin >> k;
    cin >> n;
    int x = (k + n) % 7;
    if (x - 1 == 0) cout << 7;
    else
        cout << x-1;
}
4 задание:
#include<iostream>
#include<math.h>
using namespace std;
int main() {
    int a, b, c;
    cin >> a >> b >> c;
    int A = a / c;
    int B = b / c;
    int S = A * B;
    int s = S / c * c;
    cout << s;
    int ost = a * b - (A*c*B*c);
    cout << "\n" << ost;
}
5 задание:
#include<iostream>
#include<math.h>
using namespace std;
int main() {
    int year;
    cin >> year;
    int ans = year / 100;
    if (year % 100) ans++;
    cout << ans;
}
