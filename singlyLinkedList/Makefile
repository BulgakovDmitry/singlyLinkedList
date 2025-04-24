Compiler = g++
Target   = fdsefghjgfdgthyj

SRC		 = src/
B		 = build/
H        = headers/
M        = myLib/

Flags	 = -D _DEBUG -ggdb3 -std=c++17 -O0 -Wall -Wextra -Weffc++ -Waggressive-loop-optimizations -Wc++14-compat -Wmissing-declarations \
		   -Wcast-align -Wcast-qual -Wchar-subscripts -Wconditionally-supported -Wctor-dtor-privacy -Wempty-body -Wfloat-equal          \
		   -Wformat-nonliteral -Wformat-security -Wformat-signedness -Wformat=2 -Winline -Wlogical-op -Wnon-virtual-dtor -Wopenmp-simd  \
		   -Woverloaded-virtual -Wpacked -Wpointer-arith -Winit-self -Wredundant-decls -Wshadow -Wsign-promo -Wstrict-null-sentinel     \
		   -Wstrict-overflow=2 -Wsuggest-attribute=noreturn -Wsuggest-final-methods -Wsuggest-final-types -Wsuggest-override            \
		   -Wswitch-default -Wswitch-enum -Wsync-nand -Wundef -Wunreachable-code -Wunused -Wuseless-cast -Wvariadic-macros              \
		   -Wno-literal-suffix -Wno-missing-field-initializers -Wno-narrowing -Wno-old-style-cast -Wno-varargs -Wstack-protector        
#SFML_FLAGS -lsfml-graphics -lsfml-window -lsfml-system -lsfml-audio 
#==================================================================================
#----------------------------------------------------------------------------------
#==================================================================================

list: 	$(B)listMain.o $(B)listDump.o $(B)listStruct.o $(B)listFunction.o $(B)myLib.o
	$(Compiler) $(B)listMain.o $(B)listDump.o $(B)listStruct.o $(B)listFunction.o $(B)myLib.o -o list.out $(Flags)

#----------------------------------------------------------------------------------
$(B)listMain.o :		$(SRC)listMain.cpp		\
						$(H)listDump.hpp		\
						$(H)listFunction.hpp	\
						$(H)listStruct.hpp			

	$(Compiler) -c $(SRC)listMain.cpp -o $(B)listMain.o $(Flags)
#----------------------------------------------------------------------------------

$(B)listDump.o: 	$(SRC)listDump.cpp		\
						$(H)listDump.hpp	

	$(Compiler) -c $(SRC)listDump.cpp -o $(B)listDump.o $(Flags)
#----------------------------------------------------------------------------------

$(B)listFunction.o: $(SRC)listFunction.cpp		\
						$(H)listFunction.hpp	

	$(Compiler) -c $(SRC)listFunction.cpp -o $(B)listFunction.o $(Flags)
#----------------------------------------------------------------------------------

$(B)listStruct.o: $(SRC)listStruct.cpp		\
						$(H)listStruct.hpp	

	$(Compiler) -c $(SRC)listStruct.cpp -o $(B)listStruct.o $(Flags)
#----------------------------------------------------------------------------------

$(B)myLib.o: $(M)myLib.cpp		\
				$(M)myLib.hpp

	$(Compiler) -c $(M)myLib.cpp -o $(B)myLib.o $(Flags)

#==================================================================================
#----------------------------------------------------------------------------------
#==================================================================================
run: list
	./list.out
#----------------------------------------------------------------------------------

clean:
	rm -f $(B)*
#----------------------------------------------------------------------------------
