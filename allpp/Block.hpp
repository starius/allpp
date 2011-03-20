#ifndef ALLPP_BLOCK_HPP_
#define ALLPP_BLOCK_HPP_

#include <string>
#include <vector>

#include "allpp/MonomerType.hpp"
#include "allpp/Sequence.hpp"
#include "allpp/Column.hpp"

namespace allpp {

template <MonomerType monomer_type>
class BaseBlock : std::vector<Column<monomer_type>& >
{
public:
private:
    std::vector<Sequence<monomer_type>&> sequences_;
};

template <MonomerType monomer_type>
class Block;

template <MonomerType monomer_type>
class Alignment : BaseBlock<monomer_type>
{
public:
    ~Alignment();

private:
    std::vector<Block&> blocks_;
};

template <MonomerType monomer_type>
class Block : BaseBlock<monomer_type>
{
public:
private:
    Alignment<monomer_type>& alignment_;
};

}

#endif

