#ifndef ALLPP_COLUMN_HPP_
#define ALLPP_COLUMN_HPP_

#include <map>

#include "allpp/MonomerType.hpp"
#include "allpp/Sequence.hpp"
#include "allpp/Monomer.hpp"

namespace allpp {

template <MonomerType monomer_type>
class Column :
    std::map<Sequence<monomer_type>*, Monomer<monomer_type>*>
{
public:
};

}

#endif

