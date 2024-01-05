# Section 12.1: Objects and Functions

In this section, the author discusses the relationship between objects and functions in C++ programming. C++ is primarily an object-oriented programming language, and the section explores how it provides support for object-oriented programming.

- C++ as an Object-Oriented Language: The section explains that C++ is often considered an object-oriented programming language, emphasizing that it offers features that facilitate object-oriented programming.

- Features of Object-Oriented Programming: The author introduces some key features of object-oriented programming, including the use of structure definitions and function definitions. These functions typically operate on specific types of structures or objects, resembling real-world entities.

- Correspondence between Structures and Real-World Objects: The section discusses the mapping between structure definitions and real-world objects, highlighting that each structure definition in C++ corresponds to a concept in the real world, and the functions operating on these structures mimic real-world interactions.

- Examples of Object Correspondence: Specific examples, such as the Time, Point, and Rectangle structures, are provided to illustrate how they relate to real-world concepts.

- Object-Oriented Features in C++: Although not strictly necessary, C++ offers features to support object-oriented programming. These features provide an alternative syntax for tasks that can be accomplished using non-object-oriented methods, but they often lead to more concise and expressive code.

- Introduction to Member Functions: The section introduces the concept of member functions and highlights two key distinctions between member functions and other functions:
  1. Member functions are invoked on objects, resembling operations performed on objects or sending messages to objects.
  2. Member functions are declared inside the structure definition to establish an explicit relationship between the structure and the function.

- Transformation into Member Functions: The author mentions that they will convert functions from a previous chapter into member functions in the upcoming sections. The transformation process is described as mechanical, implying that it can be accomplished by following a series of steps.

- Member Functions vs. Nonmember Functions: The section notes that anything achievable with a member function can also be accomplished with a nonmember function (free-standing function), and the choice between the two depends on the specific context and advantages of each approach.

# Section 12.2: print

In this section, the author discusses the transformation of a previously defined function, print_time, into a member function for the Time structure. This transformation demonstrates how to make print_time part of the Time structure's interface.

- Original Function and Structure: The author references a structure named Time and a function named print_time, which was defined in a previous chapter. The original print_time function took a Time object as an argument and printed the time.

- Transformation to Member Function: The transformation process begins with renaming the function from print_time to Time::print, using the `::` operator to indicate that it is a member function of the Time structure. The parameter is also eliminated in favor of invoking the function on a Time object, which is achieved using the C++ keyword "this."

- Handling "this" Pointer: The author explains that "this" is a pointer to a structure and discusses the use of the "*" operator to convert it into a structure. The transformed member function assigns the value of "this" to a local variable named "time" before printing the time.

- Invoking the Member Function: To call the new version of the function, it must be invoked on a Time object, as shown in an example with a "current_time" object.

- Declaring the Member Function: The final step of the transformation involves declaring the new function inside the structure definition, using the structure's name followed by the function's name and ending with a semicolon. This declaration defines the function's interface, specifying the number and types of arguments and the return value type.

- Function Declaration and Implementation: The section emphasizes that a function declaration is a promise to the compiler that a function with the specified interface will be provided later in the program. The implementation, containing the details of how the function works, is expected to be provided to fulfill the promise. If the definition is omitted or does not match the declared interface, the compiler will generate an error.

# Section 12.3: Implicit Variable Access

In this section, the author discusses the concept of implicit variable access in C++ member functions and how it simplifies the code by allowing direct access to instance variables of the current object.

- Simplifying Member Function: The section points out that the previously transformed Time::print member function can be further simplified. Instead of creating a local variable to reference instance variables (hour, minute, and second), the function can directly access them using the object's name.

- Implicit Variable Access: The author explains that when a member function refers to instance variables without using dot notation, C++ automatically interprets it as a reference to the current object's instance variables. This feature is known as "implicit" variable access, where the object's name does not explicitly appear in the code.

- Conciseness of Member Functions: The section highlights that implicit variable access is one of the reasons member functions are often more concise than nonmember functions. It enables developers to write more expressive and compact code while maintaining clarity.

The section demonstrates the advantage of implicit variable access in member functions, leading to cleaner and more straightforward code, particularly in cases where the function primarily operates on the current object's attributes.

# Section 12.4: Another Example

In this section, the author provides another example of transforming a function into a member function, focusing on the function "increment" for the Time structure.

