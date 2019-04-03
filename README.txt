# lifted_analyzer --- Lifted Analyses Tool

This tool is a research prototype static analyzer designed for analyzing families of C programs. 


## Author

	Aleksandar Dimovski
	
	
# Installation

The tool requires the following applications and libraries:

* OCaml 

	```
	(sudo) apt-get install ocaml-interp
	```

* Findlib

	```
	(sudo) apt-get install ocaml-findlib
	```

* Menhir: LR(1) parser generator

	```
	(sudo) apt-get install menhir
	```
  
* Opam: https://opam.ocaml.org/doc/Install.html

	```
	(sudo) apt-get install opam
	```
  
* OUnit

	```
	opam install ounit
	```

* APRON: numerical abstract domain library

	```
	opam install apron
	```
* BDDAPRON: numerical abstract domain library

	```
	opam install bddapron
	```


* Zarith: arbitrary-precision integer operations

	```
	opam install zarith
	```


# Compiling lifted_analyzer

Once all required libraries are installed, 'ocamlbuild' can be used to build lifted_analyzer with the following command:

```
eval $(opam config env)                 % It will setup environment variables, that are necessary for the toolchain to work properly
ocamlbuild ml_float.o Main.native -use-ocamlfind -use-menhir -pkgs 'bddapron,apron,gmp,oUnit,zarith' -I utils -I banal -I domains -I frontend -I main -libs boxMPQ,octD,polkaMPQ,str,zarith,bddapron -lflags banal/ml_float.o
```

# Usage

The analyzer performs a forward reachability analysis of programs with #ifdef-s.

The following general command-line options are recognized
(showing their default value):

	 -single 							set to perform single-program analysis
	 -tuple								set to perform tuple-based lifted analysis
	 -bdd								set to perform bdd-based lifted analysis
	 -main main                         set the analyzer entry point (defaults to main)
	 -domain boxes|octagons|polyhedra   set the abstract domain (defaults to boxes)
	 -joinfwd 2                         set the widening delay in forward analysis


# Examples

enter the folder that contains the tool, and write

$ ./Main.native -tuple -domain polyhedra mytests/loop-invgen/heapsort.c

to perform tuple-based lifted analysis using Polyhedra domain of the heapsort.c file in the folder mytests/loop-invgen

$ ./Main.native -bdd -domain boxes mytests/loop-invgen/heapsort.c

to perform BDD-based lifted analysis using Intervals domain of the heapsort.c file in the folder mytests/loop-invgen
