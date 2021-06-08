#include "iostream"
#include "IntStack.h"
#include "MathStack.h"
#include "IntStack.cpp"
#include "MathStack.cpp"
using namespace std;
int main(){
    int size;
    cout << "How many data do you want to enter";
    cin >> size;
    int num;
    int count = 1;
    MathStack math(size);
    for (int i = 0; i < size; i++) {
        cout << count++ << ". Enter your number: ";
        cin >> num;
        math.push(num);
    }
    MathStack Multi = math;
    MathStack Add = math;
    MathStack AllAdd = math;
    MathStack AllMulti = math;

    Multi.multi();
    cout << endl;
    Add.add();
    cout << endl;
    AllAdd.addAll();
    cout << endl;
    AllMulti.multiAll();


}