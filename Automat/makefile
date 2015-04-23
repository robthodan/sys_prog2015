#
#		Targets zum Bauen des Tests
#

# Linken der Object-files, abhaengig von AutomatTarget und TestAutomatTarget
# flag:
# -g --> debug Informationen erzeugen
# -o --> name des output-files

makeTestAutomat: InitialTarget NumberTarget IdentifierTarget AutomatTarget TestAutomatTarget  
	g++ -g objs/Initial.o objs/Number.o objs/Identifier.o objs/Automat.o debug/TestAutomat.o -o debug/AutomatTest
	

# compilieren des Files Automat.cpp zu Automat.o, 
# das Objekt-File ist abhängig von src/Automat.cpp und src/Automat.h
# flag:make makeTestAutomat

# -c --> nur compilieren
# -g --> debug Informationen erzeugen
# -Wall --> alle meldungen erzeugen (Warning all)

AutomatTarget :  src/Automat.cpp includes/Automat.h 
	g++ -g  -c -Wall src/Automat.cpp -o objs/Automat.o 
	
InitialTarget :  src/InitialState.cpp includes/InitialState.h
	g++ -g  -c -Wall src/Initial.cpp -o objs/Initial.o 
	
NumberTarget : src/NumberState.cpp includes/NumberState.h
	g++ -g -c -Wall src/Number.cpp -o objs/Number.o
	
IdentifierTarget : src/IdentifierState.cpp includes/IdentifierState.h
	g++ -g -c -Wall src/Identifier.cpp -o objs/Identifier.o


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

