#include <iostream>
#include <vector>
#include <string>

using namespace std;

class List
{

private:
protected:
public:
    List()
    {
        // contructor
    }
    ~List()
    {
        // destructor
    }

    vector<string> list;
    string name;

    void print_menu();
    void print_list();
    void add_item();
    void delete_item();
    void search_item();
};