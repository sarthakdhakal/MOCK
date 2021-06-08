#include "DynStack.h"
#include "Inventory.h"
#include <iostream>
using namespace std;
int main(){
    DynStack<Inventory> inventories;
    Inventory i1;
    int serial, lot;
    string date;
    int choice;
    while (true){
        cout << "Enter action number you want to perform: "
                "\n1. To push data"
                "\n2. To pop data"
                "\n3. Exit"
                "\nEnter your action number:";
        cin >> choice;
        switch (choice) {
            case 1:
                cout << "Enter your serial number: ";
                cin >> serial;
                i1.setSerialNum(serial);
                cout << "Enter your lot number: ";
                cin >> lot;
                i1.setLotNum(lot);
                cout << "Enter your date: ";
                cin >> date;
                i1.setDate(date);
                inventories.push(i1);
                break;

            case 2:
                inventories.pop(i1);
                cout << "Serial Number: " << i1.getSerialNum()
                << "\nLot Number: " << i1.getLotNum()
                << "\nManufactured Date: " << i1.getDate()<< "\n";
                break;

            case 3:
            while (!inventories.isEmpty())
            {
                inventories.pop(i1);
                cout << "The values are: ";
                cout << "Serial Number: " << i1.getSerialNum()
                << "\nLot Number: " << i1.getLotNum()
                << "\nManufactured Date: " << i1.getDate()<< "\n";
            }
            
                exit(0);

            default:
                cout << "\nInvalid input action\n";

        }
    }
}
