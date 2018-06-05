CC = gcc
EXE = program1
SRC_PATH = src
BUILD_PATH = build
#Recommended PATH
INSTALL_PATH = /usr/local/bin

#Set up vpath for sourcefolders with files and build folder
vpath %.c $(SRC_PATH)
vpath %.o $(BUILD_PATH)

#Find the sourcefiles, replace .c with .o for listing of object files
OBJ_FILES = $(patsubst $(SRC_PATH)/%.c,$(BUILD_PATH)/%.o,$(wildcard $(SRC_PATH)/*.c))

all : $(BUILD_PATH)/$(EXE)

#Create executables from all .o files
$(BUILD_PATH)/$(EXE) : $(OBJ_FILES)
	$(CC) -o $@ $^

#Compile sourcefile into object file
$(BUILD_PATH)/%.o : %.c
	@mkdir -p $(BUILD_PATH)
	$(CC) -c $< -o $@

clean :
	rm $(BUILD_PATH)/$(EXE) $(BUILD_PATH)/*.o

install : all
	mv $(BUILD_PATH)/$(EXE) $(INSTALL_PATH)
	rm $(OBJ_FILES)

uninstall :
	rm $(INSTALL_PATH)/$(EXE)

