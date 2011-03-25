#ifndef ALLPP_MARKUP_HPP_
#define ALLPP_MARKUP_HPP_

#include <vector>

#include "allpp/MonomerType.hpp"

namespace allpp {

template <MonomerType mt,
    template<MonomerType> class Element,
    typename Value>
class BaseMarkup
{
public:
private:
    std::vector<Value> values_;
};

}

#endif

