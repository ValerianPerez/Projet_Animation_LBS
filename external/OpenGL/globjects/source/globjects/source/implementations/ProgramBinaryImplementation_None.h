
#pragma once

#include "../base/Singleton.h"

#include "AbstractProgramBinaryImplementation.h"


namespace globjects
{


class ProgramBinaryImplementation_None : public AbstractProgramBinaryImplementation
    , public Singleton<ProgramBinaryImplementation_None>
{
public:
    virtual bool updateProgramLinkSource(const Program * program) const override;
    virtual std::unique_ptr<ProgramBinary> getProgramBinary(const Program * program) const override;
};


} // namespace globjects
