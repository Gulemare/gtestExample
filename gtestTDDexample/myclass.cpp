// Declaration of your class
#include "myclass.h"
namespace gtestexample {

    void MyClass::setNum(int n) {
        num_ = n;
        return;
    }
    int MyClass::getNum() const {
        return num_;
    }
} // namespace gtestexample
