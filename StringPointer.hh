#ifndef __STRINGPOINTER_HH__
#define __STRINGPOINTER_HH__

#include <string>

class StringPointer {
    std::string *pointer_;
    static std::string empty_;
    
public:
    std::string * operator->() {
        return (std::string *)*this;
    }
    
    operator std::string *() {
        return pointer_ ? pointer_ : &empty_;
    }
    
    StringPointer(std::string *Pointer):
        pointer_(Pointer) {
    }
    
    ~StringPointer() {}
};

std::string StringPointer::empty_;

#endif
