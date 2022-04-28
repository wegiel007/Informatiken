#include <iostream>
using namespace std;
int main()
{
int a;
int b;
cout << "Największy wspólny dzielnik - NWD"<<endl;
cout << "Podaj pierwszą liczbę: " << endl;
cin >> a;
cout << "Podaj drugą liczbę: " << endl;
cin >> b;



while( a != b)
{
if (a < b) {
b = b - a;
}
else {
a = a - b;
}
}
cout << "Największy wspólny dzielnik: "<< a << endl;
int x;
int y;
int z;
int i;
cout << "________________________________________" << endl;
cout << "                                        " << endl;
cout << "Najmniejsza wspólna wielokrotność - NWW"<<endl;
cout << "Podaj pierwszą liczbę: " << endl;
cin >> y;
cout << "Podaj drugą liczbę: " << endl;
cin >> x;
z = x * y;
while (x != y)
{
if (x < y) {
y = y - x;
}
else {
x = x - y;
}
}
i = z / x;
cout << "Najmniejsza wspólna wielokrotność: " << i <<endl;
}