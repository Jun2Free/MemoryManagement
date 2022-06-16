#include <stdlib.h>
#include <iostream>

class MyClass {
private:
    int *_number;

public:
    MyClass()
    {
        std::cout << "Allocate memory\n";
        _number = (int*)malloc(sizeof(int));
    }
    ~MyClass()
    {
        std::cout << "Delete memory\n";
        free(_number);
    }
    void setNumber(int number) {
        *_number = number;
        std::cout << "Number: " << _number << "\n";
    }
};

int main() {
    // allocate memory using malloc
    /*
    MyClass *myClass = (MyClass*)malloc(sizeof(MyClass));
    // malloc 으로 메모리를 할당하는 경우 constructor 가 실행되지 않기 때문에 오류발생
    myClass->setNumber(42);
    free(myClass);
     */

    // allocate memory using new
    MyClass *myClass = new MyClass();
    // new 로 메모리 할당을 하는 경우, 자동적으로 constructor 를 call 한다.
    myClass->setNumber(42);
    delete myClass;
    // new 와 마찬가지로 delete 는 destructor 를 call 한다.

    return 0;
}