# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.22

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:

# Disable VCS-based implicit rules.
% : %,v

# Disable VCS-based implicit rules.
% : RCS/%

# Disable VCS-based implicit rules.
% : RCS/%,v

# Disable VCS-based implicit rules.
% : SCCS/s.%

# Disable VCS-based implicit rules.
% : s.%

.SUFFIXES: .hpux_make_needs_suffix_list

# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

#Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:
.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /media/tomcat/Data/Cproject/C-

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /media/tomcat/Data/Cproject/C-/build

# Include any dependencies generated for this target.
include CMakeFiles/MyProject.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/MyProject.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/MyProject.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/MyProject.dir/flags.make

CMakeFiles/MyProject.dir/createTree.c.o: CMakeFiles/MyProject.dir/flags.make
CMakeFiles/MyProject.dir/createTree.c.o: ../createTree.c
CMakeFiles/MyProject.dir/createTree.c.o: CMakeFiles/MyProject.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/media/tomcat/Data/Cproject/C-/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/MyProject.dir/createTree.c.o"
	/usr/bin/gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/MyProject.dir/createTree.c.o -MF CMakeFiles/MyProject.dir/createTree.c.o.d -o CMakeFiles/MyProject.dir/createTree.c.o -c /media/tomcat/Data/Cproject/C-/createTree.c

CMakeFiles/MyProject.dir/createTree.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/MyProject.dir/createTree.c.i"
	/usr/bin/gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /media/tomcat/Data/Cproject/C-/createTree.c > CMakeFiles/MyProject.dir/createTree.c.i

CMakeFiles/MyProject.dir/createTree.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/MyProject.dir/createTree.c.s"
	/usr/bin/gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /media/tomcat/Data/Cproject/C-/createTree.c -o CMakeFiles/MyProject.dir/createTree.c.s

CMakeFiles/MyProject.dir/createList.c.o: CMakeFiles/MyProject.dir/flags.make
CMakeFiles/MyProject.dir/createList.c.o: ../createList.c
CMakeFiles/MyProject.dir/createList.c.o: CMakeFiles/MyProject.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/media/tomcat/Data/Cproject/C-/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building C object CMakeFiles/MyProject.dir/createList.c.o"
	/usr/bin/gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/MyProject.dir/createList.c.o -MF CMakeFiles/MyProject.dir/createList.c.o.d -o CMakeFiles/MyProject.dir/createList.c.o -c /media/tomcat/Data/Cproject/C-/createList.c

CMakeFiles/MyProject.dir/createList.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/MyProject.dir/createList.c.i"
	/usr/bin/gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /media/tomcat/Data/Cproject/C-/createList.c > CMakeFiles/MyProject.dir/createList.c.i

CMakeFiles/MyProject.dir/createList.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/MyProject.dir/createList.c.s"
	/usr/bin/gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /media/tomcat/Data/Cproject/C-/createList.c -o CMakeFiles/MyProject.dir/createList.c.s

CMakeFiles/MyProject.dir/delete_data.c.o: CMakeFiles/MyProject.dir/flags.make
CMakeFiles/MyProject.dir/delete_data.c.o: ../delete_data.c
CMakeFiles/MyProject.dir/delete_data.c.o: CMakeFiles/MyProject.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/media/tomcat/Data/Cproject/C-/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building C object CMakeFiles/MyProject.dir/delete_data.c.o"
	/usr/bin/gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/MyProject.dir/delete_data.c.o -MF CMakeFiles/MyProject.dir/delete_data.c.o.d -o CMakeFiles/MyProject.dir/delete_data.c.o -c /media/tomcat/Data/Cproject/C-/delete_data.c

CMakeFiles/MyProject.dir/delete_data.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/MyProject.dir/delete_data.c.i"
	/usr/bin/gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /media/tomcat/Data/Cproject/C-/delete_data.c > CMakeFiles/MyProject.dir/delete_data.c.i

CMakeFiles/MyProject.dir/delete_data.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/MyProject.dir/delete_data.c.s"
	/usr/bin/gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /media/tomcat/Data/Cproject/C-/delete_data.c -o CMakeFiles/MyProject.dir/delete_data.c.s

