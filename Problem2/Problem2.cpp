#include <iostream>
using namespace std;

int main() {

    //Problem 2: Write a program that inputs three integers from the keyboard and prints the sum, the product, the average, the smallest, and the largest of these numbers.

    int a, b, c;
    cout << "Enter three integers: " << endl;
    cin >> a >> b >> c;

    int sum = a + b + c;
    int product = a * b * c;
    double average = sum / 3;

    if (a > b && a > c)
    {
        cout << "Largest: " << a << endl;

        if (b > c)
        {
            cout << "Smallest: " << c << endl;
        }
        else
        {
            cout << "Smallest: " << b << endl;
        }
    }
    else if (b > a && b > c)
    {
        cout << "Largest: " << b << endl;

        if (a > c)
        {
            cout << "Smallest: " << c << endl;
        }
        else
        {
            cout << "Smallest: " << a << endl;
        }
    }
    else if (c > a && c > b)
    {
        cout << "Largest: " << c << endl;

        if (a > b)
        {
            cout << "Smallest: " << b << endl;
        }
        else
        {
            cout << "Smallest: " << a << endl;
        }
    }
    cout << endl;

    //int smallest = a;
    //if (b < smallest) smallest = b;
    //if (c < smallest) smallest = c;

    //int largest = a;
    //if (b > largest) largest = b;
    //if (c > largest) largest = c;

    cout << "Sum: " << sum << endl;
    cout << "Product: " << product << endl;
    cout << "Average: " << average << endl;
    //cout << "Smallest: " << smallest << endl;
    //cout << "Largest: " << largest << endl;

    return 0;
}