#ifndef LAZY_GUROBI_C_H
#define LAZY_GUROBI_C_H

#include <ltdl.h>

/* handle to the library */
lt_dlhandle __gurobi_c_handle;
/* loads the symbols */
int load_gurobi_c_symbols();
/* unloads the symbols (if called as many times as loadSymbols) */
int unload_gurobi_c_symbols();

#define SYMBOL_LOAD_SUCCESS     0
#define SYMBOL_LOAD_FAIL        1
#define SYMBOL_MISSING          2
#define SYMBOL_UNLOAD_SUCCESS   0
#define SYMBOL_UNLOAD_FAIL      1


#define GRBaddconstr (*__symbolic_GRBaddconstr)
#define GRBaddconstrs (*__symbolic_GRBaddconstrs)
#define GRBaddrangeconstr (*__symbolic_GRBaddrangeconstr)
#define GRBaddrangeconstrs (*__symbolic_GRBaddrangeconstrs)
#define GRBaddsos (*__symbolic_GRBaddsos)
#define GRBaddvar (*__symbolic_GRBaddvar)
#define GRBaddvars (*__symbolic_GRBaddvars)
#define GRBcbcut (*__symbolic_GRBcbcut)
#define GRBcbget (*__symbolic_GRBcbget)
#define GRBcbsolution (*__symbolic_GRBcbsolution)
#define GRBcheckmodel (*__symbolic_GRBcheckmodel)
#define GRBchgcoeffs (*__symbolic_GRBchgcoeffs)
#define GRBcomputeIIS (*__symbolic_GRBcomputeIIS)
#define GRBconverttofixed (*__symbolic_GRBconverttofixed)
#define GRBcopymodel (*__symbolic_GRBcopymodel)
#define GRBdelconstrs (*__symbolic_GRBdelconstrs)
#define GRBdelsos (*__symbolic_GRBdelsos)
#define GRBdelvars (*__symbolic_GRBdelvars)
#define GRBfeasibility (*__symbolic_GRBfeasibility)
#define GRBfixedmodel (*__symbolic_GRBfixedmodel)
#define GRBfreeenv (*__symbolic_GRBfreeenv)
#define GRBfreemodel (*__symbolic_GRBfreemodel)
#define GRBgetattrinfo (*__symbolic_GRBgetattrinfo)
#define GRBgetcallbackfunc (*__symbolic_GRBgetcallbackfunc)
#define GRBgetcbwhatinfo (*__symbolic_GRBgetcbwhatinfo)
#define GRBgetcharattrarray (*__symbolic_GRBgetcharattrarray)
#define GRBgetcharattrelement (*__symbolic_GRBgetcharattrelement)
#define GRBgetcharattrlist (*__symbolic_GRBgetcharattrlist)
#define GRBgetcoeff (*__symbolic_GRBgetcoeff)
#define GRBgetconstrs (*__symbolic_GRBgetconstrs)
#define GRBgetdblattr (*__symbolic_GRBgetdblattr)
#define GRBgetdblattrarray (*__symbolic_GRBgetdblattrarray)
#define GRBgetdblattrelement (*__symbolic_GRBgetdblattrelement)
#define GRBgetdblattrlist (*__symbolic_GRBgetdblattrlist)
#define GRBgetdblparam (*__symbolic_GRBgetdblparam)
#define GRBgetdblparaminfo (*__symbolic_GRBgetdblparaminfo)
#define GRBgetenv (*__symbolic_GRBgetenv)
#define GRBgeterrormsg (*__symbolic_GRBgeterrormsg)
#define GRBgetintattr (*__symbolic_GRBgetintattr)
#define GRBgetintattrarray (*__symbolic_GRBgetintattrarray)
#define GRBgetintattrelement (*__symbolic_GRBgetintattrelement)
#define GRBgetintattrlist (*__symbolic_GRBgetintattrlist)
#define GRBgetintparam (*__symbolic_GRBgetintparam)
#define GRBgetintparaminfo (*__symbolic_GRBgetintparaminfo)
#define GRBgetlogfile (*__symbolic_GRBgetlogfile)
#define GRBgetmerrormsg (*__symbolic_GRBgetmerrormsg)
#define GRBgetnumparams (*__symbolic_GRBgetnumparams)
#define GRBgetparamname (*__symbolic_GRBgetparamname)
#define GRBgetparamtype (*__symbolic_GRBgetparamtype)
#define GRBgetsos (*__symbolic_GRBgetsos)
#define GRBgetstrattr (*__symbolic_GRBgetstrattr)
#define GRBgetstrattrarray (*__symbolic_GRBgetstrattrarray)
#define GRBgetstrattrelement (*__symbolic_GRBgetstrattrelement)
#define GRBgetstrattrlist (*__symbolic_GRBgetstrattrlist)
#define GRBgetstrparam (*__symbolic_GRBgetstrparam)
#define GRBgetstrparaminfo (*__symbolic_GRBgetstrparaminfo)
#define GRBgetvars (*__symbolic_GRBgetvars)
#define GRBiismodel (*__symbolic_GRBiismodel)
#define GRBloadenv (*__symbolic_GRBloadenv)
#define GRBloadmodel (*__symbolic_GRBloadmodel)
#define GRBmsg (*__symbolic_GRBmsg)
#define GRBnewmodel (*__symbolic_GRBnewmodel)
#define GRBoptimize (*__symbolic_GRBoptimize)
#define GRBplatform (*__symbolic_GRBplatform)
#define GRBpresolvemodel (*__symbolic_GRBpresolvemodel)
#define GRBread (*__symbolic_GRBread)
#define GRBreadmodel (*__symbolic_GRBreadmodel)
#define GRBreadparams (*__symbolic_GRBreadparams)
#define GRBrelaxmodel (*__symbolic_GRBrelaxmodel)
#define GRBresetmodel (*__symbolic_GRBresetmodel)
#define GRBresetparams (*__symbolic_GRBresetparams)
#define GRBsetcallbackfunc (*__symbolic_GRBsetcallbackfunc)
#define GRBsetcharattrarray (*__symbolic_GRBsetcharattrarray)
#define GRBsetcharattrelement (*__symbolic_GRBsetcharattrelement)
#define GRBsetcharattrlist (*__symbolic_GRBsetcharattrlist)
#define GRBsetdblattr (*__symbolic_GRBsetdblattr)
#define GRBsetdblattrarray (*__symbolic_GRBsetdblattrarray)
#define GRBsetdblattrelement (*__symbolic_GRBsetdblattrelement)
#define GRBsetdblattrlist (*__symbolic_GRBsetdblattrlist)
#define GRBsetdblparam (*__symbolic_GRBsetdblparam)
#define GRBsetintattr (*__symbolic_GRBsetintattr)
#define GRBsetintattrarray (*__symbolic_GRBsetintattrarray)
#define GRBsetintattrelement (*__symbolic_GRBsetintattrelement)
#define GRBsetintattrlist (*__symbolic_GRBsetintattrlist)
#define GRBsetintparam (*__symbolic_GRBsetintparam)
#define GRBsetlogfile (*__symbolic_GRBsetlogfile)
#define GRBsetsignal (*__symbolic_GRBsetsignal)
#define GRBsetstrattr (*__symbolic_GRBsetstrattr)
#define GRBsetstrattrarray (*__symbolic_GRBsetstrattrarray)
#define GRBsetstrattrelement (*__symbolic_GRBsetstrattrelement)
#define GRBsetstrattrlist (*__symbolic_GRBsetstrattrlist)
#define GRBsetstrparam (*__symbolic_GRBsetstrparam)
#define GRBstrongbranch (*__symbolic_GRBstrongbranch)
#define GRBterminate (*__symbolic_GRBterminate)
#define GRBupdatemodel (*__symbolic_GRBupdatemodel)
#define GRBversion (*__symbolic_GRBversion)
#define GRBwrite (*__symbolic_GRBwrite)
#define GRBwriteparams (*__symbolic_GRBwriteparams)


#include <gurobi_c.h>

#endif /* LAZY_GUROBI_C_H */
