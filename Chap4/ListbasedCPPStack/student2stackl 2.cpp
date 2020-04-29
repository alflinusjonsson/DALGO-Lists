#include "student2stackl.h"
#include <assert.h>
#include <stdio.h>


const char* nameOfStudent2(){
    return "Linus Jönsson";
}

StackL::StackL(){

    _size = 0;
    _pTop = nullptr;
}

StackL::StackL(const StackL& theOther){

    _size = theOther._size;
    _pTop = nullptr;

    Link *pPrevlink = nullptr;

    for (const Link *p = theOther._pTop; p!=nullptr; p=p->_pNext){
        Link *pCopy = new Link;

        pCopy->_data = p->_data;
        pCopy->_pNext = nullptr;
        if(pPrevlink == nullptr)
            _pTop = pCopy;
        else pPrevlink->_pNext = pCopy;
        pPrevlink = pCopy;
     }
}

StackL::~StackL(){

    while(_size>0)
        StackL::pop();
    _pTop = nullptr;
    _size = 0;
}

void StackL::push(float value){

    Link *newLink = new Link;
    newLink->_pNext = _pTop;
    newLink->_data = value;
    _pTop = newLink;
    newLink ->_data = value;
    _size +=1;
}

void StackL::pop(){

    assert(_size > 0);

    Link *pLastTop = _pTop;
    _pTop = pLastTop-> _pNext;
    delete pLastTop;
    _size -= 1;
}

float StackL::top(){

    assert(_size > 0);
    return _pTop -> _data;
}

int StackL::size(){

    return _size;
}

void studentTest2(){

    printf("\n\nstudentTest2...\n");
    // Skriv din egen testkod här
}