CMakeFiles/MyProject.dir/deleteTree.c.o: CMakeFiles/MyProject.dir/flags.make
CMakeFiles/MyProject.dir/deleteTree.c.o: ../deleteTree.c
CMakeFiles/MyProject.dir/deleteTree.c.o: CMakeFiles/MyProject.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/media/tomcat/Data/Cproject/C-/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building C object CMakeFiles/MyProject.dir/deleteTree.c.o"
	/usr/bin/gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/MyProject.dir/deleteTree.c.o -MF CMakeFiles/MyProject.dir/deleteTree.c.o.d -o CMakeFiles/MyProject.dir/deleteTree.c.o -c /media/tomcat/Data/Cproject/C-/deleteTree.c

CMakeFiles/MyProject.dir/deleteTree.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/MyProject.dir/deleteTree.c.i"
	/usr/bin/gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /media/tomcat/Data/Cproject/C-/deleteTree.c > CMakeFiles/MyProject.dir/deleteTree.c.i

CMakeFiles/MyProject.dir/deleteTree.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/MyProject.dir/deleteTree.c.s"
	/usr/bin/gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /media/tomcat/Data/Cproject/C-/deleteTree.c -o CMakeFiles/MyProject.dir/deleteTree.c.s

CMakeFiles/MyProject.dir/insertTree.c.o: CMakeFiles/MyProject.dir/flags.make
CMakeFiles/MyProject.dir/insertTree.c.o: ../insertTree.c
CMakeFiles/MyProject.dir/insertTree.c.o: CMakeFiles/MyProject.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/media/tomcat/Data/Cproject/C-/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building C object CMakeFiles/MyProject.dir/insertTree.c.o"
	/usr/bin/gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/MyProject.dir/insertTree.c.o -MF CMakeFiles/MyProject.dir/insertTree.c.o.d -o CMakeFiles/MyProject.dir/insertTree.c.o -c /media/tomcat/Data/Cproject/C-/insertTree.c

CMakeFiles/MyProject.dir/insertTree.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/MyProject.dir/insertTree.c.i"
	/usr/bin/gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /media/tomcat/Data/Cproject/C-/insertTree.c > CMakeFiles/MyProject.dir/insertTree.c.i

CMakeFiles/MyProject.dir/insertTree.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/MyProject.dir/insertTree.c.s"
	/usr/bin/gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /media/tomcat/Data/Cproject/C-/insertTree.c -o CMakeFiles/MyProject.dir/insertTree.c.s

CMakeFiles/MyProject.dir/password_change.c.o: CMakeFiles/MyProject.dir/flags.make
CMakeFiles/MyProject.dir/password_change.c.o: ../password_change.c
CMakeFiles/MyProject.dir/password_change.c.o: CMakeFiles/MyProject.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/media/tomcat/Data/Cproject/C-/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building C object CMakeFiles/MyProject.dir/password_change.c.o"
	/usr/bin/gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/MyProject.dir/password_change.c.o -MF CMakeFiles/MyProject.dir/password_change.c.o.d -o CMakeFiles/MyProject.dir/password_change.c.o -c /media/tomcat/Data/Cproject/C-/password_change.c

CMakeFiles/MyProject.dir/password_change.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/MyProject.dir/password_change.c.i"
	/usr/bin/gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /media/tomcat/Data/Cproject/C-/password_change.c > CMakeFiles/MyProject.dir/password_change.c.i

CMakeFiles/MyProject.dir/password_change.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/MyProject.dir/password_change.c.s"
	/usr/bin/gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /media/tomcat/Data/Cproject/C-/password_change.c -o CMakeFiles/MyProject.dir/password_change.c.s

CMakeFiles/MyProject.dir/discount_card_change.c.o: CMakeFiles/MyProject.dir/flags.make
CMakeFiles/MyProject.dir/discount_card_change.c.o: ../discount_card_change.c
CMakeFiles/MyProject.dir/discount_card_change.c.o: CMakeFiles/MyProject.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/media/tomcat/Data/Cproject/C-/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building C object CMakeFiles/MyProject.dir/discount_card_change.c.o"
	/usr/bin/gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/MyProject.dir/discount_card_change.c.o -MF CMakeFiles/MyProject.dir/discount_card_change.c.o.d -o CMakeFiles/MyProject.dir/discount_card_change.c.o -c /media/tomcat/Data/Cproject/C-/discount_card_change.c

CMakeFiles/MyProject.dir/discount_card_change.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/MyProject.dir/discount_card_change.c.i"
	/usr/bin/gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /media/tomcat/Data/Cproject/C-/discount_card_change.c > CMakeFiles/MyProject.dir/discount_card_change.c.i

CMakeFiles/MyProject.dir/discount_card_change.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/MyProject.dir/discount_card_change.c.s"
	/usr/bin/gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /media/tomcat/Data/Cproject/C-/discount_card_change.c -o CMakeFiles/MyProject.dir/discount_card_change.c.s

