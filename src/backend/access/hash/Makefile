#-------------------------------------------------------------------------
#
# Makefile--
#    Makefile for access/hash
#
# IDENTIFICATION
#    $PostgreSQL: pgsql/src/backend/access/hash/Makefile,v 1.15 2008/03/16 23:15:08 tgl Exp $
#
#-------------------------------------------------------------------------

subdir = src/backend/access/hash
top_builddir = ../../../..
include $(top_builddir)/src/Makefile.global

OBJS = hash.o hashfunc.o hashinsert.o hashovfl.o hashpage.o hashscan.o \
       hashsearch.o hashsort.o hashutil.o

include $(top_srcdir)/src/backend/common.mk
