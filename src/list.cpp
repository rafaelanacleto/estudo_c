#include "include/list.h"

void List::print_menu()
{
    int choice;

    cout << "**********************************************************\n";
    cout << " 1 - Print list. \n";
    cout << " 2 - Add to list. \n";
    cout << " 3 - Delete from list. \n";
    cout << " 4 - Search in list. \n";
    cout << " 5 - Clear Screen. \n";
    cout << " 6 - Quit. \n\n";
    cout << " ->  Enter your choice and press return/enter. \n";
    cout << "**********************************************************\n"
         << endl;

    cin >> choice;

    if (choice == 6)
    {
        exit(0);
    }
    else if (choice == 2)
    {
        system("clear");
        add_item();
    }
    else if (choice == 3)
    {
        system("clear");
        delete_item();
    }
    else if (choice == 1)
    {
        system("clear");
        print_list();
    }
    else if (choice == 5)
    {
        system("clear");
        print_menu();
    }
}

void List::add_item()
{

    cout << "\n";
    cout << "***** Add Item *****\n";
    cout << "Type in an item and press Enter: ";

    string item;
    cin >> item;

    list.push_back(item);

    cout << "\nSuccess added! \n";
    cin.clear();

    print_menu();
}

void List::print_list()
{

    cout << "\n\n";
    cout << "***** Print List *****\n";
    cout << "\n";
    int c = 1;

    for (string k : list)
    {
        cout << c++ << " - " << k << " | ";
    }
    cout << "\n\n\n";
    print_menu();
}

void List::delete_item()
{

    int index = 0;
    cout << "\n\n";
    cout << "***** Delete Item *****\n";    

    if (list.size())
    {
        for (int i = 0; i < int(list.size()); i++)
        {
            cout << i << " - " << list[i] << "\n";
        }

        cout << "-> Select an item index number to delete: ";
        cin >> index;
    }
    else
    {
        cout << "No item in the list.\n";
    }

    list.erase(list.begin() + index);
    cout << "\n";
    for (int i = 0; i < int(list.size()); i++)
    {
        cout << i << " - " << list[i] << "\n";
    }
    cout << "\n";
    cout << "Item deleting success! \n\n";

    print_menu();

}
