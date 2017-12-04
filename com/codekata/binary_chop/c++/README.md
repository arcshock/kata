### Overview
This kata is focusing on the types of logical errors that one makes while implementing the binary search algorithm.

### Goals


1. As you’re coding each algorithm, keep a note of the kinds of error you encounter. A binary search is a ripe breeding ground for “off by one” and fencepost errors. As you progress through the week, see if the frequency of these errors decreases (that is, do you learn from experience in one technique when it comes to coding with a different technique?).

2. What can you say about the relative merits of the various techniques you’ve chosen? Which is the most likely to make it in to production code? Which was the most fun to write? Which was the hardest to get working? And for all these questions, ask yourself “why?”.

3. It’s fairly hard to come up with five unique approaches to a binary chop. How did you go about coming up with approaches four and five? What techniques did you use to fire those “off the wall” neurons?
	

### Build

>g++ --std=c++14 -I Catch2/single_include/ chop.cpp chop.hpp test_binary_chop.cpp

### Reference
http://codekata.com/kata/kata02-karate-chop/