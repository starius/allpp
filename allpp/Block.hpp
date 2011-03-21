#ifndef ALLPP_BLOCK_HPP_
#define ALLPP_BLOCK_HPP_

#include <string>
#include <vector>

#include "allpp/MonomerType.hpp"
#include "allpp/Sequence.hpp"
#include "allpp/Column.hpp"

namespace allpp {

template <MonomerType mt>
class Block;

template <MonomerType mt>
class Alignment : std::vector<Column<mt> >
{
public:
    ~Alignment();

private:
    std::vector<Sequence<mt>& > sequences_;
    std::vector<Block<mt>& > blocks_;
};

template <MonomerType mt>
class Block : std::vector<Column<mt>& >
{
public:
private:
    Alignment<mt>& alignment_;
    std::vector<Sequence<mt>& > sequences_;
};

}

#endif

