
#ifndef LAZY_CPLEX_H
#define LAZY_CPLEX_H

#include <ltdl.h>
#include "lazy_loading_status.h"

/* handle to the library */
lt_dlhandle __cplex_handle;
/* loads the symbols */
int load_cplex_symbols();
/* unloads the symbols (if called as many times as loadSymbols) */
int unload_cplex_symbols();

#define CPXcreateprob (*__symbolic_CPXcreateprob)
#define CPXcloneprob (*__symbolic_CPXcloneprob)
#define CPXcopylpwnames (*__symbolic_CPXcopylpwnames)
#define CPXcopylp (*__symbolic_CPXcopylp)
#define CPXcopyobjname (*__symbolic_CPXcopyobjname)
#define CPXcopybase (*__symbolic_CPXcopybase)
#define CPXcleanup (*__symbolic_CPXcleanup)
#define CPXcopystart (*__symbolic_CPXcopystart)
#define CPXfreeprob (*__symbolic_CPXfreeprob)
#define CPXcopynettolp (*__symbolic_CPXcopynettolp)
#define CPXNETextract (*__symbolic_CPXNETextract)
#define CPXlpopt (*__symbolic_CPXlpopt)
#define CPXconcurrentlpopt (*__symbolic_CPXconcurrentlpopt)
#define CPXconcurrentmipopt (*__symbolic_CPXconcurrentmipopt)
#define CPXprimopt (*__symbolic_CPXprimopt)
#define CPXdualopt (*__symbolic_CPXdualopt)
#define CPXhybnetopt (*__symbolic_CPXhybnetopt)
#define CPXsiftopt (*__symbolic_CPXsiftopt)
#define CPXpratio (*__symbolic_CPXpratio)
#define CPXdratio (*__symbolic_CPXdratio)
#define CPXpivot (*__symbolic_CPXpivot)
#define CPXsetphase2 (*__symbolic_CPXsetphase2)
#define CPXcheckpfeas (*__symbolic_CPXcheckpfeas)
#define CPXcheckdfeas (*__symbolic_CPXcheckdfeas)
#define CPXchecksoln (*__symbolic_CPXchecksoln)
#define CPXsolution (*__symbolic_CPXsolution)
#define CPXsolninfo (*__symbolic_CPXsolninfo)
#define CPXgetstat (*__symbolic_CPXgetstat)
#define CPXgetstatstring (*__symbolic_CPXgetstatstring)
#define CPXgetmethod (*__symbolic_CPXgetmethod)
#define CPXgetobjval (*__symbolic_CPXgetobjval)
#define CPXgetx (*__symbolic_CPXgetx)
#define CPXgetax (*__symbolic_CPXgetax)
#define CPXgetpi (*__symbolic_CPXgetpi)
#define CPXgetslack (*__symbolic_CPXgetslack)
#define CPXgetrowinfeas (*__symbolic_CPXgetrowinfeas)
#define CPXgetcolinfeas (*__symbolic_CPXgetcolinfeas)
#define CPXgetdj (*__symbolic_CPXgetdj)
#define CPXgetgrad (*__symbolic_CPXgetgrad)
#define CPXgetijdiv (*__symbolic_CPXgetijdiv)
#define CPXgetbase (*__symbolic_CPXgetbase)
#define CPXgetitcnt (*__symbolic_CPXgetitcnt)
#define CPXgetphase1cnt (*__symbolic_CPXgetphase1cnt)
#define CPXgetsiftitcnt (*__symbolic_CPXgetsiftitcnt)
#define CPXgetsiftphase1cnt (*__symbolic_CPXgetsiftphase1cnt)
#define CPXgetbaritcnt (*__symbolic_CPXgetbaritcnt)
#define CPXgetcrossppushcnt (*__symbolic_CPXgetcrossppushcnt)
#define CPXgetcrosspexchcnt (*__symbolic_CPXgetcrosspexchcnt)
#define CPXgetcrossdpushcnt (*__symbolic_CPXgetcrossdpushcnt)
#define CPXgetcrossdexchcnt (*__symbolic_CPXgetcrossdexchcnt)
#define CPXgetpsbcnt (*__symbolic_CPXgetpsbcnt)
#define CPXgetdsbcnt (*__symbolic_CPXgetdsbcnt)
#define CPXgetdblquality (*__symbolic_CPXgetdblquality)
#define CPXgetsolnpooldblquality (*__symbolic_CPXgetsolnpooldblquality)
#define CPXgetintquality (*__symbolic_CPXgetintquality)
#define CPXgetsolnpoolintquality (*__symbolic_CPXgetsolnpoolintquality)
#define CPXrhssa (*__symbolic_CPXrhssa)
#define CPXboundsa (*__symbolic_CPXboundsa)
#define CPXobjsa (*__symbolic_CPXobjsa)
#define CPXErangesa (*__symbolic_CPXErangesa)
#define CPXrefineconflict (*__symbolic_CPXrefineconflict)
#define CPXgetconflict (*__symbolic_CPXgetconflict)
#define CPXrefineconflictext (*__symbolic_CPXrefineconflictext)
#define CPXgetconflictext (*__symbolic_CPXgetconflictext)
#define CPXclpwrite (*__symbolic_CPXclpwrite)
#define CPXrobustopt (*__symbolic_CPXrobustopt)
#define CPXfeasopt (*__symbolic_CPXfeasopt)
#define CPXEfeasopt (*__symbolic_CPXEfeasopt)
#define CPXfeasoptext (*__symbolic_CPXfeasoptext)
#define CPXnewrows (*__symbolic_CPXnewrows)
#define CPXaddrows (*__symbolic_CPXaddrows)
#define CPXnewcols (*__symbolic_CPXnewcols)
#define CPXaddcols (*__symbolic_CPXaddcols)
#define CPXdelrows (*__symbolic_CPXdelrows)
#define CPXdelsetrows (*__symbolic_CPXdelsetrows)
#define CPXdelcols (*__symbolic_CPXdelcols)
#define CPXdelsetcols (*__symbolic_CPXdelsetcols)
#define CPXchgname (*__symbolic_CPXchgname)
#define CPXchgrowname (*__symbolic_CPXchgrowname)
#define CPXchgcolname (*__symbolic_CPXchgcolname)
#define CPXdelnames (*__symbolic_CPXdelnames)
#define CPXchgprobname (*__symbolic_CPXchgprobname)
#define CPXchgcoef (*__symbolic_CPXchgcoef)
#define CPXchgcoeflist (*__symbolic_CPXchgcoeflist)
#define CPXchgbds (*__symbolic_CPXchgbds)
#define CPXchgobj (*__symbolic_CPXchgobj)
#define CPXchgrhs (*__symbolic_CPXchgrhs)
#define CPXchgrngval (*__symbolic_CPXchgrngval)
#define CPXchgsense (*__symbolic_CPXchgsense)
#define CPXchgobjsen (*__symbolic_CPXchgobjsen)
#define CPXchgprobtype (*__symbolic_CPXchgprobtype)
#define CPXchgprobtypesolnpool (*__symbolic_CPXchgprobtypesolnpool)
#define CPXcompletelp (*__symbolic_CPXcompletelp)
#define CPXpreaddrows (*__symbolic_CPXpreaddrows)
#define CPXprechgobj (*__symbolic_CPXprechgobj)
#define CPXgetnumcols (*__symbolic_CPXgetnumcols)
#define CPXgetnumrows (*__symbolic_CPXgetnumrows)
#define CPXgetnumnz (*__symbolic_CPXgetnumnz)
#define CPXgetobjsen (*__symbolic_CPXgetobjsen)
#define CPXgetobj (*__symbolic_CPXgetobj)
#define CPXgetrhs (*__symbolic_CPXgetrhs)
#define CPXgetsense (*__symbolic_CPXgetsense)
#define CPXgetcols (*__symbolic_CPXgetcols)
#define CPXgetrows (*__symbolic_CPXgetrows)
#define CPXgetlb (*__symbolic_CPXgetlb)
#define CPXgetub (*__symbolic_CPXgetub)
#define CPXgetrngval (*__symbolic_CPXgetrngval)
#define CPXgetprobname (*__symbolic_CPXgetprobname)
#define CPXgetobjname (*__symbolic_CPXgetobjname)
#define CPXgetcolname (*__symbolic_CPXgetcolname)
#define CPXgetrowname (*__symbolic_CPXgetrowname)
#define CPXgetcoef (*__symbolic_CPXgetcoef)
#define CPXgetrowindex (*__symbolic_CPXgetrowindex)
#define CPXgetcolindex (*__symbolic_CPXgetcolindex)
#define CPXgetprobtype (*__symbolic_CPXgetprobtype)
#define CPXreadcopyprob (*__symbolic_CPXreadcopyprob)
#define CPXreadcopybase (*__symbolic_CPXreadcopybase)
#define CPXreadcopysol (*__symbolic_CPXreadcopysol)
#define CPXwriteprob (*__symbolic_CPXwriteprob)
#define CPXmbasewrite (*__symbolic_CPXmbasewrite)
#define CPXsolwrite (*__symbolic_CPXsolwrite)
#define CPXsolwritesolnpool (*__symbolic_CPXsolwritesolnpool)
#define CPXsolwritesolnpoolall (*__symbolic_CPXsolwritesolnpoolall)
#define CPXembwrite (*__symbolic_CPXembwrite)
#define CPXdperwrite (*__symbolic_CPXdperwrite)
#define CPXpperwrite (*__symbolic_CPXpperwrite)
#define CPXpreslvwrite (*__symbolic_CPXpreslvwrite)
#define CPXdualwrite (*__symbolic_CPXdualwrite)
#define CPXsetdefaults (*__symbolic_CPXsetdefaults)
#define CPXsetintparam (*__symbolic_CPXsetintparam)
#define CPXsetdblparam (*__symbolic_CPXsetdblparam)
#define CPXsetstrparam (*__symbolic_CPXsetstrparam)
#define CPXgetintparam (*__symbolic_CPXgetintparam)
#define CPXgetdblparam (*__symbolic_CPXgetdblparam)
#define CPXgetstrparam (*__symbolic_CPXgetstrparam)
#define CPXinfointparam (*__symbolic_CPXinfointparam)
#define CPXinfodblparam (*__symbolic_CPXinfodblparam)
#define CPXinfostrparam (*__symbolic_CPXinfostrparam)
#define CPXgetparamname (*__symbolic_CPXgetparamname)
#define CPXgetparamnum (*__symbolic_CPXgetparamnum)
#define CPXgetparamtype (*__symbolic_CPXgetparamtype)
#define CPXreadcopyparam (*__symbolic_CPXreadcopyparam)
#define CPXwriteparam (*__symbolic_CPXwriteparam)
#define CPXgetchgparam (*__symbolic_CPXgetchgparam)
#define CPXtuneparam (*__symbolic_CPXtuneparam)
#define CPXtuneparamprobset (*__symbolic_CPXtuneparamprobset)
#define CPXversion (*__symbolic_CPXversion)
#define CPXopenCPLEX (*__symbolic_CPXopenCPLEX)
#define CPXopenCPLEXruntime (*__symbolic_CPXopenCPLEXruntime)
#define CPXcloseCPLEX (*__symbolic_CPXcloseCPLEX)
#define CPXparenv (*__symbolic_CPXparenv)
#define CPXfreeparenv (*__symbolic_CPXfreeparenv)
#define CPXcheckcopylp (*__symbolic_CPXcheckcopylp)
#define CPXcheckcopylpwnames (*__symbolic_CPXcheckcopylpwnames)
#define CPXcheckaddcols (*__symbolic_CPXcheckaddcols)
#define CPXcheckaddrows (*__symbolic_CPXcheckaddrows)
#define CPXcheckchgcoeflist (*__symbolic_CPXcheckchgcoeflist)
#define CPXcheckvals (*__symbolic_CPXcheckvals)
#define CPXgetchannels (*__symbolic_CPXgetchannels)
#define CPXsetlogfile (*__symbolic_CPXsetlogfile)
#define CPXgetlogfile (*__symbolic_CPXgetlogfile)
#define CPXmsg (*__symbolic_CPXmsg)
#define CPXmsgstr (*__symbolic_CPXmsgstr)
#define CPXflushchannel (*__symbolic_CPXflushchannel)
#define CPXflushstdchannels (*__symbolic_CPXflushstdchannels)
#define CPXaddchannel (*__symbolic_CPXaddchannel)
#define CPXaddfpdest (*__symbolic_CPXaddfpdest)
#define CPXdelfpdest (*__symbolic_CPXdelfpdest)
#define CPXaddfuncdest (*__symbolic_CPXaddfuncdest)
#define CPXdelfuncdest (*__symbolic_CPXdelfuncdest)
#define CPXdelchannel (*__symbolic_CPXdelchannel)
#define CPXdisconnectchannel (*__symbolic_CPXdisconnectchannel)
#define CPXgeterrorstring (*__symbolic_CPXgeterrorstring)
#define CPXsetlpcallbackfunc (*__symbolic_CPXsetlpcallbackfunc)
#define CPXsetnetcallbackfunc (*__symbolic_CPXsetnetcallbackfunc)
#define CPXsettuningcallbackfunc (*__symbolic_CPXsettuningcallbackfunc)
#define CPXgetcallbackinfo (*__symbolic_CPXgetcallbackinfo)
#define CPXgetlpcallbackfunc (*__symbolic_CPXgetlpcallbackfunc)
#define CPXgetnetcallbackfunc (*__symbolic_CPXgetnetcallbackfunc)
#define CPXgettuningcallbackfunc (*__symbolic_CPXgettuningcallbackfunc)
#define CPXsetprofcallbackfunc (*__symbolic_CPXsetprofcallbackfunc)
#define CPXfopen (*__symbolic_CPXfopen)
#define CPXfclose (*__symbolic_CPXfclose)
#define CPXfputs (*__symbolic_CPXfputs)
#define CPXmalloc (*__symbolic_CPXmalloc)
#define CPXrealloc (*__symbolic_CPXrealloc)
#define CPXmemcpy (*__symbolic_CPXmemcpy)
#define CPXfree (*__symbolic_CPXfree)
#define CPXstrlen (*__symbolic_CPXstrlen)
#define CPXstrcpy (*__symbolic_CPXstrcpy)
#define CPXputenv (*__symbolic_CPXputenv)
#define CPXEisort (*__symbolic_CPXEisort)
#define CPXEinsort (*__symbolic_CPXEinsort)
#define CPXEgetThreadNumber (*__symbolic_CPXEgetThreadNumber)
#define CPXEgetmaxthreads (*__symbolic_CPXEgetmaxthreads)
#define CPXEsetJNI (*__symbolic_CPXEsetJNI)
#define CPXEgetJNI (*__symbolic_CPXEgetJNI)
#define CPXEsetnamefunctions (*__symbolic_CPXEsetnamefunctions)
#define CPXEsetnamedef (*__symbolic_CPXEsetnamedef)
#define CPXEdelnames (*__symbolic_CPXEdelnames)
#define CPXEgetCache (*__symbolic_CPXEgetCache)
#define CPXEcacheNewCols (*__symbolic_CPXEcacheNewCols)
#define CPXEcacheNewRows (*__symbolic_CPXEcacheNewRows)
#define CPXEcacheNewNZsByNZ (*__symbolic_CPXEcacheNewNZsByNZ)
#define CPXEgetorigcolind (*__symbolic_CPXEgetorigcolind)
#define CPXEgetorigrowind (*__symbolic_CPXEgetorigrowind)
#define CPXEgetbigreal (*__symbolic_CPXEgetbigreal)
#define CPXEispromotion (*__symbolic_CPXEispromotion)
#define CPXEgetnumrownz (*__symbolic_CPXEgetnumrownz)
#define CPXEcangetbase (*__symbolic_CPXEcangetbase)
#define CPXEwriteparam (*__symbolic_CPXEwriteparam)
#define CPXsetterminate (*__symbolic_CPXsetterminate)
#define CPXEsetterminatefunc (*__symbolic_CPXEsetterminatefunc)
#define CPXEnsAddNames (*__symbolic_CPXEnsAddNames)
#define CPXgetbhead (*__symbolic_CPXgetbhead)
#define CPXbinvcol (*__symbolic_CPXbinvcol)
#define CPXbinvrow (*__symbolic_CPXbinvrow)
#define CPXbinvacol (*__symbolic_CPXbinvacol)
#define CPXbinvarow (*__symbolic_CPXbinvarow)
#define CPXftran (*__symbolic_CPXftran)
#define CPXbtran (*__symbolic_CPXbtran)
#define CPXgetijrow (*__symbolic_CPXgetijrow)
#define CPXgetray (*__symbolic_CPXgetray)
#define CPXgetweight (*__symbolic_CPXgetweight)
#define CPXmdleave (*__symbolic_CPXmdleave)
#define CPXstrongbranch (*__symbolic_CPXstrongbranch)
#define CPXdualfarkas (*__symbolic_CPXdualfarkas)
#define CPXgetobjoffset (*__symbolic_CPXgetobjoffset)
#define CPXcopypartialbase (*__symbolic_CPXcopypartialbase)
#define CPXgetbasednorms (*__symbolic_CPXgetbasednorms)
#define CPXcopybasednorms (*__symbolic_CPXcopybasednorms)
#define CPXgetdnorms (*__symbolic_CPXgetdnorms)
#define CPXcopydnorms (*__symbolic_CPXcopydnorms)
#define CPXkilldnorms (*__symbolic_CPXkilldnorms)
#define CPXgetpnorms (*__symbolic_CPXgetpnorms)
#define CPXcopypnorms (*__symbolic_CPXcopypnorms)
#define CPXkillpnorms (*__symbolic_CPXkillpnorms)
#define CPXpivotin (*__symbolic_CPXpivotin)
#define CPXpivotout (*__symbolic_CPXpivotout)
#define CPXunscaleprob (*__symbolic_CPXunscaleprob)
#define CPXtightenbds (*__symbolic_CPXtightenbds)
#define CPXpresolve (*__symbolic_CPXpresolve)
#define CPXbasicpresolve (*__symbolic_CPXbasicpresolve)
#define CPXslackfromx (*__symbolic_CPXslackfromx)
#define CPXdjfrompi (*__symbolic_CPXdjfrompi)
#define CPXqpdjfrompi (*__symbolic_CPXqpdjfrompi)
#define CPXfreepresolve (*__symbolic_CPXfreepresolve)
#define CPXgetredlp (*__symbolic_CPXgetredlp)
#define CPXcrushx (*__symbolic_CPXcrushx)
#define CPXuncrushx (*__symbolic_CPXuncrushx)
#define CPXcrushpi (*__symbolic_CPXcrushpi)
#define CPXuncrushpi (*__symbolic_CPXuncrushpi)
#define CPXqpuncrushpi (*__symbolic_CPXqpuncrushpi)
#define CPXcrushform (*__symbolic_CPXcrushform)
#define CPXuncrushform (*__symbolic_CPXuncrushform)
#define CPXgetprestat (*__symbolic_CPXgetprestat)
#define CPXcopyprotected (*__symbolic_CPXcopyprotected)
#define CPXgetprotected (*__symbolic_CPXgetprotected)
#define CPXEaggregatevars (*__symbolic_CPXEaggregatevars)
#define CPXgettime (*__symbolic_CPXgettime)
#define CPXlpwrite (*__symbolic_CPXlpwrite)
#define CPXlprewrite (*__symbolic_CPXlprewrite)
#define CPXmpswrite (*__symbolic_CPXmpswrite)
#define CPXmpsrewrite (*__symbolic_CPXmpsrewrite)
#define CPXsavwrite (*__symbolic_CPXsavwrite)
#define CPXreadcopyvec (*__symbolic_CPXreadcopyvec)
#define CPXvecwrite (*__symbolic_CPXvecwrite)
#define CPXbinsolwrite (*__symbolic_CPXbinsolwrite)
#define CPXtxtsolwrite (*__symbolic_CPXtxtsolwrite)
#define CPXwritesol (*__symbolic_CPXwritesol)
#define CPXgetiis (*__symbolic_CPXgetiis)
#define CPXfindiis (*__symbolic_CPXfindiis)
#define CPXdisplayiis (*__symbolic_CPXdisplayiis)
#define CPXiiswrite (*__symbolic_CPXiiswrite)
#define CPXhybbaropt (*__symbolic_CPXhybbaropt)
#define CPXbaropt (*__symbolic_CPXbaropt)
#define CPXEgeneric_lock (*__symbolic_CPXEgeneric_lock)
#define CPXEgeneric_unlock (*__symbolic_CPXEgeneric_unlock)
#define CPXsetorderhookfunc (*__symbolic_CPXsetorderhookfunc)
#define CPXgetorderhookfunc (*__symbolic_CPXgetorderhookfunc)
#define CPXcopyctype (*__symbolic_CPXcopyctype)
#define CPXcopyorder (*__symbolic_CPXcopyorder)
#define CPXcopysos (*__symbolic_CPXcopysos)
#define CPXcopymipstart (*__symbolic_CPXcopymipstart)
#define CPXchgmipstart (*__symbolic_CPXchgmipstart)
#define CPXchgmipstarts (*__symbolic_CPXchgmipstarts)
#define CPXaddmipstarts (*__symbolic_CPXaddmipstarts)
#define CPXdelmipstarts (*__symbolic_CPXdelmipstarts)
#define CPXdelsetmipstarts (*__symbolic_CPXdelsetmipstarts)
#define CPXrefinemipstartconflict (*__symbolic_CPXrefinemipstartconflict)
#define CPXrefinemipstartconflictext (*__symbolic_CPXrefinemipstartconflictext)
#define CPXmipopt (*__symbolic_CPXmipopt)
#define CPXgetmipitcnt (*__symbolic_CPXgetmipitcnt)
#define CPXgetbestobjval (*__symbolic_CPXgetbestobjval)
#define CPXgetmiprelgap (*__symbolic_CPXgetmiprelgap)
#define CPXgetcutoff (*__symbolic_CPXgetcutoff)
#define CPXgetnodecnt (*__symbolic_CPXgetnodecnt)
#define CPXgetnodeleftcnt (*__symbolic_CPXgetnodeleftcnt)
#define CPXgetnodeint (*__symbolic_CPXgetnodeint)
#define CPXgetnumcuts (*__symbolic_CPXgetnumcuts)
#define CPXgetnummipstarts (*__symbolic_CPXgetnummipstarts)
#define CPXgetmipstart (*__symbolic_CPXgetmipstart)
#define CPXgetmipstarts (*__symbolic_CPXgetmipstarts)
#define CPXgetmipstartname (*__symbolic_CPXgetmipstartname)
#define CPXgetmipstartindex (*__symbolic_CPXgetmipstartindex)
#define CPXgetsolnpoolmipstart (*__symbolic_CPXgetsolnpoolmipstart)
#define CPXgetsolnpoolnummipstarts (*__symbolic_CPXgetsolnpoolnummipstarts)
#define CPXgetsubstat (*__symbolic_CPXgetsubstat)
#define CPXgetsubmethod (*__symbolic_CPXgetsubmethod)
#define CPXchgctype (*__symbolic_CPXchgctype)
#define CPXaddsos (*__symbolic_CPXaddsos)
#define CPXdelsetsos (*__symbolic_CPXdelsetsos)
#define CPXgetctype (*__symbolic_CPXgetctype)
#define CPXgetnumsos (*__symbolic_CPXgetnumsos)
#define CPXgetsos (*__symbolic_CPXgetsos)
#define CPXgetsosname (*__symbolic_CPXgetsosname)
#define CPXgetsosindex (*__symbolic_CPXgetsosindex)
#define CPXgetsosinfeas (*__symbolic_CPXgetsosinfeas)
#define CPXgetnumindconstrs (*__symbolic_CPXgetnumindconstrs)
#define CPXgetindconstr (*__symbolic_CPXgetindconstr)
#define CPXEgetindicator (*__symbolic_CPXEgetindicator)
#define CPXgetindconstrindex (*__symbolic_CPXgetindconstrindex)
#define CPXgetindconstrname (*__symbolic_CPXgetindconstrname)
#define CPXgetindconstrslack (*__symbolic_CPXgetindconstrslack)
#define CPXindconstrslackfromx (*__symbolic_CPXindconstrslackfromx)
#define CPXgetindconstrinfeas (*__symbolic_CPXgetindconstrinfeas)
#define CPXdelindconstrs (*__symbolic_CPXdelindconstrs)
#define CPXgetnumint (*__symbolic_CPXgetnumint)
#define CPXgetnumbin (*__symbolic_CPXgetnumbin)
#define CPXgetnumsemicont (*__symbolic_CPXgetnumsemicont)
#define CPXgetnumsemiint (*__symbolic_CPXgetnumsemiint)
#define CPXgetorder (*__symbolic_CPXgetorder)
#define CPXpopulate (*__symbolic_CPXpopulate)
#define CPXgetsolnpoolnumfilters (*__symbolic_CPXgetsolnpoolnumfilters)
#define CPXaddsolnpooldivfilter (*__symbolic_CPXaddsolnpooldivfilter)
#define CPXaddsolnpoolrngfilter (*__symbolic_CPXaddsolnpoolrngfilter)
#define CPXgetsolnpoolfiltertype (*__symbolic_CPXgetsolnpoolfiltertype)
#define CPXgetsolnpooldivfilter (*__symbolic_CPXgetsolnpooldivfilter)
#define CPXgetsolnpoolfilter (*__symbolic_CPXgetsolnpoolfilter)
#define CPXgetsolnpoolrngfilter (*__symbolic_CPXgetsolnpoolrngfilter)
#define CPXgetsolnpoolfiltername (*__symbolic_CPXgetsolnpoolfiltername)
#define CPXgetsolnpoolfilterindex (*__symbolic_CPXgetsolnpoolfilterindex)
#define CPXdelsolnpoolfilters (*__symbolic_CPXdelsolnpoolfilters)
#define CPXdelsetsolnpoolfilters (*__symbolic_CPXdelsetsolnpoolfilters)
#define CPXgetsolnpoolnumsolns (*__symbolic_CPXgetsolnpoolnumsolns)
#define CPXgetsolnpoolnumreplaced (*__symbolic_CPXgetsolnpoolnumreplaced)
#define CPXgetsolnpoolmeanobjval (*__symbolic_CPXgetsolnpoolmeanobjval)
#define CPXgetsolnpoolobjval (*__symbolic_CPXgetsolnpoolobjval)
#define CPXgetsolnpoolx (*__symbolic_CPXgetsolnpoolx)
#define CPXgetsolnpoolslack (*__symbolic_CPXgetsolnpoolslack)
#define CPXgetsolnpoolqconstrslack (*__symbolic_CPXgetsolnpoolqconstrslack)
#define CPXgetsolnpoolsolnname (*__symbolic_CPXgetsolnpoolsolnname)
#define CPXgetsolnpoolsolnindex (*__symbolic_CPXgetsolnpoolsolnindex)
#define CPXdelsolnpoolsolns (*__symbolic_CPXdelsolnpoolsolns)
#define CPXdelsetsolnpoolsolns (*__symbolic_CPXdelsetsolnpoolsolns)
#define CPXreadcopyorder (*__symbolic_CPXreadcopyorder)
#define CPXreadcopysolnpoolfilters (*__symbolic_CPXreadcopysolnpoolfilters)
#define CPXreadcopymipstart (*__symbolic_CPXreadcopymipstart)
#define CPXreadcopymipstarts (*__symbolic_CPXreadcopymipstarts)
#define CPXordwrite (*__symbolic_CPXordwrite)
#define CPXmstwrite (*__symbolic_CPXmstwrite)
#define CPXwritemipstarts (*__symbolic_CPXwritemipstarts)
#define CPXmstwritesolnpool (*__symbolic_CPXmstwritesolnpool)
#define CPXmstwritesolnpoolall (*__symbolic_CPXmstwritesolnpoolall)
#define CPXfltwrite (*__symbolic_CPXfltwrite)
#define CPXcheckcopyctype (*__symbolic_CPXcheckcopyctype)
#define CPXcheckcopysos (*__symbolic_CPXcheckcopysos)
#define CPXEchgsosname (*__symbolic_CPXEchgsosname)
#define CPXsetinfocallbackfunc (*__symbolic_CPXsetinfocallbackfunc)
#define CPXgetinfocallbackfunc (*__symbolic_CPXgetinfocallbackfunc)
#define CPXsetmipcallbackfunc (*__symbolic_CPXsetmipcallbackfunc)
#define CPXgetmipcallbackfunc (*__symbolic_CPXgetmipcallbackfunc)
#define CPXsetbranchcallbackfunc (*__symbolic_CPXsetbranchcallbackfunc)
#define CPXsetbranchnosolncallbackfunc (*__symbolic_CPXsetbranchnosolncallbackfunc)
#define CPXsetcutcallbackfunc (*__symbolic_CPXsetcutcallbackfunc)
#define CPXsetnodecallbackfunc (*__symbolic_CPXsetnodecallbackfunc)
#define CPXsetheuristiccallbackfunc (*__symbolic_CPXsetheuristiccallbackfunc)
#define CPXsetincumbentcallbackfunc (*__symbolic_CPXsetincumbentcallbackfunc)
#define CPXsetsolvecallbackfunc (*__symbolic_CPXsetsolvecallbackfunc)
#define CPXsetdeletenodecallbackfunc (*__symbolic_CPXsetdeletenodecallbackfunc)
#define CPXgetbranchcallbackfunc (*__symbolic_CPXgetbranchcallbackfunc)
#define CPXgetbranchnosolncallbackfunc (*__symbolic_CPXgetbranchnosolncallbackfunc)
#define CPXgetcutcallbackfunc (*__symbolic_CPXgetcutcallbackfunc)
#define CPXgetnodecallbackfunc (*__symbolic_CPXgetnodecallbackfunc)
#define CPXgetheuristiccallbackfunc (*__symbolic_CPXgetheuristiccallbackfunc)
#define CPXgetincumbentcallbackfunc (*__symbolic_CPXgetincumbentcallbackfunc)
#define CPXgetsolvecallbackfunc (*__symbolic_CPXgetsolvecallbackfunc)
#define CPXgetdeletenodecallbackfunc (*__symbolic_CPXgetdeletenodecallbackfunc)
#define CPXgetcallbacknodelp (*__symbolic_CPXgetcallbacknodelp)
#define CPXgetcallbacknodeinfo (*__symbolic_CPXgetcallbacknodeinfo)
#define CPXgetcallbackseqinfo (*__symbolic_CPXgetcallbackseqinfo)
#define CPXgetcallbacksosinfo (*__symbolic_CPXgetcallbacksosinfo)
#define CPXgetcallbackindicatorinfo (*__symbolic_CPXgetcallbackindicatorinfo)
#define CPXcutcallbackadd (*__symbolic_CPXcutcallbackadd)
#define CPXcutcallbackaddlocal (*__symbolic_CPXcutcallbackaddlocal)
#define CPXbranchcallbackbranchbds (*__symbolic_CPXbranchcallbackbranchbds)
#define CPXbranchcallbackbranchgeneral (*__symbolic_CPXbranchcallbackbranchgeneral)
#define CPXbranchcallbackbranchconstraints (*__symbolic_CPXbranchcallbackbranchconstraints)
#define CPXgetcallbacknodex (*__symbolic_CPXgetcallbacknodex)
#define CPXgetcallbacknodeobjval (*__symbolic_CPXgetcallbacknodeobjval)
#define CPXgetcallbackctype (*__symbolic_CPXgetcallbackctype)
#define CPXgetcallbackorder (*__symbolic_CPXgetcallbackorder)
#define CPXgetcallbackpseudocosts (*__symbolic_CPXgetcallbackpseudocosts)
#define CPXgetcallbackincumbent (*__symbolic_CPXgetcallbackincumbent)
#define CPXgetcallbacknodeintfeas (*__symbolic_CPXgetcallbacknodeintfeas)
#define CPXgetcallbackgloballb (*__symbolic_CPXgetcallbackgloballb)
#define CPXgetcallbackglobalub (*__symbolic_CPXgetcallbackglobalub)
#define CPXgetcallbacknodelb (*__symbolic_CPXgetcallbacknodelb)
#define CPXgetcallbacknodeub (*__symbolic_CPXgetcallbacknodeub)
#define CPXgetcallbacklp (*__symbolic_CPXgetcallbacklp)
#define CPXgetcallbacknodestat (*__symbolic_CPXgetcallbacknodestat)
#define CPXgetcallbackbranchconstraints (*__symbolic_CPXgetcallbackbranchconstraints)
#define CPXaddusercuts (*__symbolic_CPXaddusercuts)
#define CPXaddlazyconstraints (*__symbolic_CPXaddlazyconstraints)
#define CPXfreeusercuts (*__symbolic_CPXfreeusercuts)
#define CPXfreelazyconstraints (*__symbolic_CPXfreelazyconstraints)
#define CPXEgetusercuts (*__symbolic_CPXEgetusercuts)
#define CPXEgetusercutname (*__symbolic_CPXEgetusercutname)
#define CPXEgetlazyconstraints (*__symbolic_CPXEgetlazyconstraints)
#define CPXEgetlazyconstraintname (*__symbolic_CPXEgetlazyconstraintname)
#define CPXordread (*__symbolic_CPXordread)
#define CPXaddindconstr (*__symbolic_CPXaddindconstr)
#define CPXEgetnumgconstrs (*__symbolic_CPXEgetnumgconstrs)
#define CPXEdelgconstrs (*__symbolic_CPXEdelgconstrs)
#define CPXEaddindconstr (*__symbolic_CPXEaddindconstr)
#define CPXEaddminexpr (*__symbolic_CPXEaddminexpr)
#define CPXEaddmaxexpr (*__symbolic_CPXEaddmaxexpr)
#define CPXEaddpwl (*__symbolic_CPXEaddpwl)
#define CPXEaddabs (*__symbolic_CPXEaddabs)
#define CPXEaddsetvar (*__symbolic_CPXEaddsetvar)
#define CPXEchgsetvar (*__symbolic_CPXEchgsetvar)
#define CPXEgetsetvarvalues (*__symbolic_CPXEgetsetvarvalues)
#define CPXEaddsetvarmember (*__symbolic_CPXEaddsetvarmember)
#define CPXEaddsetvarcard (*__symbolic_CPXEaddsetvarcard)
#define CPXEaddsetvarsum (*__symbolic_CPXEaddsetvarsum)
#define CPXEaddsetvarmin (*__symbolic_CPXEaddsetvarmin)
#define CPXEaddsetvarmax (*__symbolic_CPXEaddsetvarmax)
#define CPXEaddsetvarsubset (*__symbolic_CPXEaddsetvarsubset)
#define CPXEaddsetvardomain (*__symbolic_CPXEaddsetvardomain)
#define CPXEaddsetvarunion (*__symbolic_CPXEaddsetvarunion)
#define CPXEaddsetvarintersection (*__symbolic_CPXEaddsetvarintersection)
#define CPXEaddsetvarnullintersect (*__symbolic_CPXEaddsetvarnullintersect)
#define CPXEaddsetvarintersect (*__symbolic_CPXEaddsetvarintersect)
#define CPXEaddsetvareq (*__symbolic_CPXEaddsetvareq)
#define CPXEaddsetvarneq (*__symbolic_CPXEaddsetvarneq)
#define CPXEaddsetvarneqcst (*__symbolic_CPXEaddsetvarneqcst)
#define CPXNETcreateprob (*__symbolic_CPXNETcreateprob)
#define CPXNETfreeprob (*__symbolic_CPXNETfreeprob)
#define CPXNETcopynet (*__symbolic_CPXNETcopynet)
#define CPXNETcopybase (*__symbolic_CPXNETcopybase)
#define CPXNETaddnodes (*__symbolic_CPXNETaddnodes)
#define CPXNETaddarcs (*__symbolic_CPXNETaddarcs)
#define CPXNETdelnodes (*__symbolic_CPXNETdelnodes)
#define CPXNETdelarcs (*__symbolic_CPXNETdelarcs)
#define CPXNETdelset (*__symbolic_CPXNETdelset)
#define CPXNETprimopt (*__symbolic_CPXNETprimopt)
#define CPXNETgetstat (*__symbolic_CPXNETgetstat)
#define CPXNETgetobjval (*__symbolic_CPXNETgetobjval)
#define CPXNETgetx (*__symbolic_CPXNETgetx)
#define CPXNETgetpi (*__symbolic_CPXNETgetpi)
#define CPXNETgetslack (*__symbolic_CPXNETgetslack)
#define CPXNETgetdj (*__symbolic_CPXNETgetdj)
#define CPXNETgetitcnt (*__symbolic_CPXNETgetitcnt)
#define CPXNETgetphase1cnt (*__symbolic_CPXNETgetphase1cnt)
#define CPXNETgetbase (*__symbolic_CPXNETgetbase)
#define CPXNETsolution (*__symbolic_CPXNETsolution)
#define CPXNETsolninfo (*__symbolic_CPXNETsolninfo)
#define CPXNETchgname (*__symbolic_CPXNETchgname)
#define CPXNETchgarcname (*__symbolic_CPXNETchgarcname)
#define CPXNETchgnodename (*__symbolic_CPXNETchgnodename)
#define CPXNETchgobjsen (*__symbolic_CPXNETchgobjsen)
#define CPXNETchgbds (*__symbolic_CPXNETchgbds)
#define CPXNETchgarcnodes (*__symbolic_CPXNETchgarcnodes)
#define CPXNETchgobj (*__symbolic_CPXNETchgobj)
#define CPXNETchgsupply (*__symbolic_CPXNETchgsupply)
#define CPXNETgetobjsen (*__symbolic_CPXNETgetobjsen)
#define CPXNETgetsupply (*__symbolic_CPXNETgetsupply)
#define CPXNETgetprobname (*__symbolic_CPXNETgetprobname)
#define CPXNETgetnodename (*__symbolic_CPXNETgetnodename)
#define CPXNETgetarcname (*__symbolic_CPXNETgetarcname)
#define CPXNETgetlb (*__symbolic_CPXNETgetlb)
#define CPXNETgetub (*__symbolic_CPXNETgetub)
#define CPXNETgetobj (*__symbolic_CPXNETgetobj)
#define CPXNETgetarcnodes (*__symbolic_CPXNETgetarcnodes)
#define CPXNETgetnodearcs (*__symbolic_CPXNETgetnodearcs)
#define CPXNETgetnumnodes (*__symbolic_CPXNETgetnumnodes)
#define CPXNETgetnumarcs (*__symbolic_CPXNETgetnumarcs)
#define CPXNETgetnodeindex (*__symbolic_CPXNETgetnodeindex)
#define CPXNETgetarcindex (*__symbolic_CPXNETgetarcindex)
#define CPXNETreadcopyprob (*__symbolic_CPXNETreadcopyprob)
#define CPXNETreadcopybase (*__symbolic_CPXNETreadcopybase)
#define CPXNETwriteprob (*__symbolic_CPXNETwriteprob)
#define CPXNETbasewrite (*__symbolic_CPXNETbasewrite)
#define CPXNETcheckcopynet (*__symbolic_CPXNETcheckcopynet)
#define CPXcopyquad (*__symbolic_CPXcopyquad)
#define CPXcopyqpsep (*__symbolic_CPXcopyqpsep)
#define CPXchgqpcoef (*__symbolic_CPXchgqpcoef)
#define CPXgetnumqpnz (*__symbolic_CPXgetnumqpnz)
#define CPXgetnumquad (*__symbolic_CPXgetnumquad)
#define CPXgetqpcoef (*__symbolic_CPXgetqpcoef)
#define CPXgetquad (*__symbolic_CPXgetquad)
#define CPXqpindefcertificate (*__symbolic_CPXqpindefcertificate)
#define CPXcheckcopyqpsep (*__symbolic_CPXcheckcopyqpsep)
#define CPXcheckcopyquad (*__symbolic_CPXcheckcopyquad)
#define CPXqpopt (*__symbolic_CPXqpopt)
#define CPXaddqconstr (*__symbolic_CPXaddqconstr)
#define CPXdelqconstrs (*__symbolic_CPXdelqconstrs)
#define CPXgetnumqconstrs (*__symbolic_CPXgetnumqconstrs)
#define CPXgetqconstrindex (*__symbolic_CPXgetqconstrindex)
#define CPXgetqconstr (*__symbolic_CPXgetqconstr)
#define CPXgetqconstrname (*__symbolic_CPXgetqconstrname)
#define CPXgetqconstrslack (*__symbolic_CPXgetqconstrslack)
#define CPXqconstrslackfromx (*__symbolic_CPXqconstrslackfromx)
#define CPXgetqconstrinfeas (*__symbolic_CPXgetqconstrinfeas)
#define CPXgetxqxax (*__symbolic_CPXgetxqxax)
#define CPXEchgqcname (*__symbolic_CPXEchgqcname)

/* This is me trying to workaround __declspec */
#define BUILD_CPXSTATIC
#include <ilcplex/cplex.h>
#undef BUILD_CPXSTATIC

#endif /* LAZY_CPLEX_H */

