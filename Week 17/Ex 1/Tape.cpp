//
// Created by Samir Lama on 3/1/21.
//

#include "Tape.h"
void Tape::getData() {
    Publication::getData();
    cout << "Enter play time of the tape: ";
    cin >> playTime;
}

void Tape::putData() {
    Publication::putData();
    cout << "Play Time: " << playTime << "minute\n";
}