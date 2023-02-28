
#include <iostream>
using namespace std;
const int n = 10;
double list[n];
void print_list()
{
    for (int i = 0; i < n; i++)
        cout << list[i]<<endl;
}
int main()
{
    double t;
    int limit = n - 1;
    for (int i = 0; i < n; i++)
    {
        cout << "list[" << i << "]:";
        cin >> list[i];
    }
    print_list();
    cout << "__________________"<<endl;
    for (int i = 0; i < limit; i+=2)
    {
        t = list[i];
        list[i] = list[i + 1];
        list[i + 1] = t;
    }
    print_list();
}