#
#		Targets zum Bauen des Tests
#

# Linken der Object-files, abhaengig von AutomatTarget und TestAutomatTarget
# flag:
# -g --> debug Informationen erzeugen
# -o --> name des output-files

makeTestAutomat: SpecialTarget CommentTarget AsignTarget TestScannerTarget InitialTarget NumberTarget IdentifierTarget AutomatTarget TestAutomatTarget  
	g++ -g objs/SpecialState.o objs/CommentState.o objs/AsignState.o objs/TestScanner.o objs/InitialState.o objs/NumberState.o objs/IdentifierState.o objs/Automat.o debug/TestAutomat.o -o debug/AutomatTest
	

# compilieren des Files Automat.cpp zu Automat.o, 
# das Objekt-File ist abhängig von src/Automat.cpp und src/Automat.h
# flag:make makeTestAutomat

# -c --> nur compilieren
# -g --> debug Informationen erzeugen
# -Wall --> alle meldungen erzeugen (Warning all)

AutomatTarget :  src/Automat.cpp includes/Automat.h 
	g++ -g  -c -Wall src/Automat.cpp -o objs/Automat.o 
	
InitialTarget :  src/InitialState.cpp includes/InitialState.h
	g++ -g  -c -Wall src/InitialState.cpp -o objs/InitialState.o 
	
NumberTarget : src/NumberState.cpp includes/NumberState.h
	g++ -g -c -Wall src/NumberState.cpp -o objs/NumberState.o
	
IdentifierTarget : src/IdentifierState.cpp includes/IdentifierState.h
	g++ -g -c -Wall src/IdentifierState.cpp -o objs/IdentifierState.o

AsignTarget: src/AsignState.cpp includes/AsignState.h
	g++ -g -c -Wall src/AsignState.cpp -o objs/AsignState.o
	
CommentTarget: src/CommentState.cpp includes/CommentState.h
	g++ -g -c -Wall src/CommentState.cpp -o objs/CommentState.o
	
SpecialTarget: src/SpecialState.cpp includes/SpecialState.h
	g++ -g -c -Wall src/SpecialState.cpp -o objs/SpecialState.o
	
TestScannerTarget : src/TestScanner/TestScanner.cpp includes/TestScanner/TestScanner.h
	g++ -g -c -Wall src/TestScanner/TestScanner.cpp -o objs/TestScanner.o
	


# TestAutomat.o ist abhängig von src/TestAutomat.cpp und src/Automat.h
TestAutomatTarget :  src/TestAutomat.cpp includes/Automat.h
	g++ -g  -c -Wall src/TestAutomat.cpp  -o debug/TestAutomat.o  



# loeschen aller files im verzeichnis obj und debug, dann neu erzeugen

cleanAutomat:
	rm -f objs/*.o
	rm -f debug/*
	$(MAKE) makeTestAutomat
	
	
# dieses Target wird vom makefile des Gesamtprojekts verwendet
# objs fuer Gesamtprojekt loeschen und dann neu erzeugen
AutomatOBJTarget:
	$(MAKE) AutomatTarget

