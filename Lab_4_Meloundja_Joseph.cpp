#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main() {
    // making some fun variables
    int fruitNum; // number of fruits we have
    string fruitType; // type of fruit
    int sugarAmount; // amount of sugar in the fruit

    // asking user how many fruits they got on hand
    cout << "How many fruits do you have? ";
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
        cout << "You have " << fruitNum << " fruits left to store..." << endl << endl;
    }

    // fridge is fully stocked!
    cout << "All fruits are now chilling in the fridge!" << endl;

    /*How many fruits do you have? 5
You start loading up your fruits into the fridge...
What fruit are you putting into the fridge? apple
How many grams of sugar are in a cup of apple? 5
LOW SUGAR FRUIT
You have 4 fruits left to store...
What fruit are you putting into the fridge? strawberry
How many grams of sugar are in a cup of strawberry? 25
HIGH SUGAR FRUIT
You have 3 fruits left to store...
What fruit are you putting into the fridge? banana
How many grams of sugar are in a cup of banana? 10
LOW SUGAR FRUIT
You have 2 fruits left to store...
What fruit are you putting into the fridge? grape
How many grams of sugar are in a cup of grape? 8
    LOW SUGAR FRUIT
    You have 1 fruits left to store...
    What fruit are you putting into the fridge? mango
    How many grams of sugar are in a cup of mango? 15
    HIGH SUGAR FRUIT
    You have 0 fruits left to store...
    All fruits are now chilling in the fridge!*/
    return 0;
}