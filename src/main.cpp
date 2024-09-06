#include<iostream>
using namespace std;

void print_menu(string name);
void print_list();
void add_item();
void delete_item();
void search_item();

int main(int arg_count, char *args[]) {

    if(arg_count > 1) {
        string name = args[1];
        cout << "Welcome  " << name << endl;  
        print_menu(name); 
    }
    else {
         cout << "No Arguments" << endl;
    }

    return 0;
}

void print_menu(string name) {
    int choice;

    cout << "**********************************************************\n";
    cout << " 1 - Print list. \n";
    cout << " 2 - Add to list. \n";
    cout << " 3 - Delete from list. \n";
    cout << " 4 - Search in list. \n";
    cout << " 5 - Quit. \n";
    cout << " Enter your choice and press return/enter. \n";
    cout << "**********************************************************\n" << endl;

    cin >> choice;
    
    if(choice == 5) {
    	exit(0);    
    }
    
}
