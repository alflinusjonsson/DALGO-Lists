#include "ragnarstest2.h"

#include "student2stackl.h"
#include <string>
#include <assert.h>
#include <iostream>
#include <QThread>

using namespace  std;


static bool test(){

    StackL stack1;
    stack1.push(1);
    stack1.push(2);
    stack1.push(3);
    stack1.push(4.5);


    assert( stack1.top() == 4.5 );
    assert( stack1.size() == 4 );

    StackL stack2 = stack1;

    stack2.pop();
    assert( stack2.size() == 3 );

    assert( stack1.top() == 4.5 );
    assert( stack2.top() == 3 );

    while( stack2.size() > 0){
        stack2.pop();
    }


    return true;
}



bool ragnarsTest2(){

    cout <<  endl << endl << "nu kors ragnarsTest2" << endl;
    QThread::msleep(1000);

    assert( string("Homer Simpson") != nameOfStudent2() );
    bool ok = test();

    if (ok)
        cout << "Grattis ragnarsTest2 lyckades!" << endl << endl;
    else cout << "SORRY! ragnarsTest2 misslyckades!" << endl << endl;


    return ok;
}
