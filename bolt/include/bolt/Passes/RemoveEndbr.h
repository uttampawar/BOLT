
#ifndef BOLT_PASSES_REMOVEENDBR_H
#define BOLT_PASSES_REGREASSIGN_H

#include "bolt/Passes/BinaryPasses.h"
#include "llvm/Support/CommandLine.h"


namespace llvm {
    namespace bolt {

        class RemoveEndbr : public BinaryFunctionPass {
                void runOnFunction(BinaryFunction &Function);
            public:
                explicit RemoveEndbr(const cl::opt<bool> &PrintPass) : BinaryFunctionPass(PrintPass) {

                }
            
                const char *getName() const override { 
                    return "remove-endbr"; 
                }

                void runOnFunctions(BinaryContext &BC) override;
        };
    }
}

#endif