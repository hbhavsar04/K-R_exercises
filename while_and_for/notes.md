#Notes on 3_5 loops - while and for
* use of while or for is largely personal preference
* for cases where there is no initialization or reinitialization, while is the most natural
* for is preferable when there is a simple initialization and increment size since it keeps the loop control statements close together and visible at the top of the loop
* for loops are not restricted to arithmetic progressions
	* bad style to force unrelated computations into the initialization
* standard library provides function strtol for conversions of strings to long integers
## Shell sort
The idea is that in early stages, far apart elements are compared rahter than adjacent ones
This is to eliminate large amounts of disorder quickly, so later stages have less work to do
The interval between compared elements is gradually decreased to one
Then the sort becomes and adjacent interchange method
## Comma operators
a pair of expressions separated by a comma is evaluated left to right and the type and value of the result are the type and value of the right operand
most useful in fof loops since you can place multiple expressions in the various parts
	could process two indices in parallel
	should be used sparingly, mostly when constructs are strongly related to one another
