/* Assignment C++: 1
   Author: Shiri Nisser, ID 209323658,
M*/
#include "Menu.h"

void Menu::mainMenu()
{
    char mainmenu_option;
    while (1)
    {
        cout << "------------------------" << endl;
        cout << "Main Menu:" << endl;
        cout << "1. Shop Menu" << endl;
        cout << "2. Stack Menu " << endl;
        cout << "3. Exit " << endl;
        cin >> mainmenu_option;
        switch (int(mainmenu_option) - 48) {
        case 1:
            shopMenu();
            break;
        case 2:
            stackMenu();
            break;
        case 3:
            cout << "Goodbye!" << endl;
            exit(1);
            break;
        default: cout << "Wrong input, try again!" << endl;

        }
    }


}
void Menu::shopMenu()
{
    vendingmachine p;
    int flag = 1;//For ending the loop in shoopmenu
    char shopmenu_option;
    while (flag)
    {
        cout << "------------------------" << endl;
        cout << "Shop Menu:" << endl;
        cout << "1. Orange juice" << endl;
        cout << "2. Caroot juice" << endl;
        cout << "3. pomegranate juice" << endl;
        cout << "4. Exit Shop Menu" << endl;
        cin >> shopmenu_option;
        switch (int(shopmenu_option) - 48) {
        case 1:
            p.sellproduct('o');
            break;
        case 2:
            p.sellproduct('c');
            break;
        case 3:
            p.sellproduct('p');
            break;
        case 4:
            cout << "Exiting Shop Menu" << endl;
            flag = 0;
            break;
        default: cout << "Wrong input, try again!" << endl;
        }
    }


}
void Menu::stackMenu()
{
    int value;
    int flag = 1;//For ending the loop 
    char stackmenu_option;
    Stack c;
    while (flag)
    {
        cout << "------------------------" << endl;
        cout << "Stack Menu:" << endl;
        cout << "1. Push a value" << endl;
        cout << "2. Pull a value" << endl;
        cout << "3. View the first value" << endl;
        cout << "4. Check if the stack empty" << endl;
        cout << "5. Exit Stack Menu" << endl;
        cin >> stackmenu_option;
        if (stackmenu_option == '1')
        {
            cout << "Please insert the new element:" << endl;
            cin >> value;
            StackNode k(value);
            c.push(k);
        }
        //StackNode k(value);
        switch (int(stackmenu_option) - 48) {
        case 1:
            break;

        case 2:
            if (c.isEmpty()) cout << "The stuck is Empty" << endl;
            else c.pop();

            break;
        case 3:
            if (c.isEmpty()) cout << "The stuck is Empty" << endl;
            else cout << "the top is " << c.peek() << endl;
            break;
        case 4:
            if (c.isEmpty()) cout << "The stuck is Empty" << endl;
            else cout << "The stuck is NOT Empty" << endl;

            break;
        case 5:
            cout << "Exiting Stack Menu" << endl;
            flag = 0;
            break;
        default: cout << "Wrong input, try again!" << endl;
        }
    }


}