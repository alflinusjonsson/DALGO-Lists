#ifndef CStackFlt_H
#define CStackFlt_H

const char* nameOfStudent1();

struct Link {
    float _data;
    Link *_pNext;
};

struct CStackL{
    Link *_pTop;
    int   _size;
};


CStackL  CStackLConstruct();
CStackL  CStackLConstruct(const CStackL &other);

void   CStackLDestruct(CStackL *pDettaObjekt);

void   CStackLPush(CStackL *pDettaObjekt, float data);
float  CStackLTop(CStackL *pDettaObjekt);
void   CStackLPop(CStackL *pDettaObjekt);
int    CStackLSize(CStackL *pDettaObjekt);


void studentTest1();

#endif // CStackFlt_H
