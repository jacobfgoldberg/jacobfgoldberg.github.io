# <center>Welcome to Jacob Goldberg's CS499 ePortfolio</center>
### <center>Computer Science Capstone Project</center>
Here you can find the artifact I chose to use as the base for my project and the enhancements I've made to it using the skills I've acquired throughout my time in the SNHU Computer Science program.

### Professional Self-Assessment

In my time throughout the Computer Science program and in working on the capstone project, I have learned a lot about software engineering, design, and cybersecurity. Through the development of software projects throughout the various courses I have taken up to this point relating to intelligently and efficiently designing secure, optimized software in multiple differnt programming languages while keeping security and client needs in mind, I have amassed a multitude of skills, confidence, and programming expertise. In my time working on these past projects I have taken on the roles of product owner, project manager, tester, and developer in order to gain a comprehensive view of what goes into the develoipment of computer software. Additionally, I have learned the importance of safety and security in software development, having practiced reverse engineering, creating test cases for software, and learning to debug and identify potentialy disasterous errors in a program's code. My experience completing coursework throughout the program has taught me how to prioritize and design software around user needs and problem-solving, work with a team to meet deadlines, communicate with fictional clients and stakeholders to uphold and adhere to their vision, manage data structures safely and effectively, design software intelligently and efficiently when possible, implement database functionality within a piece of software, and keep security in mind above all, helping me develop overall as a well-rounded software engineer.

This ePortfolio in particular and my chosen artifact's enhancements will help to demonstrate the full range of my computer science talents and abilities by showcasing my skills regarding the engineering and design of software, proper and efficient use of algorithms, secure management of data structures, implementation of database frameworks, and my ability to simply break down and explain the technical aspects of a software project to a broad audience. This demonstration of my talent as a software engineer will be presented through my code review, the original artifact developed previously in the program, and the enhancements in security and functionality I made to it in the following categories: Software Design and Engineering, Algorithms and Data Structures, and Databases.

### Original Artifact
The original artifact used as the base for my enhancements is a Java Rescue Animal Program that enables users to enter dogs and monkeys into an Animal Rescue system. My past construction of this artifact demonstrates my experience with software design and engineering, data structures, and algorithms that manage those data structures. It consists of four Java files, those being the RescueAnimal class, the Driver main class, the Dog class, and the Monkey class, with those last two deriving from the Rescue Animal class.

<code>This original artifact's files can be found <a href="https://github.com/jacobfgoldberg/jacobfgoldberg.github.io/tree/original_code">here</a>.</code>

### Code Review

The following is an informal code review of my original artifact, detailing its prexisting features and functionality as well as pointing out areas that will be targeted for enhancement. 

<code>A video of the code review can be found <a href="https://youtu.be/aZIdsyjYgkk">here</a>.</code>

### Enhancement 1 - Software Design and Engineering
The artifact I chose for the category Software Design and Engineering is a Java program that allows users to input animals into a rescue animal system, data about the animals, view a list of animals that have been taken in, and to reserve animals. The program is only partially complete and in its current state only accepts dogs and monkeys. I created this program for my IT 145 class in order to learn about Java development and best coding practices in Java. Since then, I have learned more about the Java coding language as well as other programming languages including C++. I have included this artifact in my ePortfolio as it demonstrates my proficiency in developing functioning code and meeting software requirements to solve a problem with Java. 

I have enhanced this program and further demonstrated my software design and engineering skills by recreating the program with C++. By reengineering and designing the original Java program into one written with C++, I demonstrated my understanding of software design and structure and my ability to engineer a C++ program using the Java program as a reference point. The artifact was improved in being translated to C++ as the language provides greater speed and efficiency over Java as well as a higher level of control over object and memory management. Additionally, by using C++ user input methods in place of the scanner objects used in the Java original, I have addressed the potential security risks related to the lack of input validation present in the original version of the program. 

With this code translation, I have met the following course outcomes as planned:
>Employ strategies for building collaborative environments that enable diverse audiences to support organizational decision-making in the field of computer science.

>Design and evaluate computing solutions that solve a given problem using algorithmic principles and computer science practices and standards appropriate to its solution while managing the trade-offs involved in design choices.

>Demonstrate an ability to use well-founded and innovative techniques, skills, and tools in computing practices for the purpose of implementing computer solutions that deliver value and accomplish industry-specific goals.

Challenges I faced while enhancing this project included finding ways to translate Java-exclusive functionality like case-insensitive string comparison to C++ and redesigning Java functions into C++ headers and class files. After having enhanced and modified the artifact, I learned that the user input reception methods of the original Java program were insecure and in need of addressing. By recreating the project in C++ and redesigning it in order to do so, I was able to address the security design flaw present in the original and create a more efficient and capable version of the Rescue Animal program.

<code>This enhancement's code can be found <a href="https://github.com/jacobfgoldberg/jacobfgoldberg.github.io/tree/software_design_and_engineering">here</a>.</code>

