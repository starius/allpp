#ifndef ALLPP_COLUMN_HPP_
#define ALLPP_COLUMN_HPP_

#include <vector>

#include "allpp/MonomerType.hpp"
#include "allpp/Monomer.hpp"

namespace allpp {

template <MonomerType mt>
class Column
{
public:
private:
    int index_in_alignment_;
    std::vector<Monomer<mt>* > monomers_;
};

}

#endif

