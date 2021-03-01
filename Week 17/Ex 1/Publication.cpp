//
// Created by Samir Lama on 3/1/21.
//

#include "Publication.h"
#include <iostream>
using namespace std;

void Publication::getData() {
    cout << "Enter Title: ";
    cin >> title;
    cout << "Enter price: ";
    cin >> price;
}

void Publication::putData(){
    cout << "Title: " << title << "\n"
    << "Price: " << price << "\n";

}