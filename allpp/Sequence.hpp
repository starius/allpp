#ifndef ALLPP_SEQUENCE_HPP_
#define ALLPP_SEQUENCE_HPP_

#include <vector>

#include "allpp/MonomerType.hpp"

namespace allpp {

template <MonomerType monomer_type>
class Sequence : std::vector<Monomer<monomer_class>* >
{
public:

private:
    std::string& name_;
    std::string& description_;
};

}

#endif

