//#include <QCoreApplication>
#include <Python.h>
#include <QtGlobal>
#include <iostream>

int main(int argc, char *argv[]) {
    // when line is uncommented, Py_BytesMain fails to boot the interactive shell and returns 0
    // furthermore, qIsNull doesn't have the problem
    //std::cerr << qIsFinite(78.0) << std::endl;
    return Py_BytesMain(argc, argv);
}
