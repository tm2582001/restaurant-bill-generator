#include<iostream>
#include<conio.h>
#include<stdlib.h>
#include<string>
using namespace std;

int main() {
    int food_quantity[10], n = 0, j = 0;
    float food_price[10], total_price[10], grosstotal = 0;
    char choice;
    string foodname[10];

    // for printing menu

    cout << "                  " << "*********      *********" << endl;
    cout << "                  " << "********* MENU *********" << endl;
    cout << "                  " << "*********      *********" << endl;
    cout << "                  " << "************************" << endl;
    cout << "                  " << "    KUNI FOOD CORNER    " << endl;
    cout << "                  " << "************************" << endl;
    cout << endl;
    cout << "Food Name: " << "                  " << "Price:" << "   " << "Press button to select:" << endl;
    cout << "Masala Dosa" << "                  " << "  60" << "      " << "   a" << endl;
    cout << "Plain Dosa" << "                   " << "  50" << "      " << "   b" << endl;
    cout << "Dal Makhani" << "                  " << "  120" << "     " << "   c" << endl;
    cout << "Sahi Paneer" << "                  " << "  160" << "     " << "   d" << endl;
    cout << "Kadhai Paneer" << "                " << "  160" << "     " << "   e" << endl;
    cout << "Malai Kofta" << "                  " << "  120" << "     " << "   f" << endl;
    cout << "Onion Rice" << "                   " << "  60 " << "     " << "   g" << endl;
    cout << "Tava Roti" << "                    " << "  8  " << "     " << "   h" << endl;
    cout << "Tandoori Roti" << "                " << "  7  " << "     " << "   i" << endl;
    cout << "Plain Naan" << "                   " << "  25 " << "     " << "   j" << endl;


    // for taking user input
    for (int i = 0; n == 0;) {
        int l = -1;
        cout << "press 'k' when you are done" << endl;
        cout << "enter the food item you want: ";
        cin >> choice;
        switch (choice) {
        case 'a':
            for (int m = 0; m <= j; m++) {
                if (foodname[m] == "Masala Dosa  ") {
                    l = m;
                }
            }
            if (l == -1) {
                cout << "you have choosen Masala dosa" << endl;
                foodname[j] = "Masala Dosa  ";
                food_price[j] = 60;
                cout << "now enter quantity you want: ";
                cin >> food_quantity[j];
                j++;
            }
            else {
                cout << "you have already ordred " << food_quantity[l] << endl;
                cout << "now enter how much you want ";
                int temp;
                cin >> temp;
                food_quantity[l] = food_quantity[l] + temp;
            }
            break;
        case 'b':
            for (int m = 0; m <= j; m++) {
                if (foodname[m] == "Plain Dosa   ") {
                    l = m;
                }
            }
            if (l == -1) {
                cout << "you have choosen Plain Dosa" << endl;
                foodname[j] = "Plain Dosa   ";
                food_price[j] = 50;
                cout << "now enter quantity you want: ";
                cin >> food_quantity[j];
                j++;
            }
            else {
                cout << "you have already ordred " << food_quantity[l] << endl;
                cout << "now enter how much you want ";
                int temp;
                cin >> temp;
                food_quantity[l] = food_quantity[l] + temp;
            }
            break;
        case 'c':
            for (int m = 0; m <= j; m++) {
                if (foodname[m] == "Dal Makhani  ") {
                    l = m;
                }
            }
            if (l == -1) {
                cout << "you have choosen Dal Makhani" << endl;
                foodname[j] = "Dal Makhani  ";
                food_price[j] = 120;
                cout << "now enter quantity you want: ";
                cin >> food_quantity[j];
                j++;
            }
            else {
                cout << "you have already ordred " << food_quantity[l] << endl;
                cout << "now enter how much you want ";
                int temp;
                cin >> temp;
                food_quantity[l] = food_quantity[l] + temp;
            }
            break;
        case 'd':
            for (int m = 0; m <= j; m++) {
                if (foodname[m] == "Sahi Paneer  ") {
                    l = m;
                }
            }
            if (l == -1) {
                cout << "you have choosen Sahi Paneer" << endl;
                foodname[j] = "Sahi Paneer  ";
                food_price[j] = 160;
                cout << "now enter quantity you want: ";
                cin >> food_quantity[j];
                j++;
            }
            else {
                cout << "you have already ordred " << food_quantity[l] << endl;
                cout << "now enter how much you want ";
                int temp;
                cin >> temp;
                food_quantity[l] = food_quantity[l] + temp;
            }
            break;
        case 'e':
            for (int m = 0; m <= j; m++) {
                if (foodname[m] == "Kadhai Paneer") {
                    l = m;
                }
            }
            if (l == -1) {
                cout << "you have choosen Kadhai Paneer" << endl;
                foodname[j] = "Kadhai Paneer";
                food_price[j] = 160;
                cout << "now enter quantity you want: ";
                cin >> food_quantity[j];
                j++;
            }
            else {
                cout << "you have already ordred " << food_quantity[l] << endl;
                cout << "now enter how much you want ";
                int temp;
                cin >> temp;
                food_quantity[l] = food_quantity[l] + temp;
            }
            break;
        case 'f':
            for (int m = 0; m <= j; m++) {
                if (foodname[m] == "Malai Kofta  ") {
                    l = m;
                }
            }
            if (l == -1) {
                cout << "you have choosen Malai Kofta" << endl;
                foodname[j] = "Malai Kofta  ";
                food_price[j] = 120;
                cout << "now enter quantity you want: ";
                cin >> food_quantity[j];
                j++;
            }
            else {
                cout << "you have already ordred " << food_quantity[l] << endl;
                cout << "now enter how much you want ";
                int temp;
                cin >> temp;
                food_quantity[l] = food_quantity[l] + temp;
            }
            break;
        case 'g':
            for (int m = 0; m <= j; m++) {
                if (foodname[m] == "Onion Rice   ") {
                    l = m;
                }
            }
            if (l == -1) {
                cout << "you have choosen Onion Rice" << endl;
                foodname[j] = "Onion Rice   ";
                food_price[j] = 60;
                cout << "now enter quantity you want: ";
                cin >> food_quantity[j];
                j++;
            }
            else {
                cout << "you have already ordred " << food_quantity[l] << endl;
                cout << "now enter how much you want ";
                int temp;
                cin >> temp;
                food_quantity[l] = food_quantity[l] + temp;
            }
            break;
        case 'h':
            for (int m = 0; m <= j; m++) {
                if (foodname[m] == "Tava Roti    ") {
                    l = m;
                }
            }
            if (l == -1) {
                cout << "you have choosen Tava Roti" << endl;
                foodname[j] = "Tava Roti    ";
                food_price[j] = 8;
                cout << "now enter quantity you want: ";
                cin >> food_quantity[j];
                j++;
            }
            else {
                cout << "you have already ordred " << food_quantity[l] << endl;
                cout << "now enter how much you want ";
                int temp;
                cin >> temp;
                food_quantity[l] = food_quantity[l] + temp;
            }
            break;
        case 'i':
            for (int m = 0; m <= j; m++) {
                if (foodname[m] == "Tandoori Roti") {
                    l = m;
                }
            }
            if (l == -1) {
                cout << "you have choosen Tandoori Roti" << endl;
                foodname[j] = "Tandoori Roti";
                food_price[j] = 7;
                cout << "now enter quantity you want: ";
                cin >> food_quantity[j];
                j++;
            }
            else {
                cout << "you have already ordred " << food_quantity[l] << endl;
                cout << "now enter how much you want ";
                int temp;
                cin >> temp;
                food_quantity[l] = food_quantity[l] + temp;
            }
            break;
        case 'j':
            for (int m = 0; m <= j; m++) {
                if (foodname[m] == "Plain Naan   ") {
                    l = m;
                }
            }
            if (l == -1) {
                cout << "you have choosen Plain Naan" << endl;
                foodname[j] = "Plain Naan   ";
                food_price[j] = 25;
                cout << "now enter quantity you want: ";
                cin >> food_quantity[j];
                j++;
            }
            else {
                cout << "you have already ordred " << food_quantity[l] << endl;
                cout << "now enter how much you want ";
                int temp;
                cin >> temp;
                food_quantity[l] = food_quantity[l] + temp;
            }
            break;
        case 'k':
            n = 1;
            break;
        default:
            cout << "no data exist" << endl;

        }
    }

    // to print final bill
    system("cls");
    cout << "         " << "************************" << endl;
    cout << "         " << "    KUNI FOOD CORNER    " << endl;
    cout << "         " << "************************" << endl;
    cout << "Item:" << "            " << "price:  " << "quantity:  " << "total rs:" << endl;

    for (int i = 0; i < j; i++) {
        total_price[i] = food_price[i] * food_quantity[i];
        cout << foodname[i] << "      " << food_price[i] << "         " << food_quantity[i] << "        " << total_price[i] << endl;
        grosstotal = grosstotal + total_price[i];
    }
    cout << "-----------------------------------------------------" << endl;
    cout << "sub total                              " << grosstotal << endl << endl;
    float gst = grosstotal * 0.09;
    cout << "add S GST(9.000%) on " << grosstotal << "             " << gst << endl;
    cout << "add c GST(9.000%) on " << grosstotal << "             " << gst << endl;
    cout << "Amount incl of all taxes " << "            " << grosstotal + gst + gst << endl;
    _getch();


    return 0;
}