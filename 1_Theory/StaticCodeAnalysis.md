#summary Static Code Analysis.
= Static code analysis =

Static code analysis is the analysis of computer software that is performed without actually executing programs built from that software. The analysis of the source code is performed using an automated tool.

More info on [http://en.wikipedia.org/wiki/Static_program_analysis Wikipedia].


== Cppcheck ==

Cppcheck is an open source static code analyzer tool for C/C++ programming languages.

The following features might be useful for Arduino code:

 * Bounds checking for array overruns
 * Classes checking. (e.g. unused functions, variable initialisation and memory duplication).
 * Memory leaks, e.g. due to lost scope without deallocation
 * Miscellaneous stylistic and performance errors

More info on [http://en.wikipedia.org/wiki/Cppcheck Wikipedia]

=== Output without errors ===
{{{
$ cppcheck --enable=all --check-config *.cpp *.h
Checking MyLib.h...
1/2 files checked 44% done
Checking MyLib.cpp...
2/2 files checked 100% done
}}}

=== When things go wrong ===
{{{
$ cppcheck --enable=all --check-config *.cpp *.h
Checking MyLib.h...
1/2 files checked 44% done
Checking MyLib.cpp...
[MyLib.cpp:69]: (error) Array '_v[2]' index 2 out of bounds
[MyLib.cpp:75]: (error) Array '_v[2]' index 2 out of bounds
2/2 files checked 100% done
}}}

=== The solution ===

Change Array {{{"short _v[2]"}}} to "{{{short _v[3]}}}" in "!MyLib.h"

 * [http://code.google.com/p/arduino-signal-filtering-library/source/detail?r=4ad15b5ad45999300324307deb0ce6495bd720b7 Commit log for this error]

== Other Tools ==

 * [http://en.wikipedia.org/wiki/List_of_tools_for_static_code_analysis List of tools for static code analysis] 
