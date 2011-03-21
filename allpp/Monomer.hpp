#ifndef ALLPP_MONOMER_HPP_
#define ALLPP_MONOMER_HPP_

#include <cstdlib>
#include <string>

#include "allpp/MonomerType.hpp"

namespace allpp {

template <MonomerType mt>
class MonomerClass
{
public:
    MonomerClass(char code1, const std::string& code3,
        const std::string& name);

    char code1() const;
    const std::string& code3() const;
    const std::string& name() const;

    static MonomerClass<mt>& from_code1(char code1);
    static MonomerClass<mt>& from_code3(const std::string& code3);

private:
    const char code1_;
    const std::string code3_;
    const std::string name_;
};

template <MonomerType mt>
class Monomer
{
public:
    MonomerClass(char code1):
    MonomerClass(const std::string& code3):

    const MonomerClass<monomer_class>& monomer_class() const;
    char code1() const;
    const std::string& code3() const;
    const std::string& name() const;

    bool operator==(const Monomer<mt>& other) const;
    bool operator!=(const Monomer<mt>& other) const;

    void* operator new(size_t x);
    void operator delete(void* x);

private:
    const MonomerClass<monomer_class>& monomer_class_;
};

}

#endif

