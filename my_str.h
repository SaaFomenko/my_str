#ifndef MY_STR_H
#define MY_STR_H

#include <string>


class MyStr
{
    private:
		std::string* str;

    public:
        MyStr(std::string* str);
        virtual ~MyStr();

        std::string override();

};

#endif