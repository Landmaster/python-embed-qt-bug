//#include <QCoreApplication>
#include <pybind11/embed.h>
#include <QtGlobal>
#include <iostream>

int main(int argc, char *argv[]) {
    //std::cerr << qIsFinite(78.0) << std::endl;
    return Py_BytesMain(argc, argv);
}
