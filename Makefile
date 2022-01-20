all: task9\task9.exe task10\task10.exe

task9\task9.exe: task9\task9_main.cpp task9\task9_func.cpp
	cl /Fetask9\task9.exe task9\task9_main.cpp task9\task9_func.cpp
task10\task10.exe: task9_func.obj task9_main.obj
	lib  /out:task10_lib.lib task9_func.obj
	link /out:task10\task10.exe task9_main.obj task10_lib.lib
clean:
	del /s /q *.exe
	del /s /q *.obj
	del /s /q *.lib