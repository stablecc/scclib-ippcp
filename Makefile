BASE = ../..

CPPFLAGS += -isystem /opt/intel/ippcp/include

NAME = importippcp
SRCS = ippcp.cc

include $(BASE)/make/sl.mk
