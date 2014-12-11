#summary Classes Within Classes.

= Classes Within Classes =

Based on: http://arduinoetcetera.blogspot.be/2011/01/classes-within-classes-initialiser.html

A common problem for people who write object oriented code for Arduino: instantiate an object of a class which in turn instantiates an object of another class.

== Code sample ==
http://arduino-class.googlecode.com/hg/3_CodeSamples/ClassesWithinClasses.zip

== Screenshot ==

First line: Object is the first class, it has a private number with value "1"

Second line: Widget is the second class, instantiated within Object, it has a private number with value "2"

Third line: Object prints the sum of its own number and Widget's number

http://arduino-class.googlecode.com/hg/3_CodeSamples/ClassesWithinClasses/screenshot.png 
