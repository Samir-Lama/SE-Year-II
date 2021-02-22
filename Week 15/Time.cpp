#include <iostream>
#include "Time.h"
using namespace std;
Time::Time(int m, int h, int s) {
    min = m;
    hr = h;
    sec = s;
}

Time Time::add(Time T) const {
    Time temp = Time(0, 0, 0);
    temp.hr = hr + T.min;
    temp.min = min + T.min;
    temp.sec = sec + T.sec;

    if(temp.hr > 60){
        temp.hr -=60;
    }

    if(temp.min > 60){
        temp.min -= 60;
    }

    if(temp.sec > 60){
        temp.sec -= 60;
    }
    return temp;
}

void Time::Display() const {
    cout << "Time is " << hr << "/" << min << "/" << sec;
}



int main(){
    Time t1 = {33,44,55};
    Time t2 = {44, 55, 33};
    Time t3 = t2.add(t1);

    t3.Display();
}