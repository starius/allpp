#ifndef ALLPP_SEQUENCE_HPP_
#define ALLPP_SEQUENCE_HPP_

#include <string>
#include <vector>

#include "allpp/MonomerType.hpp"

namespace allpp {

template <MonomerType mt>
class Sequence
{
public:
    Sequence(const std::string& name="",
        const std::string& description="",
        const std::string& source="");
    Sequence(const std::string& fasta_string,
        const std::string& name="",
        const std::string& description="",
        const std::string& source="");
    ~Sequence();

    const std::string& name() const;
    const std::string& description() const;
    const std::string& source() const;

private:
    std::vector<Monomer<mt> > monomers;
    std::string name_;
    std::string description_;
    std::string source_;
    int index_in_alignment_;
    std::vector<BaseMarkup<mt, Sequence> > markups_;
};

}

#endif

