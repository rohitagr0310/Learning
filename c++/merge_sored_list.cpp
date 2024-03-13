#include <iostream>
using namespace std;

class merge_sorted_list
{
private:
    int a[4] = {10, 15, 20, 25};
    int b[4] = {2, 3, 5, 7};

public:
    merge_sorted_list()
    {
        int a1 = 0, b1 = 0;
        int size_a = sizeof(a) / sizeof(int);
        int size_b = sizeof(b) / sizeof(int);

        while (a1 < size_a && b1 < size_b)
        {
            if (a[a1] < b[b1])
            {
                cout << a[a1] << " ";
                a1++;
            }
            else
            {
                cout << b[b1] << " ";
                b1++;
            }
        }
        while (a1 < size_a)
        {
            cout << a[a1] << " ";
            a1++;
        }
    }
};

int main()
{
    merge_sorted_list obj1;
    return 0;
}