- Transforming "increment" to a Member Function: The author discusses the process of converting the "increment" function into a member function. This transformation involves replacing one of the parameters with the implicit parameter "this" and making variable accesses implicit.

- Modified "increment" Member Function: The transformed member function, "Time::increment," directly modifies the instance variables of the current object, incrementing the "second," adjusting "minute" and "hour" as needed when "second" or "minute" values exceed their respective limits.

- Declaring the Member Function: To declare the "increment" member function, the author suggests copying the function's first line into the structure definition and removing the "Time::" prefix. The declaration is added to the structure definition alongside other member functions.

- Invoking the Member Function: To call the "increment" member function, it must be invoked on a Time object. The section provides an example demonstrating the usage of the "increment" member function on a "current_time" object.

- Program Output: The section concludes with the expected output of the program, which showcases the updated time after invoking the "increment" and "print" member functions.

The section serves as a practical example of converting a function into a member function and demonstrates how such transformations result in cleaner and more intuitive code for manipulating Time objects.

# Section 12.5: Yet Another Example

In this section, the author presents another example of converting a nonmember function, "convert_to_seconds," into a member function for the Time structure.

- Original Nonmember Function: The section begins by showing the original version of the "convert_to_seconds" function, which takes a Time object as a parameter and calculates the total time in seconds.

- Transformation to Member Function: The author demonstrates how to convert the "convert_to_seconds" function into a member function. The modified member function doesn't require an explicit parameter, making it a part of the Time structure.

- Declaring the Implicit Parameter as Const: The author points out that the implicit parameter, "this," should be declared as const in this function since it doesn't modify the object. The placement of the "const" keyword after the parameter list is explained.

- Improved Readability with Implicit Variable Access: The section showcases how implicit variable access enhances the readability of the member function, enabling the elimination of temporary variables to simplify the code.

- Simplified Code: The final code example illustrates the further simplification of the member function, enhancing code clarity.

# Section 12.6: A More Complicated Example

In this section, the author discusses the transformation of more complex functions into member functions, highlighting the occasional complexities in the process.

- Complex Function Transformation: The author acknowledges that while transforming functions into member functions is generally a mechanical process, some complexities arise in specific cases, such as when a function operates on two Time structures.

- Handling Multiple Time Structures: The section explains that in situations where a function works with two Time structures, it's not possible to make both of them implicit parameters. Instead, one must be explicitly passed as an argument, and the other can be referred to implicitly.

- Example: The author provides an example of a function, "after," which checks if one Time structure is chronologically after another. In this case, one Time structure is implicit, and the other is passed as an argument.

- Invoking the Function: The section concludes with an example of how the "after" function is invoked, with a sentence explaining that the function's readability is enhanced through implicit variable access, making code almost readable like English.

These sections illustrate the process of converting nonmember functions into member functions, addressing both straightforward cases and more complex scenarios with multiple objects and parameters.

# Section 12.7: Constructors

In this section, the author discusses the concept of constructors in C++ and their role in creating new objects of a specific type, focusing on the Time structure as an example.

- Introduction to make_time Function: The section begins by referencing the function "make_time," which was originally defined in a previous chapter. "make_time" creates a Time object based on a given time in seconds.

- Need for Constructors: The author highlights the necessity of being able to create new objects for each new type. Functions like "make_time" are common for this purpose.

- Constructor Syntax: The section introduces the concept of constructors, special functions used for object creation. The syntax for constructors is presented, showing that the constructor has the same name as the struct (or class) and lacks a return type. The constructor's arguments remain the same as the original function.

- Object Creation and Initialization: Constructors handle object creation and initialization automatically. They eliminate the need to explicitly create new objects or return values. The new object being constructed can be referred to using the "this" keyword or implicitly.

- Accessing Instance Variables: The author explains that within the constructor, instance variables (hour, minute, second) can be accessed without any additional qualifiers because the compiler recognizes that they belong to the new object being constructed.

- Invoking the Constructor: The section illustrates how to invoke the constructor, which involves a statement that declares a variable of type Time and initializes it with the constructor. The constructor is called with an argument (e.g., "seconds"), and it initializes the instance variables of the new Time object.

- Automatic Space Allocation: The author clarifies that the system automatically allocates memory space for the new object, and the constructor is responsible for initializing its instance variables. The result is assigned to the variable, providing access to the newly created object.

The section provides a comprehensive introduction to constructors, emphasizing their role in object creation and initialization, and how they simplify the process of working with new objects in C++.

