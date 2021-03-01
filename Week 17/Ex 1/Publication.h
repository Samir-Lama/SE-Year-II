//
// Created by Samir Lama on 3/1/21.
//

#ifndef WEEK_17_PUBLICATION_H
#define WEEK_17_PUBLICATION_H
#include <string>
using namespace std;
class Publication {
    string title;
    float price;
public:

    virtual void getData();
    virtual void putData();
};


#endif //WEEK_17_PUBLICATION_H
