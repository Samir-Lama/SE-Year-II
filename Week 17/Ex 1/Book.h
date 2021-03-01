//
// Created by Samir Lama on 3/1/21.
//

#ifndef WEEK_17_BOOK_H
#define WEEK_17_BOOK_H
#include "Publication.h"

class Book: public Publication {
    int count;
public:
    void getData();
    void putData();
};


#endif //WEEK_17_BOOK_H
