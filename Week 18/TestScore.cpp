//
// Created by Samir Lama on 3/15/21.
//

#include "TestScore.h"
#include <string>
#include <iostream>
using namespace std;
TestScore::TestScore(int n[5]) {
    for (int i = 0; i < 5; i++) {
        this->n[i] = n[i];
    }
}

int TestScore::average() {

    for (int i = 0; i < 5; i++) {
        if(n[i] <= 100  && n[i] >= 0){
            sum = sum +n[i];
        }else{
            throw "Invalid Entry!!";
        }
    }
    return sum/5;
}

int main(){
    int marks[] = {440, 55, 66,77,22};
    TestScore *t = new TestScore(marks);
    try {
        double av = t->average();
        cout << "Average marsk: " << av;
    }
    catch(const char* msg){
        cerr
        << msg;
    }

}

