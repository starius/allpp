#ifndef ALLPP_ALIGNMENT_HPP_
#define ALLPP_ALIGNMENT_HPP_

#include <string>
#include <vector>

#include "allpp/MonomerType.hpp"
#include "allpp/Sequence.hpp"
#include "allpp/Column.hpp"

namespace allpp {

template <MonomerType mt>
class Block;

template <MonomerType mt>
class Alignment
{
public:
    ~Alignment();

private:
    std::vector<Sequence<mt> > sequences_;
    std::vector<Column<mt>* > columns_;
    std::vector<Block<mt> > blocks_;
};

template <MonomerType mt>
class Block
{
public:
private:
    Alignment<mt>& alignment_;
    std::vector<Sequence<mt>* > sequences_;
    std::vector<Markup<mt, Block> > markups_;
    int start_;
    int stop_;
};

}

#endif

