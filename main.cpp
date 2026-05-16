# include <iostream>
using namespace std;
int main()
{
    double radius;
    const double pi = 3.14;
    cout << " Radius of Circle is: ";
    cin >> radius;
    double Area = pow(radius ,2)* pi;
    cout << " The Area Of Circle: " << Area << endl;
    return 0;
}
