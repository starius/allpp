#ifndef ALLPP_SEQUENCE_HPP_
#define ALLPP_SEQUENCE_HPP_

#include <string>
#include <vector>

#include "allpp/MonomerType.hpp"

namespace allpp {

template <MonomerType monomer_type>
class Sequence : std::vector<Monomer<monomer_class> >
{
public:
    Sequence(const std::string& name="",
        const std::string& description="",
        const std::string& source="");
    Sequence(const std::string& fasta_string,
        const std::string& name="",
        const std::string& description="",
        const std::string& source="");

    const std::string& name() const;
    const std::string& description() const;
    const std::string& source() const;

private:
    std::string name_;
    std::string description_;
    std::string source_;
};

}

#endif