CMakeFiles/MyProject.dir/name_a_pass.c.o: CMakeFiles/MyProject.dir/flags.make
CMakeFiles/MyProject.dir/name_a_pass.c.o: ../name_a_pass.c
CMakeFiles/MyProject.dir/name_a_pass.c.o: CMakeFiles/MyProject.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/media/tomcat/Data/Cproject/C-/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Building C object CMakeFiles/MyProject.dir/name_a_pass.c.o"
	/usr/bin/gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/MyProject.dir/name_a_pass.c.o -MF CMakeFiles/MyProject.dir/name_a_pass.c.o.d -o CMakeFiles/MyProject.dir/name_a_pass.c.o -c /media/tomcat/Data/Cproject/C-/name_a_pass.c

CMakeFiles/MyProject.dir/name_a_pass.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/MyProject.dir/name_a_pass.c.i"
	/usr/bin/gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /media/tomcat/Data/Cproject/C-/name_a_pass.c > CMakeFiles/MyProject.dir/name_a_pass.c.i

CMakeFiles/MyProject.dir/name_a_pass.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/MyProject.dir/name_a_pass.c.s"
	/usr/bin/gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /media/tomcat/Data/Cproject/C-/name_a_pass.c -o CMakeFiles/MyProject.dir/name_a_pass.c.s

CMakeFiles/MyProject.dir/printList.c.o: CMakeFiles/MyProject.dir/flags.make
CMakeFiles/MyProject.dir/printList.c.o: ../printList.c
CMakeFiles/MyProject.dir/printList.c.o: CMakeFiles/MyProject.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/media/tomcat/Data/Cproject/C-/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_9) "Building C object CMakeFiles/MyProject.dir/printList.c.o"
	/usr/bin/gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/MyProject.dir/printList.c.o -MF CMakeFiles/MyProject.dir/printList.c.o.d -o CMakeFiles/MyProject.dir/printList.c.o -c /media/tomcat/Data/Cproject/C-/printList.c

CMakeFiles/MyProject.dir/printList.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/MyProject.dir/printList.c.i"
	/usr/bin/gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /media/tomcat/Data/Cproject/C-/printList.c > CMakeFiles/MyProject.dir/printList.c.i

CMakeFiles/MyProject.dir/printList.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/MyProject.dir/printList.c.s"
	/usr/bin/gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /media/tomcat/Data/Cproject/C-/printList.c -o CMakeFiles/MyProject.dir/printList.c.s

CMakeFiles/MyProject.dir/searchTree.c.o: CMakeFiles/MyProject.dir/flags.make
CMakeFiles/MyProject.dir/searchTree.c.o: ../searchTree.c
CMakeFiles/MyProject.dir/searchTree.c.o: CMakeFiles/MyProject.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/media/tomcat/Data/Cproject/C-/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_10) "Building C object CMakeFiles/MyProject.dir/searchTree.c.o"
	/usr/bin/gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/MyProject.dir/searchTree.c.o -MF CMakeFiles/MyProject.dir/searchTree.c.o.d -o CMakeFiles/MyProject.dir/searchTree.c.o -c /media/tomcat/Data/Cproject/C-/searchTree.c

CMakeFiles/MyProject.dir/searchTree.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/MyProject.dir/searchTree.c.i"
	/usr/bin/gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /media/tomcat/Data/Cproject/C-/searchTree.c > CMakeFiles/MyProject.dir/searchTree.c.i

CMakeFiles/MyProject.dir/searchTree.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/MyProject.dir/searchTree.c.s"
	/usr/bin/gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /media/tomcat/Data/Cproject/C-/searchTree.c -o CMakeFiles/MyProject.dir/searchTree.c.s

CMakeFiles/MyProject.dir/sum_price.c.o: CMakeFiles/MyProject.dir/flags.make
CMakeFiles/MyProject.dir/sum_price.c.o: ../sum_price.c
CMakeFiles/MyProject.dir/sum_price.c.o: CMakeFiles/MyProject.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/media/tomcat/Data/Cproject/C-/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_11) "Building C object CMakeFiles/MyProject.dir/sum_price.c.o"
	/usr/bin/gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/MyProject.dir/sum_price.c.o -MF CMakeFiles/MyProject.dir/sum_price.c.o.d -o CMakeFiles/MyProject.dir/sum_price.c.o -c /media/tomcat/Data/Cproject/C-/sum_price.c

