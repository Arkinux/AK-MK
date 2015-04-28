# *******************************************************
# //
# //  target.mk
# //  AK-MK
# //
# //  Created by Arkinux on 15/4/28.
# //  Copyright (c) 2015Äê Arkinux. All rights reserved.
# //
# *******************************************************

# ******************************************
# you can custom your project name to "PROJ":
# PROJ    = XXX
# ******************************************
PROJ    = AK-MK
BINNAME = $(PROJ).bin

# the source file path
SRCDIR  = ./src

VPATH   = $(SRCDIR)

# ******************************************
# you can add your "xx.c" file to "SRC":
# SRC += SRCDIR/xx.c
# ******************************************
SRC :=
SRC += SRCDIR/hello.c

# the head path
INCDIR :=
INCDIR += include
