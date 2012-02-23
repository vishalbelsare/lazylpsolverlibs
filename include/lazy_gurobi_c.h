
#ifndef LAZY_GUROBI_C_H
#define LAZY_GUROBI_C_H

#include <ltdl.h>
#include "lazy_loading_status.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef _WIN32
#ifdef BUILDING_LAZYLPSOLVERLIBS
#define LLSL_DECL __declspec(dllexport)
#else
#define LLSL_DECL __declspec(dllimport)
#endif
#else
#define LLSL_DECL
#endif

/* handle to the library */
LLSL_DECL lt_dlhandle __gurobi_c_handle;
/* loads the symbols */
LLSL_DECL int load_gurobi_c_symbols();
/* unloads the symbols (if called as many times as loadSymbols) */
LLSL_DECL int unload_gurobi_c_symbols();
/* prints what symbols ar missing */
LLSL_DECL void print_gurobi_c_missing_symbols();

#define GRBaddconstr LLSL_DECL (*__symbolic_GRBaddconstr)
#define GRBaddconstrs LLSL_DECL (*__symbolic_GRBaddconstrs)
#define GRBaddrangeconstr LLSL_DECL (*__symbolic_GRBaddrangeconstr)
#define GRBaddrangeconstrs LLSL_DECL (*__symbolic_GRBaddrangeconstrs)
#define GRBaddsos LLSL_DECL (*__symbolic_GRBaddsos)
#define GRBaddvar LLSL_DECL (*__symbolic_GRBaddvar)
#define GRBaddvars LLSL_DECL (*__symbolic_GRBaddvars)
#define GRBcbcut LLSL_DECL (*__symbolic_GRBcbcut)
#define GRBcbget LLSL_DECL (*__symbolic_GRBcbget)
#define GRBcbsolution LLSL_DECL (*__symbolic_GRBcbsolution)
#define GRBcheckmodel LLSL_DECL (*__symbolic_GRBcheckmodel)
#define GRBchgcoeffs LLSL_DECL (*__symbolic_GRBchgcoeffs)
#define GRBcomputeIIS LLSL_DECL (*__symbolic_GRBcomputeIIS)
#define GRBconverttofixed LLSL_DECL (*__symbolic_GRBconverttofixed)
#define GRBcopymodel LLSL_DECL (*__symbolic_GRBcopymodel)
#define GRBdelconstrs LLSL_DECL (*__symbolic_GRBdelconstrs)
#define GRBdelsos LLSL_DECL (*__symbolic_GRBdelsos)
#define GRBdelvars LLSL_DECL (*__symbolic_GRBdelvars)
#define GRBfeasibility LLSL_DECL (*__symbolic_GRBfeasibility)
#define GRBfixedmodel LLSL_DECL (*__symbolic_GRBfixedmodel)
#define GRBfreeenv LLSL_DECL (*__symbolic_GRBfreeenv)
#define GRBfreemodel LLSL_DECL (*__symbolic_GRBfreemodel)
#define GRBgetattrinfo LLSL_DECL (*__symbolic_GRBgetattrinfo)
#define GRBgetcallbackfunc LLSL_DECL (*__symbolic_GRBgetcallbackfunc)
#define GRBgetcbwhatinfo LLSL_DECL (*__symbolic_GRBgetcbwhatinfo)
#define GRBgetcharattrarray LLSL_DECL (*__symbolic_GRBgetcharattrarray)
#define GRBgetcharattrelement LLSL_DECL (*__symbolic_GRBgetcharattrelement)
#define GRBgetcharattrlist LLSL_DECL (*__symbolic_GRBgetcharattrlist)
#define GRBgetcoeff LLSL_DECL (*__symbolic_GRBgetcoeff)
#define GRBgetconstrs LLSL_DECL (*__symbolic_GRBgetconstrs)
#define GRBgetdblattr LLSL_DECL (*__symbolic_GRBgetdblattr)
#define GRBgetdblattrarray LLSL_DECL (*__symbolic_GRBgetdblattrarray)
#define GRBgetdblattrelement LLSL_DECL (*__symbolic_GRBgetdblattrelement)
#define GRBgetdblattrlist LLSL_DECL (*__symbolic_GRBgetdblattrlist)
#define GRBgetdblparam LLSL_DECL (*__symbolic_GRBgetdblparam)
#define GRBgetdblparaminfo LLSL_DECL (*__symbolic_GRBgetdblparaminfo)
#define GRBgetenv LLSL_DECL (*__symbolic_GRBgetenv)
#define GRBgeterrormsg LLSL_DECL (*__symbolic_GRBgeterrormsg)
#define GRBgetintattr LLSL_DECL (*__symbolic_GRBgetintattr)
#define GRBgetintattrarray LLSL_DECL (*__symbolic_GRBgetintattrarray)
#define GRBgetintattrelement LLSL_DECL (*__symbolic_GRBgetintattrelement)
#define GRBgetintattrlist LLSL_DECL (*__symbolic_GRBgetintattrlist)
#define GRBgetintparam LLSL_DECL (*__symbolic_GRBgetintparam)
#define GRBgetintparaminfo LLSL_DECL (*__symbolic_GRBgetintparaminfo)
#define GRBgetlogfile LLSL_DECL (*__symbolic_GRBgetlogfile)
#define GRBgetmerrormsg LLSL_DECL (*__symbolic_GRBgetmerrormsg)
#define GRBgetnumparams LLSL_DECL (*__symbolic_GRBgetnumparams)
#define GRBgetparamname LLSL_DECL (*__symbolic_GRBgetparamname)
#define GRBgetparamtype LLSL_DECL (*__symbolic_GRBgetparamtype)
#define GRBgetsos LLSL_DECL (*__symbolic_GRBgetsos)
#define GRBgetstrattr LLSL_DECL (*__symbolic_GRBgetstrattr)
#define GRBgetstrattrarray LLSL_DECL (*__symbolic_GRBgetstrattrarray)
#define GRBgetstrattrelement LLSL_DECL (*__symbolic_GRBgetstrattrelement)
#define GRBgetstrattrlist LLSL_DECL (*__symbolic_GRBgetstrattrlist)
#define GRBgetstrparam LLSL_DECL (*__symbolic_GRBgetstrparam)
#define GRBgetstrparaminfo LLSL_DECL (*__symbolic_GRBgetstrparaminfo)
#define GRBgetvars LLSL_DECL (*__symbolic_GRBgetvars)
#define GRBiismodel LLSL_DECL (*__symbolic_GRBiismodel)
#define GRBloadenv LLSL_DECL (*__symbolic_GRBloadenv)
#define GRBloadmodel LLSL_DECL (*__symbolic_GRBloadmodel)
#define GRBmsg LLSL_DECL (*__symbolic_GRBmsg)
#define GRBnewmodel LLSL_DECL (*__symbolic_GRBnewmodel)
#define GRBoptimize LLSL_DECL (*__symbolic_GRBoptimize)
#define GRBplatform LLSL_DECL (*__symbolic_GRBplatform)
#define GRBpresolvemodel LLSL_DECL (*__symbolic_GRBpresolvemodel)
#define GRBread LLSL_DECL (*__symbolic_GRBread)
#define GRBreadmodel LLSL_DECL (*__symbolic_GRBreadmodel)
#define GRBreadparams LLSL_DECL (*__symbolic_GRBreadparams)
#define GRBrelaxmodel LLSL_DECL (*__symbolic_GRBrelaxmodel)
#define GRBresetmodel LLSL_DECL (*__symbolic_GRBresetmodel)
#define GRBresetparams LLSL_DECL (*__symbolic_GRBresetparams)
#define GRBsetcallbackfunc LLSL_DECL (*__symbolic_GRBsetcallbackfunc)
#define GRBsetcharattrarray LLSL_DECL (*__symbolic_GRBsetcharattrarray)
#define GRBsetcharattrelement LLSL_DECL (*__symbolic_GRBsetcharattrelement)
#define GRBsetcharattrlist LLSL_DECL (*__symbolic_GRBsetcharattrlist)
#define GRBsetdblattr LLSL_DECL (*__symbolic_GRBsetdblattr)
#define GRBsetdblattrarray LLSL_DECL (*__symbolic_GRBsetdblattrarray)
#define GRBsetdblattrelement LLSL_DECL (*__symbolic_GRBsetdblattrelement)
#define GRBsetdblattrlist LLSL_DECL (*__symbolic_GRBsetdblattrlist)
#define GRBsetdblparam LLSL_DECL (*__symbolic_GRBsetdblparam)
#define GRBsetintattr LLSL_DECL (*__symbolic_GRBsetintattr)
#define GRBsetintattrarray LLSL_DECL (*__symbolic_GRBsetintattrarray)
#define GRBsetintattrelement LLSL_DECL (*__symbolic_GRBsetintattrelement)
#define GRBsetintattrlist LLSL_DECL (*__symbolic_GRBsetintattrlist)
#define GRBsetintparam LLSL_DECL (*__symbolic_GRBsetintparam)
#define GRBsetlogfile LLSL_DECL (*__symbolic_GRBsetlogfile)
#define GRBsetsignal LLSL_DECL (*__symbolic_GRBsetsignal)
#define GRBsetstrattr LLSL_DECL (*__symbolic_GRBsetstrattr)
#define GRBsetstrattrarray LLSL_DECL (*__symbolic_GRBsetstrattrarray)
#define GRBsetstrattrelement LLSL_DECL (*__symbolic_GRBsetstrattrelement)
#define GRBsetstrattrlist LLSL_DECL (*__symbolic_GRBsetstrattrlist)
#define GRBsetstrparam LLSL_DECL (*__symbolic_GRBsetstrparam)
#define GRBstrongbranch LLSL_DECL (*__symbolic_GRBstrongbranch)
#define GRBterminate LLSL_DECL (*__symbolic_GRBterminate)
#define GRBupdatemodel LLSL_DECL (*__symbolic_GRBupdatemodel)
#define GRBversion LLSL_DECL (*__symbolic_GRBversion)
#define GRBwrite LLSL_DECL (*__symbolic_GRBwrite)
#define GRBwriteparams LLSL_DECL (*__symbolic_GRBwriteparams)

#ifdef __cplusplus
}
#endif

#include <gurobi_c.h>

/* Now we need to redefine LLSL_DECL as nothing (this issues a warning) */
#ifdef _WIN32
#undef LLSL_DECL
#define LLSL_DECL
#endif

#endif /* LAZY_GUROBI_C_H */

