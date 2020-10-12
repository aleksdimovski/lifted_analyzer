This documents shows how to install all required tools from the paper 
¨A Binary Decision Diagram Lifted Domain for Analyzing Program Families¨
if there is INTERNET CONNECTION. 

The reported results in the paper are obtained on the machine 
[Intel Core TM i7-8700 CPU@3.20GHz x 12, 8 GB Memory, 64-bit Ubuntu 18.04.5 LTS]


##################################################################
###  BDD Lifted Analyzer --- BDD-based Lifted Analyses Tool    ###
##################################################################


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
* Initialize OPAM state
	```
	opam init      		  % during initilization allow opam to modify ~/.profile
	```	
	```
	eval $(opam env)      % update the current shell environment
	```     
* OUnit

	```
	opam install ounit
	```

* APRON: numerical abstract domain library

	```
	opam install depext
	opam depext apron
	opam install apron
	```
*  Set the Library Path variable in ~/.bashrc 
	```
	gedit ~/.bashrc"
	```
Then, set the Library Path by appending:  % first find the folder where libraries of apron are installed, e.g. "/home/vmcai2021/.opam/default/share/apron/lib"
	```
	LD_LIBRARY_PATH=/home/vmcai2021/.opam/default/share/apron/lib
	export LD_LIBRARY_PATH
	```
Log out of the current session, then log in and check:
	```
	echo $LD_LIBRARY_PATH
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
```
```
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

Benchmarks are:
down.c; half2.c; heapsort.c; seq.c; [folder "loop-invgen"] 
eq1.c; eq2.c; sum01*.c; count_*.c; [folder "loops"]
hhk2008.c; gsv2008.c; gcnr2008.c; bhmr2007.c; [folder "loop-lit"] 
GCD4.c; UpAndDown.c; Log.c; java_Sequence.c; [folder "term-restricted"] 
Toulouse*.c; TelAviv*.c; Mysore.c; [folder "term-crafted"]
realpath.c; copyfd.c; [folder "simplified"]

Files that test feasibility of lifted analysis are in the folder "infeaisble":
foo-3.c; foo-5.c; ..., foo-20.c
