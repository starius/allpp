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

    void detach_sequences();

    int column_index(const Column<mt>* column_) const;

    void insert_gap_column(Column<mt>* column); // before
    void drop_gap_column(Column<mt>* column);

    void move_monomer(const Sequence* sequence,
        Column<mt>* source, Column<mt>* dest, bool check=true);
    void flush_monomers(const Sequence* sequence,
        Column<mt>* source, Column<mt>* dest, bool check=true);

private:
    std::vector<Sequence<mt> > sequences_;
    std::vector<Column<mt> > columns_;
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