CMakeFiles/MyProject.dir/sum_price.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/MyProject.dir/sum_price.c.i"
	/usr/bin/gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /media/tomcat/Data/Cproject/C-/sum_price.c > CMakeFiles/MyProject.dir/sum_price.c.i

CMakeFiles/MyProject.dir/sum_price.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/MyProject.dir/sum_price.c.s"
	/usr/bin/gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /media/tomcat/Data/Cproject/C-/sum_price.c -o CMakeFiles/MyProject.dir/sum_price.c.s

CMakeFiles/MyProject.dir/time_set.c.o: CMakeFiles/MyProject.dir/flags.make
CMakeFiles/MyProject.dir/time_set.c.o: ../time_set.c
CMakeFiles/MyProject.dir/time_set.c.o: CMakeFiles/MyProject.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/media/tomcat/Data/Cproject/C-/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_12) "Building C object CMakeFiles/MyProject.dir/time_set.c.o"
	/usr/bin/gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/MyProject.dir/time_set.c.o -MF CMakeFiles/MyProject.dir/time_set.c.o.d -o CMakeFiles/MyProject.dir/time_set.c.o -c /media/tomcat/Data/Cproject/C-/time_set.c

CMakeFiles/MyProject.dir/time_set.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/MyProject.dir/time_set.c.i"
	/usr/bin/gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /media/tomcat/Data/Cproject/C-/time_set.c > CMakeFiles/MyProject.dir/time_set.c.i

CMakeFiles/MyProject.dir/time_set.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/MyProject.dir/time_set.c.s"
	/usr/bin/gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /media/tomcat/Data/Cproject/C-/time_set.c -o CMakeFiles/MyProject.dir/time_set.c.s

# Object files for target MyProject
MyProject_OBJECTS = \
"CMakeFiles/MyProject.dir/createTree.c.o" \
"CMakeFiles/MyProject.dir/createList.c.o" \
"CMakeFiles/MyProject.dir/delete_data.c.o" \
"CMakeFiles/MyProject.dir/deleteTree.c.o" \
"CMakeFiles/MyProject.dir/insertTree.c.o" \
"CMakeFiles/MyProject.dir/password_change.c.o" \
"CMakeFiles/MyProject.dir/discount_card_change.c.o" \
"CMakeFiles/MyProject.dir/name_a_pass.c.o" \
"CMakeFiles/MyProject.dir/printList.c.o" \
"CMakeFiles/MyProject.dir/searchTree.c.o" \
"CMakeFiles/MyProject.dir/sum_price.c.o" \
"CMakeFiles/MyProject.dir/time_set.c.o"

# External object files for target MyProject
MyProject_EXTERNAL_OBJECTS =

MyProject: CMakeFiles/MyProject.dir/createTree.c.o
MyProject: CMakeFiles/MyProject.dir/createList.c.o
MyProject: CMakeFiles/MyProject.dir/delete_data.c.o
MyProject: CMakeFiles/MyProject.dir/deleteTree.c.o
MyProject: CMakeFiles/MyProject.dir/insertTree.c.o
MyProject: CMakeFiles/MyProject.dir/password_change.c.o
MyProject: CMakeFiles/MyProject.dir/discount_card_change.c.o
MyProject: CMakeFiles/MyProject.dir/name_a_pass.c.o
MyProject: CMakeFiles/MyProject.dir/printList.c.o
MyProject: CMakeFiles/MyProject.dir/searchTree.c.o
MyProject: CMakeFiles/MyProject.dir/sum_price.c.o
MyProject: CMakeFiles/MyProject.dir/time_set.c.o
MyProject: CMakeFiles/MyProject.dir/build.make
MyProject: CMakeFiles/MyProject.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/media/tomcat/Data/Cproject/C-/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_13) "Linking C executable MyProject"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/MyProject.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/MyProject.dir/build: MyProject
.PHONY : CMakeFiles/MyProject.dir/build

CMakeFiles/MyProject.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/MyProject.dir/cmake_clean.cmake
.PHONY : CMakeFiles/MyProject.dir/clean

CMakeFiles/MyProject.dir/depend:
	cd /media/tomcat/Data/Cproject/C-/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /media/tomcat/Data/Cproject/C- /media/tomcat/Data/Cproject/C- /media/tomcat/Data/Cproject/C-/build /media/tomcat/Data/Cproject/C-/build /media/tomcat/Data/Cproject/C-/build/CMakeFiles/MyProject.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/MyProject.dir/depend

