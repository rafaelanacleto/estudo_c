#include <iostream>
#include <vector>

using namespace std;

class Database {

    private:
    protected:
    public:

        Database() {
            //contructor
        }
        ~Database() {
            //destructor
        }

        vector<string> list;
        
        //métodos
        void write();
        void read();
        
};