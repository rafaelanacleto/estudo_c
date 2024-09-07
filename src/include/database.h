#include <iostream>
#include <vector>
#include <fstream>

using namespace std;

class Database
{

private:
protected:
public:
    Database()
    {
        // contructor
    }
    ~Database()
    {
        // destructor
    }

    vector<string> list;

    // métodos
    void write(vector<string> list);
    void read();
};