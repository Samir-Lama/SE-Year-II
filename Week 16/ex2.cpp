#include "Ex 2/Employee.h"
#include "Ex 2/ProductionWoker.h"

ProductionWorker::ProductionWorker(const string &name, const string &date, int empNum, int shift, double hourlyPay) :Employee(name, date, empNum){
    ProductionWorker::shift = shift;
    ProductionWorker::hourlyPay = hourlyPay;
}

int main(){
    ProductionWorker *pw = new ProductionWorker("Ram", "2 Feb 2020", 200, 2, 333);

    pw->DisplayInfo();
}