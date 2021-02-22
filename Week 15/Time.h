#ifndef TIME_H
#define TIME_H
class Time{
private:
    int hr = 0,min = 0, sec = 0;
public:
    Time(int hr, int m, int s);

    void Display() const;

    Time add(Time T) const;
};

#endif