#include <iostream>
using namespace std;

int main() {
    // declaring variables 
    double bill;
    string name, item;
    string ask = "Item added to purchase! Would you like to buy another item (1), or get your bill(2)?";
    int cont = 1;

    // asks the user for their name + greets the user
    cout << "What is your name? " << endl;
    cin >> name;

    cout << "Hello, " << name << ", welcome to IKEA of Denville!" << endl;
    while (cont == 1) {
        cout << "The following iteams are for sale: " << endl;
    }
}