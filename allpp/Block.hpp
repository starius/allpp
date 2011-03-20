#ifndef ALLPP_BLOCK_HPP_
#define ALLPP_BLOCK_HPP_

#include <string>
#include <vector>

#include "allpp/MonomerType.hpp"
#include "allpp/Sequence.hpp"
#include "allpp/Column.hpp"

namespace allpp {

template <MonomerType monomer_type>
class Block;

template <MonomerType monomer_type>
class Alignment : std::vector<Column<monomer_type> >
{
public:
    ~Alignment();

private:
    std::vector<Sequence<monomer_type>& > sequences_;
    std::vector<Block<monomer_type>& > blocks_;
};

template <MonomerType monomer_type>
class Block : std::vector<Column<monomer_type>& >
{
public:
private:
    Alignment<monomer_type>& alignment_;
    std::vector<Sequence<monomer_type>& > sequences_;
};

}

#endif

