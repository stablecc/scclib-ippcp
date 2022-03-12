ifndef IMPORT_IPPCP
IMPORT_IPPCP := 1

# Expects libraries in /opt/intel

BLDLIBS += $(BASE)/import/ippcp

CPPFLAGS += -isystem /opt/intel/ippcp/include
SLIBS := -L /opt/intel/ippcp/lib/intel64 -lippcp $(SLIBS)

ifeq ($(BLDTYPE),debug)
SLIBS := -limportippcpd $(SLIBS)
else
SLIBS := -limportippcp $(SLIBS)
endif

endif
