# Cross Comands
ifeq ($(OS),Windows_NT)
	RM = @rmdir /S /Q
	NULL = 2>NUL
	MKDIR = @mkdir
	EXECFULL = $(EXEC).exe
	BREAK = &
else
	RM = @rm -rf
	NULL = > /dev/null
	MKDIR = @mkdir -p
	EXECFULL = $(EXEC)
	BREAK = ;
endif

# Variables
CC = gcc
EXEC = linkedList
RSRC = src
RINC = inc
OBJ = obj
OUT = bin

# Paths
SRCPATH += \
	$(wildcard $(RSRC)/*.c)

INCPATH += \
	$(RINC)

all: run
clear: clean_obj
erase: clean_all

compile:
	@if not exist $(OBJ) \
		$(MKDIR) $(OBJ) $(NULL)
	
	$(foreach source, $(SRCPATH), \
	$(CC) -I$(INCPATH) -c $(source) -o $(OBJ)/$(basename $(notdir $(source))).o $(BREAK))

linking:
	@if not exist $(OUT) \
		$(MKDIR) $(OUT) $(NULL)
	
	$(CC) $(OBJ)/*.o -o $(OUT)/$(EXECFULL)

run: clean_obj compile linking
	$(OUT)/$(EXECFULL)

clean_obj:
	@if exist $(OBJ) \
		$(RM) $(OBJ) $(NULL)

clean_all:
	@if exist $(OBJ) \
		$(RM) $(OBJ) $(NULL)

	@if exist $(OUT) \
		$(RM) $(OUT) $(NULL)