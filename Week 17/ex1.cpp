#include "Ex 1/Publication.cpp"
#include "Ex 1/Book.cpp"
#include "Ex 1/Tape.cpp"
int main(){
    Publication *p;
    Book *b = new Book();
    b->getData();

    Tape *t = new Tape();
    t->getData();


    p = &b;
    p->putData();

//    p = &b;
//    p.putData()


}
