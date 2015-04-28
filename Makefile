# *******************************************************
# //
# //  Makefile
# //  AK-MK
# //
# //  Created by Arkinux on 15/4/28.
# //  Copyright (c) 2015Äê Arkinux. All rights reserved.
# //
# *******************************************************

# **********************************************
# Build Options
# **********************************************
CC          = gcc

# **********************************************
# target.mk
# **********************************************
include target.mk

# **********************************************
# Directories
# **********************************************
OBJDIR      = ./obj.$(PROJ)
BINDIR      = ./bin.$(PROJ)

OBJ_O       = $(notdir $(patsubst %.c, %.o, $(SRC)))
OBJ         = $(foreach file, $(OBJ_O), $(OBJDIR)/$(file))

# **********************************************
# Compiler and linker options
# **********************************************
INCLUDE = $(foreach dir, $(INCDIR), -I$(dir))

CC_OPTS     += $(INCLUDE)
CC_OPTS     := $(CC_OPTS) -g
CC_OPTS     += -Wundef

# **********************************************
# Rules
# **********************************************
.PHONY : all clean setup bin

all: setup
	@$(MAKE) bin
	@echo -e "\033[42;4m make all done! \033[0m"

setup:
	@echo "PROJ    : $(PROJ)"
	@echo "BINNAME : $(BINNAME)"
	mkdir -p $(OBJDIR)
	mkdir -p $(BINDIR)

bin: $(OBJ)
	@echo "Linking console executable: $(BINDIR)/$(BINNAME)"
	@$(CC) $(OBJ) $(CC_OPTS) $(LD_OPTS) -o $(BINDIR)/$(BINNAME)
	@echo -e "\033[43;4m Linking Complete! \033[0m"

$(OBJ): $(OBJDIR)/%.o : %.c
	@echo "[Compiling $<]"
	@$(CC) $(CC_OPTS) -MM $< | sed -e 's/\(.*\)\.o/\$$\(OBJDIR\)\/\1.o/g' > $(@:.o=.d)
	@$(CC) $(CC_OPTS) -o $@ -c $<;

clean:
	@echo "Clean project ..."
	@rm -rf $(OBJDIR)
	@rm -rf $(BINDIR)
