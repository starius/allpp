#ifndef ALLPP_MARKUP_HPP_
#define ALLPP_MARKUP_HPP_

#include <vector>

#include "allpp/MonomerType.hpp"

namespace allpp {

template <MonomerType mt,
    template<MonomerType> class Container>
class BaseMarkup
{
public:
private:
    Container* holder_;
};

template <MonomerType mt,
    template<MonomerType> class Container,
    typename Value>
class Markup : BaseMarkup
{
public:
private:
    std::vector<Value> values_;
};

struct TrueFalseKeeper
{
    typedef enum { True = 'X', False = '-' } EnumType;
    static EnumType from_char(char c)
    {
        return (c == True) ? True : False;
    }
    static char to_char(EnumType v)
    {
        return static_cast<char>(v);
    }
};

template <MonomerType mt,
    template<MonomerType> class Container,
    typename EnumKeeper=TrueFalseKeeper>
class FastaMarkup : public Markup<mt, Container, int>
{
public:
    typedef EnumKeeper::EnumType EnumType;

private:
};

}

#endif

