all: task1\task1.exe task2\task2.exe task3\task3.exe task4\task4.exe task5\task5.exe task6\task6.exe task7\task7.exe task8\task8.exe task9\task9.exe task10\task10.exe
task1\task1.exe: task1\task1.cpp
	cl /Fetask1\task1.exe task1\task1.cpp
task2\task2.exe: task2\task2.cpp
	cl /Fetask2\task2.exe task2\task2.cpp
task3\task3.exe: task3\task3.cpp
	cl /Fetask3\task3.exe task3\task3.cpp
task3\task3.exe: task3\task3.cpp
	cl /Fetask3\task3.exe task3\task3.cpp
task4\task4.exe: task4\task4.cpp
	cl /Fetask4\task4.exe task4\task4.cpp
task5\task5.exe: task5\task5.cpp
	cl /Fetask5\task5.exe task5\task5.cpp
task6\task6.exe: task6\task6_main.cpp task6\task6_func.cpp
	cl /Fetask6\task6.exe task6\task6_main.cpp task6\task6_func.cpp
task7\task7.exe: task7\task7_main.cpp task7\task7_func.cpp
	cl /Fetask7\task7.exe task7\task7_main.cpp task7\task7_func.cpp
task8\task8.exe: task8\task8_main.cpp task8\task8_func.cpp
	cl /Fetask8\task8.exe task8\task8_main.cpp task8\task8_func.cpp
task9\task9.exe: task9\task9_main.cpp task9\task9_func.cpp
	cl /Fetask9\task9.exe task9\task9_main.cpp task9\task9_func.cpp
task10\task10.exe: task9_func.obj task9_main.obj
	lib  /out:task10_lib.lib task9_func.obj
	link /out:task10\task10.exe task9_main.obj task10_lib.lib
clean:
	del /s /q *.exe
	del /s /q *.obj
	del /s /q *.lib