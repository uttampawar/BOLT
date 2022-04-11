#include "bolt/Passes/RemoveEndbr.h"
#include "bolt/Core/MCPlus.h"
#include "bolt/Passes/BinaryFunctionCallGraph.h"
#include "bolt/Passes/DataflowAnalysis.h"
#include "bolt/Passes/DataflowInfoManager.h"
#include "bolt/Utils/Utils.h"

using namespace llvm;

namespace llvm {
    namespace bolt {
        void RemoveEndbr::runOnFunction(BinaryFunction &BF) {

        }

        void RemoveEndbr::runOnFunctions(BinaryContext &BC) { 


        }
    }
}