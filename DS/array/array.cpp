#include <iostream>
using namespace std;
class array
{
private:
    int size;
    int length;
    int* items;

public:
    array(int arrsize)
    {
        size = arrsize;
        length = 0;
        items = new int{ arrsize };
    }
    void fill()
    {
        int no_of_items;
        cout << "how many items you want to fill";
        cin >> no_of_items;
        if (no_of_items > size) {
            cout << "you cannot exeed the array size";
            return;
        }
        else
        {
            for (int i= 0; i < no_of_items; i++)
            {
                cout << "enter item no" << i << endl;
                cin >> items[i];
                length++;
            }
        }
    }

    void display() {
        for (int i= 0; i < length; i++) {
            cout << items[i] << "\t";
        }
        cout << endl;
    }
};

int main()
{
    cout << "hello this is array adt demo";
    int arraysize;
    cout << "enter the array size \n";
    cin >> arraysize;
    array myarray(arraysize);
    myarray.fill();
    myarray.display();

};
