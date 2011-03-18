#ifndef ALLPP_MONOMER_HPP_
#define ALLPP_MONOMER_HPP_

namespace allpp {

enum MonomerType
{
    PROTEIN,
    DNA,
    RNA
};

template <MonomerType monomer_type>
class MonomerClass
{
public:
    char code1() const;
    const std::string& code3() const;
    const std::string& name() const;

private:
    const char code1_;
    const std::string code3_;
    const std::string name_;
};

template <MonomerType monomer_type>
class Monomer
{
public:
    const MonomerClass<monomer_class>& monomer_class() const;

private:
    const MonomerClass<monomer_class>& monomer_class_;
};

}

#endif

