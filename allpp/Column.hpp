#ifndef ALLPP_COLUMN_HPP_
#define ALLPP_COLUMN_HPP_

#include <vector>

#include "allpp/MonomerType.hpp"
#include "allpp/Monomer.hpp"

namespace allpp {

template <MonomerType monomer_type>
class Column
{
public:
private:
    int index_in_alignment_;
    std::vector<Monomer<monomer_type>* > monomers_;
};

}

#endif

