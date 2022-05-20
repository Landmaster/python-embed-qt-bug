# python-embed-qt-bug

This is a minimal example of a very weird bug with Python 3 and Qt such that if you reference any non-trivial Qt classes
or methods on Windows, trying to call Py_Main will result in a no-op (the program will immediately exit 0). To trigger
the bug in this minimal example, uncomment the line with qIsFinite in main.cpp. I have also gotten the bug to trigger
with QString and QVector as well.

Furthermore, the bug doesn't occur on MacOS.
