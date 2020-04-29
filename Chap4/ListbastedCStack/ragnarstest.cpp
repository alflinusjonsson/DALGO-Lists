#include "ragnarstest.h"

#include "student1cstackl.h"
#include <string>
#include <assert.h>
#include <iostream>
#include <QThread>

using namespace  std;


static bool test(){

    CStackL stack1 = CStackLConstruct();
    CStackLPush( &stack1,  1);
    CStackLPush( &stack1,  2);
    CStackLPush( &stack1,  3);
    CStackLPush( &stack1,  4.5);

    assert( CStackLTop(&stack1) == 4.5 );
    assert( CStackLSize(&stack1) == 4 );

    CStackL stack2 = CStackLConstruct(stack1);

    CStackLPop( &stack2);
    assert( CStackLSize(&stack2) == 3 );


    assert( CStackLTop( &stack1 ) == 4.5 );
    assert( CStackLTop( &stack2 ) == 3 );

    while( CStackLSize(&stack2) > 0){
        CStackLPop( &stack2 );
    }


    CStackLDestruct( &stack1 );
    CStackLDestruct( &stack2 );

    return true;
}



bool ragnarsTest1(){

    cout <<  endl << endl << "nu kors ragnarsTest1" << endl;
    QThread::msleep(1000);

    assert( string("Homer Simpson") != nameOfStudent1() );
    bool ok = test();

    if (ok)
        cout << "Grattis ragnarsTest1 lyckades!" << endl << endl;
    else cout << "SORRY! ragnarsTest1 misslyckades!" << endl << endl;


    return ok;
}
