#include <iostream>
#include "include/database.h"

    void Database::write() {
        ofstream db;

        db.open("db/lists.sl");

        if(db.is_open()) {

        }
        else {
            
        }

        db.close();
    }

    void Database::read() {

    }