# Section 12.8: Initialize or Construct?

In this section, the author discusses two different methods for declaring and initializing objects in C++ – one using curly-braces and the other using constructors. These two approaches represent different programming styles and are influenced by the evolution of C++.

- Initialization Styles: The section begins by comparing two styles of declaring and initializing Time structures. The first style uses curly-braces to provide initial values directly within the declaration of the object, while the second style employs constructors for initialization.

- Compiler Requirements: The author highlights that when a constructor is defined for a structure, C++ enforces the use of that constructor to initialize all new structures of that type. The alternative curly-braces syntax is no longer allowed for initialization.

- Constructor Overloading: The section explains that constructors, like functions, can be overloaded, meaning that multiple constructors with the same name can exist as long as they accept different parameters. When initializing a new object, the compiler selects the constructor with matching parameters.

- Common Constructor Pattern: The section presents a common constructor pattern, where a constructor has parameters corresponding to each instance variable of the structure. The constructor assigns the values of the arguments to the instance variables during initialization.

- Invoking the Constructor: To invoke this constructor, the same syntax as before is used. However, the arguments must match the parameter types specified in the constructor's definition. For instance, when initializing a Time object, two integers and a double are required.

The section discusses the choice between curly-braces initialization and constructor-based initialization, along with the compiler's requirements when constructors are defined. Additionally, it introduces constructor overloading and a common constructor pattern for structure initialization.

# Section 12.9: One Last Example

In this section, the author presents a final example focusing on the transformation of the "add_time" function into a member function for the Time structure. This transformation involves several changes and demonstrates the usage of constructors.

- Transformation of "add_time": The section begins with the original function "add_time," which takes two Time objects as parameters and returns their sum in seconds.

- Changes to Make It a Member Function: The author outlines the steps needed to transform "add_time" into a member function. These include changing the function's name to "Time::add," replacing the first parameter with an implicit parameter, and substituting the use of "make_time" with constructor invocation.

- Resulting Member Function: The transformed member function, "Time::add," now takes an implicit parameter and utilizes constructors for object creation. It combines the results of the "convert_to_seconds" function for both objects and creates a new Time object with the sum.

- "this" and t2 Usage: The author clarifies that within the member function, the "convert_to_seconds" function is invoked without an apparent object, as the compiler recognizes that the first invocation operates on "this," and the second on "t2."

- Function Call and Return: The result of these two function calls is added and passed to the Time constructor, creating a new Time object, which is then returned by the "add" member function.

# Section 12.10: Header Files

This section discusses the concept of header files in C++ and how they help in separating the structure definition from the function implementation. It covers the structure of header files, implementation files, and main programs, providing insights into why such separation is beneficial, particularly for larger programs.

- Need for Header Files: The author explains the rationale behind using header files. Separating the structure definition from the functions makes it possible to include the structure in multiple programs, manage interactions between modules, and enable separate compilation.

- Header File Content: The section demonstrates the structure of a header file, showing that it typically contains the structure definition, including instance variables and function declarations.

- Implementation File: The author introduces the implementation file, which contains the definitions of the member functions and functions associated with the structure. The structure of Time.cpp is provided as an example.

- Main Program: The section presents a typical main program, which includes the "main" function along with any functions that are not part of the Time structure.

- Advantages of Separation: The section highlights the advantages of splitting programs into different files, such as reuse of structures in multiple programs, simplified management of interactions in large systems, and the benefits of separate compilation.

- #include and using namespace std: The author explains the role of the "#include" statement in including necessary header files. The section also discusses the usage of "using namespace std;" to simplify the code when working with the iostream library.

- Library Usage: The section concludes by mentioning the use of a library, the standard library in this case, which contains implementations for functions like "cin" and "cout." These functions are linked to your program automatically, and changes to the library are not typically needed.

This section provides insights into the organization of C++ programs, emphasizing the use of header files, implementation files, and the advantages of separating program components for larger software projects.

# Section 12.11: Glossary

**invoke**
To call a function “on” an object, in order to pass the object as an implicit parameter.

**interface**
A description of how a function is used, including the number and types of the parameters and the type of the return value.

**function declaration**
A statement that declares the interface to a function without providing the body. Declarations of member functions appear inside structure definitions even if the definitions appear outside.

**implementation**
The body of a function, or the details of how a function works.

**constructor(2)**
A special function that initializes the instance variables of a newly-created object.