### Enhancement 2 - Algorithms and Data Structures
For the category Algorithms and Data Structures, I once again utilized the same artifact, which is the Java Rescue Animal program that allows users to submit Dogs and Monkeys to be taken in and added to a Rescue Animal system, where they can then be reserved and a list of the animals in the system can be printed. I chose this artifact to use for this category because the program is centered around the management of data structures through the use of algorithms in the code. 

The unmodified version of this program only deals with Dog and Monkey objects. These objects are stored and accessed through array-lists in the original Java code. In order to demonstrate my skills and abilities when it comes to utilizing algorithms and data structures in a project, I have enhanced the program by adding support for additional animal types, including cats and birds, as well as made it so that the user can enter their own custom animal type to be taken into the system, reserved, and listed. These new object types are stored in their own respective vectors instead of array-lists, with the custom animal types all sharing an Animal object type. This is because I rewrote the program in C++ as part of my first enhancement. As I modified and enhanced the artifact, I learned that it made more sense for each specific animal subclass (dog, monkey, cat, and bird) to have their own respective vector object associated with them, as creating a vector that could house all the different subclasses together connected by their shared parent class was beyond the scope of the enhancement, especially considering the implementation of a database system to manage objects in the next enhancement will render such a development pointless. 

As it stands, by creating the additional data types, restructuring the process of intaking a new animal to consider the additional types, and allowing the user to input their own custom animal type into the system securely using C++'s secure character input functionality, I was able to meet the following course outcomes as planned: 

>Demonstrate an ability to use well-founded and innovative techniques, skills, and tools in computing practices for the purpose of implementing computer solutions that deliver value and accomplish industry-specific goals.

>Develop a security mindset that anticipates adversarial exploits in software architecture and designs to expose potential vulnerabilities, mitigate design flaws, and ensure privacy and enhanced security of data and resources.

<code>This enhancement's code can be found <a href="https://github.com/jacobfgoldberg/jacobfgoldberg.github.io/tree/algorithms_and_data_structures">here</a>.</code>

### Enhancement 3 - Databases
For the Databases category, I used the same artifact I used for the previous two categories. This artifact is the Java Rescue Animal Program that lets users submit dogs and monkeys into an intake system. These animals were originally stored in Array-List objects which could be printed for the user to see a list of all animals in the system. I chose this artifact for my database enhancement because the original Java program was ripe with opportunity to expand its functionality through the use of a database.  

While the original Java Rescue Animal program stored dog and monkey data objects in Array-Lists managed and access within the system, the newly enhanced version of the program utilizes a database structure to store information about multiple kinds of animals. The different animal objects have been removed and replaced with an SQLite database in which animal types including dogs, monkeys, cats, and others can be managed. The program now solely consists of a C++ main class that displays a menu giving users the option to intake a new animal, print a list of all dogs, print a list of all monkeys, and print a list of all animals in the system. This enhancement showcases my ability to configure and integrate database functionality into this C++ program in order to securely and efficiently store and manage data. While modifying this artifact, I discovered the importance of input validation in order to prevent SQL injection when dealing with a database. To combat this issue, I employed prepared statements and placeholders when constructing SQL queries to make sure animal data submitted into the program by users couldn't be used by those with malicious intent to compromise the system.  

This enhancement of the original Rescue Animal program and the expansion of its functionality through the implementation of a database enabled me to meet the following course outcomes as planned: 

>Design and evaluate computing solutions that solve a given problem using algorithmic principles and computer science practices and standards appropriate to its solution while managing the trade-offs involved in design choices.    

>Demonstrate an ability to use well-founded and innovative techniques, skills, and tools in computing practices for the purpose of implementing computer solutions that deliver value and accomplish industry-specific goals. 

>Develop a security mindset that anticipates adversarial exploits in software architecture and designs to expose potential vulnerabilities, mitigate design flaws, and ensure privacy and enhanced security of data and resources.   

<code>This enhancement's code can be found <a href="https://github.com/jacobfgoldberg/jacobfgoldberg.github.io/tree/databases">here</a>.</code>

### Conclusion
All in all, my work in analyzing and enhancing my original Rescue Animal artifact in the categories of Software Design and Engineering, Algorithms and Data Structures, and Databases by rewriting the program in C++, developing a data sturcture system that accomodates and allows all kinds of animals to be entered into the system, and implementing databases to the data structure of the system has enabled me to achieve the five following program outcomes through this capstone project: 

>Employ strategies for building collaborative environments that enable diverse audiences to support organizational decision making in the field of computer science

>Design, develop, and deliver professional-quality oral, written, and visual communications that are coherent, technically sound, and appropriately adapted to specific audiences and contexts

>Design and evaluate computing solutions that solve a given problem using algorithmic principles and computer science practices and standards appropriate to its solution, while managing the trade-offs involved in design choices

>Demonstrate an ability to use well-founded and innovative techniques, skills, and tools in computing practices for the purpose of implementing computer solutions that deliver value and accomplish industry-specific goals

>Develop a security mindset that anticipates adversarial exploits in software architecture and designs to expose potential vulnerabilities, mitigate design flaws, and ensure privacy and enhanced security of data and resources
