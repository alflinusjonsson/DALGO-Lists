#include "student1cstackl.h"
#include <assert.h>
#include <stdio.h>


const char* nameOfStudent1(){
    return "Linus Jönsson";
}
CStackL  CStackLConstruct(){

    CStackL theStack;
    theStack._pTop = nullptr;
    theStack._size = 0;
    return theStack;
}
CStackL  CStackLConstruct(const CStackL &other){

    CStackL theStack;
    theStack._size = other._size;
    theStack._pTop = nullptr;

    Link *pPreviousLink = nullptr;

    for (const Link *p= other._pTop;
                        p!=nullptr ; p=(*p)._pNext) {
        Link *pCopy = new Link;

        (*pCopy)._data = (*p)._data;
        (*pCopy)._pNext = nullptr;
        if (pPreviousLink==nullptr)
            theStack._pTop = pCopy;
        else (*pPreviousLink)._pNext = pCopy;
        pPreviousLink = pCopy;
    }
    return theStack;
}
void   CStackLDestruct(CStackL *pDettaObjekt){
    while (pDettaObjekt->_size>0)
        CStackLPop(pDettaObjekt);
    (*pDettaObjekt)._pTop = nullptr;
    (*pDettaObjekt)._size = 0;
}
void   CStackLPush(CStackL *pDettaObjekt, float data){

  Link *newLink = new Link;
        newLink->_pNext = pDettaObjekt->_pTop;
        pDettaObjekt->_pTop = newLink;
        newLink->_data = data;
        pDettaObjekt->_size +=1;
}
float  CStackLTop(CStackL *pDettaObjekt){

    assert(pDettaObjekt->_size > 0);
    return pDettaObjekt -> _pTop -> _data;
}
void CStackLPop(CStackL *pDettaObjekt){

    assert(pDettaObjekt->_size > 0);

    Link *pLastTop = pDettaObjekt ->_pTop;
    pDettaObjekt->_pTop = pLastTop->_pNext;
    delete pLastTop;
    pDettaObjekt->_size -=1;

}
int  CStackLSize(CStackL *pDettaObjekt){

    return size_t(pDettaObjekt);
}
void studentTest1(){

    printf("\n\nstudentTest1...\n");
    // Skriv din egen testkod här
}
