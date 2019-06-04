#include <iostream>
#include <vector>
#include <string>
using namespace std;



template <typename type>
class Sort {

public:

    vector <type> dane;

    void addElement(type el) {

        dane.push_back(el);

    }

    void swap(type& i, type& j) {
        type temp = j;
        j = i;
        i = temp;
    }

    void bubbleSort()
    {
        int n = dane.size();
        int i, j;
        for (i = 0; i < n-1; i++)

            for (j = 0; j < n-i-1; j++)
                if (dane.at(j) > dane.at(j+1))
                    swap(dane.at(j), dane.at(j+1));

    }

    void displaySortedAscending() {

        bubbleSort();
        for (int i = 0; i < dane.size(); i++) {
            cout << dane.at(i) << " ";
        }
        cout << endl;

    }

    void displaySortedDescending() {

        bubbleSort();
        for(int i = dane.size() - 1; i >= 0; i--) {
            cout << dane.at(i) << " ";
        }
        cout << endl;
    }

};

class HappyAlpaca {

public:
    int happinessLevel;

    HappyAlpaca(int input) {
        happinessLevel = input;
    }

};

bool operator> (HappyAlpaca a, HappyAlpaca b) {
    return a.happinessLevel > b.happinessLevel;
}

ostream& operator<< (ostream& out, HappyAlpaca a1) {
    out << a1.happinessLevel;
    return out;
}

int main() {

    //integer test
    Sort<int> a;
    a.addElement(5);
    a.addElement(4);
    a.addElement(3);
    a.addElement(8);
    a.displaySortedAscending();
    a.displaySortedDescending();


    //float test
    Sort<float> b;
    b.addElement(5.5);
    b.addElement(6.8);
    b.addElement(3.14);
    b.addElement(-156.2);
    b.displaySortedAscending();
    b.displaySortedDescending();

    //string test
    Sort<string> c;
    c.addElement("a");
    c.addElement("b");
    c.addElement("c");
    c.addElement("ddd");
    c.displaySortedAscending();
    c.displaySortedDescending();

    //alpaca test
    Sort<HappyAlpaca> d;
    d.addElement(HappyAlpaca (5));
    d.addElement(HappyAlpaca (3));
    d.addElement(HappyAlpaca (100));

    d.displaySortedAscending();
    d.displaySortedDescending();

    return 0;

}