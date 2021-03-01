//
// Created by Samir Lama on 3/1/21.
//

#include "Book.h"
#include <string>
using namespace std;

void Book::getData() {
    Publication::getData();
    cout << "Enter pages of the book:  ";
    cin >> count;
}
void Book::putData() {
    Publication::putData();
    cout << "Books Page: " << count;
}