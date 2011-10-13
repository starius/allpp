#ifndef ALLPP_ALIGNMENT_HPP_
#define ALLPP_ALIGNMENT_HPP_

#include <string>
#include <vector>

#include "allpp/MonomerType.hpp"
#include "allpp/Sequence.hpp"
#include "allpp/Column.hpp"

namespace allpp {

template <MonomerType mt>
class BaseAlignment {
public:
    virtual void move_monomer(const Sequence* sequence,
                              Column<mt>* source, Column<mt>* dest, bool flush = false,
                              bool check = true) = 0;

    virtual int index(const Column<mt>* column_) const = 0;

private:
    std::vector<Sequence<mt>* > sequences_;
    std::vector<Column<mt>* > columns_;
};

template <MonomerType mt>
class Block;

template <MonomerType mt>
class Alignment : public BaseAlignment {
public:
    ~Alignment();

    void detach_sequences();

    int index_in_alignment(const Column<mt>* column_) const;

    void insert_gap_column(Column<mt>* column); // before
    void drop_gap_column(Column<mt>* column);

private:
    std::vector<Block<mt> > blocks_;
};

template <MonomerType mt>
class Block : public BaseAlignment {
public:
private:
    Alignment<mt>& alignment_;
    std::vector<Markup<mt, Block> > markups_;
};

}

#endif

