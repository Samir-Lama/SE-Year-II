#include <iostream>
using namespace std;

template <class T>
class Num{
private:
    T n1, n2;

public:
    T max(){
        if(n1 > n2){
            return n1;
        }else{
            return n2;
        }
    }

    T min(){
        if(n1 < n2){
            return n1;
        }else{
            return n2;
        }
    }

    Num(T n1, T n2){
        this->n1 = n1;
        this->n2 = n2;
    }

    T absolute(){
        if(n1 < 0){
            n1 = n1 * -1;
        }
        return n1;
    }
};

int main(){
    Num<double> n = *new Num<double>(-44.55, 22.44);

    cout << "Max is " << n.max();
    cout << "\nMin is " << n.min();
    cout << "\nAbsolute value of n1 is " << n.absolute();

}