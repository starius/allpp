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
class BaseAlignment
{
public:
private:
    std::vector<Column<mt>* > columns_;
    std::vector<Sequence<mt>* > sequences_;
};

template <MonomerType mt>
class Alignment : BaseAlignment
{
public:
    ~Alignment();

private:
    std::vector<Block<mt>* > blocks_;
    std::vector<Markup<mt, Column>* > markups_;
};

template <MonomerType mt>
class Block : BaseAlignment
{
public:
private:
    Alignment<mt>& alignment_;
};

}

#endif

