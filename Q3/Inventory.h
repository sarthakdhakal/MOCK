//
// Created by Samir Lama on 6/7/21.
//

#ifndef MOCK_SE_INVENTORY_H
#define MOCK_SE_INVENTORY_H



#include "string.h"
using namespace std;
class Inventory{
private:
    int serialNum, lotNum;
    string date;

public:
    int getSerialNum() const {
        return serialNum;
    }

    void setSerialNum(int serialNum) {
        Inventory::serialNum = serialNum;
    }

    int getLotNum() const {
        return lotNum;
    }

    void setLotNum(int lotNum) {
        Inventory::lotNum = lotNum;
    }

    const string getDate() const {
        return date;
    }

    void setDate(const string date) {
        Inventory::date = date;
    }

};


#endif //MOCK_SE_INVENTORY_H
