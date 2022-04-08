
#ifndef __ESSENTIAL_CPP_CHAPTER_04_H__
#define __ESSENTIAL_CPP_CHAPTER_04_H__

#include <string>
#include <iostream>

class ValClass
{
public:
    //ValClass() {}
    //std::string& Val() const { return val_; } //语法没有问题,但是不是一个良好的设计
    const std::string& Val() const { std::cout << "const ValClass::Val()\n"; return val_; }
    std::string& Val() { std::cout << "none const ValClass::Val()\n";return val_; }
private:
    std::string val_;
};

class LessThan
{
public:
    LessThan(int val) : val_(val) {}
    bool operator()(int nval) const;
private:
    int val_;
};

inline bool LessThan::operator()(int val) const { return val < val_; }

void Chapter_04();

void Practice_4_3();
void Practice_4_5();
void Practice_4_7();
void Practice_4_9();

#endif // __ESSENTIAL_CPP_CHAPTER_04_H__
