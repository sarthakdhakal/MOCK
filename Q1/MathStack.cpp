// Implementation file for the MathStack class
#include "MathStack.h"
#include "iostream"
using namespace std;
//***********************************************
// Member function add. add pops                *
// the first two values off the stack and       *
// adds them. The sum is pushed onto the stack. *
//***********************************************

void MathStack::add()
{
    int num, sum;

    // Pop the first two values off the stack.
    pop(sum);
    pop(num);

    // Add the two values, store in sum.
    sum += num;

    // Push sum back onto the stack.
    push(sum);

    cout << "Addition Result of two poped value: " << sum;
}

//***********************************************
// Member function sub. sub pops the            *
// first two values off the stack. The          *
// second value is subtracted from the          *
// first value. The difference is pushed        *
// onto the stack.                              *
//***********************************************

void MathStack::sub()
{
    int num, diff;

    // Pop the first two values off the stack.
    pop(diff);
    pop(num);

    // Subtract num from diff.
    diff -= num;

    // Push diff back onto the stack.
    push(diff);
}

void MathStack::div()
{
    int num, div;

    // popping
    pop(div);
    pop(num);
    div /= num;

    push(div);
    cout << "Division Result of two popped value: " << div;
}

void MathStack::multi()
{
    int multi, num;

    //pop
    pop(multi);
    pop(num);

    multi *= num;
    push(multi);
    cout << "Multiplication Result of two popped value: " << multi;
}

void MathStack::multiAll()
{
    int multi = 1, num1;
    while (!isEmpty())
    {
        pop(num1);
        multi = multi * num1;
    }

    cout << "All Multiplication is: " << multi;
}

void MathStack::addAll()
{
    int multi = 0, num1;
    while (!isEmpty())
    {
        pop(num1);
        multi = multi + num1;
    }

    cout << "All Addition is: " << multi;
}
