Lab 5 Sorting Algorithms - Elliot, Frank, Jeremy


How to build the code:
//Only necessary if code has been updated since last build
> ulimit -s 819200
 // Go to the file directory. Can be found under the "Git Repositories" tab. If it is default (or at least like mine), it should be like below
> cd /home/[user]/git/lab-5-sorting-algorithm/src/
 //From here, you can build the code with the following code
> g++ lab5.cpp helper_fns.cpp ./sorts/Asort.cpp ./sorts/Bsort.cpp ./sorts/Csort.cpp ./sorts/Dsort.cpp ./sorts/Esort.cpp ./sorts/Fsort.cpp -o lab5
 //This build an object file called "lab5.out"


How to run the code:
//If not having just built code, do the same code for ulimit(ulimit) and for setting directory(cd) as above
> ./lab5
