#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main() {
    // variables
    int fruitNum; // number of fruits we have
    string fruitType; // type of fruit
    int sugarAmount; // amount of sugar in the fruit

    // asking user how many fruits they got on hand
    cout << "How many fruits do you have? " << endl;
    cin >> fruitNum;
    cout << endl;

    // setting the scene
    cout << "You start loading up your fruits into the fridge..." << endl << endl;

    // loop until all fruits are safely in the fridge
    while (fruitNum != 0) {
        // asking what kind of fruit it is
        cout << "What fruit are you putting into the fridge? ";
        cin >> fruitType;
        cout << endl;

        // asking how sweet the fruit is
        cout << "How many grams of sugar are in a cup of " << fruitType << "? ";
        cin >> sugarAmount;
        cout << endl;

        // checking sugar level in the fruit
        if (sugarAmount <= 10) {
            cout << "LOW SUGAR FRUIT" << endl << endl;
        } else if (sugarAmount > 10 && sugarAmount <= 14) {
            cout << "MEDIUM SUGAR FRUIT" << endl << endl;
        } else {
            cout << "HIGH SUGAR FRUIT" << endl << endl;
        }

        // tell user how many fruits left to go
        fruitNum -= 1;
        if (fruitNum == 1) {
            cout << "You have 1 fruit left to store..." << endl << endl;
        } else {
            cout << "You have " << fruitNum << " fruits left to store..." << endl << endl;
        }
    }

    // fridge is fully stocked!
    cout << "All fruits are now chilling in the fridge!" << endl;

    return 0;
}
