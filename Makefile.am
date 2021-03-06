lib_LTLIBRARIES =
bin_PROGRAMS = bin/lazylpsolverlibs-config
pkgconfigdir = $(libdir)/pkgconfig
pkgconfig_DATA =
AM_CPPFLAGS = -I$(top_srcdir)/lazylpsolverlibs

bin_lazylpsolverlibs_config_SOURCES = helpers/lazylpsolverlibs-config.c
bin_lazylpsolverlibs_config_LDFLAGS = lib/liblazycplex.la \
                                      lib/liblazyxprs.la \
                                      lib/liblazyglpk.la \
                                      lib/liblazygurobi.la
bin_lazylpsolverlibs_config_DEPENDENCIES = lib/liblazycplex.la \
                                           lib/liblazyxprs.la \
                                           lib/liblazyglpk.la \
                                           lib/liblazygurobi.la
src:
	mkdir src

# lazycplex
lib_LTLIBRARIES += lib/liblazycplex.la
pkgconfig_DATA += lib/pkgconfig/lazycplex.pc

src/lazycplex.c: src
	sh share/lazylpsolverlibs/stublib.sh -l cplex123,cplex121,cplex120,cplex112,cplex111,cplex110,cplex102,cplex101,cplex100,cplex91,cplex90,cplex81,cplex80,cplex75,cplex71,cplex70,cplex66,cplex65,cplex60,cplex50,cplex40,cplex30,cplex21,cplex20 -e LAZYLPSOLVERLIBS_CPLEX_LIB -f @libdir@/libcplex.so -i lazylpsolverlibs/ilcplex/cplex.h -d"<ilcplex/cplex.h>" -c"cpp $(CPPFLAGS)" -r"set_lazycplex_failure_callback" > src/lazycplex.c

nodist_lib_liblazycplex_la_SOURCES = src/lazycplex.c
lib_liblazycplex_la_CFLAGS = $(GMODULE_CFLAGS)
lib_liblazycplex_la_LIBADD = $(GMODULE_LIBS)
lib_liblazycplex_la_LDFLAGS = -version-info $(GENERIC_LIBRARY_VERSION) -no-undefined --enable-runtime-pseudo-reloc

# lazyxprs
lib_LTLIBRARIES += lib/liblazyxprs.la
pkgconfig_DATA += lib/pkgconfig/lazyxprs.pc

src/lazyxprs.c: src
	sh share/lazylpsolverlibs/stublib.sh -l xprs -e LAZYLPSOLVERLIBS_XPRS_LIB -f @libdir@/libxprs.so -i lazylpsolverlibs/xprs.h -d"<xprs.h>" -c"cpp $(CPPFLAGS)" -r"set_lazyxprs_failure_callback" > src/lazyxprs.c

nodist_lib_liblazyxprs_la_SOURCES = src/lazyxprs.c
lib_liblazyxprs_la_CFLAGS = $(GMODULE_CFLAGS)
lib_liblazyxprs_la_LIBADD = $(GMODULE_LIBS)
lib_liblazyxprs_la_LDFLAGS = -version-info $(GENERIC_LIBRARY_VERSION) -no-undefined --enable-runtime-pseudo-reloc

# lazygurobi
lib_LTLIBRARIES += lib/liblazygurobi.la
pkgconfig_DATA += lib/pkgconfig/lazygurobi.pc

src/lazygurobi.c: src
	sh share/lazylpsolverlibs/stublib.sh -l gurobi50,gurobi461,gurobi452,gurobi402,gurobi303 -e LAZYLPSOLVERLIBS_GUROBI_LIB -f @libdir@/libgurobi.so -i lazylpsolverlibs/gurobi_c.h -d"<gurobi_c.h>" -c"cpp $(CPPFLAGS)" -r"set_lazygurobi_failure_callback" > src/lazygurobi.c

nodist_lib_liblazygurobi_la_SOURCES = src/lazygurobi.c
lib_liblazygurobi_la_CFLAGS = $(GMODULE_CFLAGS)
lib_liblazygurobi_la_LIBADD = $(GMODULE_LIBS)
# There is a technical reason to force lm
# https://groups.google.com/forum/?fromgroups#!topic/gurobi/wsaJ_vxSjDU
lib_liblazygurobi_la_LDFLAGS = -version-info $(GENERIC_LIBRARY_VERSION) -no-undefined --enable-runtime-pseudo-reloc -Wl,--no-as-needed,-lm

# lazyglpk
lib_LTLIBRARIES += lib/liblazyglpk.la
pkgconfig_DATA += lib/pkgconfig/lazyglpk.pc

src/lazyglpk.c: src
	sh share/lazylpsolverlibs/stublib.sh -l glpk -e LAZYLPSOLVERLIBS_GLPK_LIB -f @libdir@/libglpk.so -i lazylpsolverlibs/glpk.h -d"<glpk.h>" -c"cpp $(CPPFLAGS)" -r"set_lazyglpk_failure_callback" > src/lazyglpk.c

nodist_lib_liblazyglpk_la_SOURCES = src/lazyglpk.c
lib_liblazyglpk_la_CFLAGS = $(GMODULE_CFLAGS)
lib_liblazyglpk_la_LIBADD = $(GMODULE_LIBS)
lib_liblazyglpk_la_LDFLAGS = -version-info $(GENERIC_LIBRARY_VERSION) -no-undefined --enable-runtime-pseudo-reloc

nobase_include_HEADERS =  lazylpsolverlibs/ilcplex/cplex.h \
                          lazylpsolverlibs/xprs.h \
                          lazylpsolverlibs/gurobi_c.h \
                          lazylpsolverlibs/glpk.h
lazylpsolverlibssharedir=${datadir}/lazylpsolverlibs
dist_lazylpsolverlibsshare_DATA= share/lazylpsolverlibs/stublib.sh \
                                 share/lazylpsolverlibs/filter_header.sh \
                                 share/lazylpsolverlibs/package_windows.sh \
                                 share/lazylpsolverlibs/lazylpsolverlibs.nsi
man1_MANS = share/man/man1/lazylpsolverlibs-config.1

clean-local:
	rm -f src/*.c
