#ifndef STACKOFFLOATS_H
#define STACKOFFLOATS_H


class StackL
{
private:
    struct Link {
        float _data;
        Link *_pNext;
    };

    Link*_pTop;
    int  _size;

public:
    StackL();
    StackL(const StackL& theOther);
    ~StackL();

    void push(float value);
    void pop();
    float top();
    int size();
};



void studentTest2();
const char* nameOfStudent2();

#endif // STACKOFFLOATS_H
