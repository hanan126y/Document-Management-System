# Document Management System

## Introduction

The Document Management System is a C++ Object-Oriented Programming (OOP) based project designed to manage digital documents efficiently. The system allows users to create, search, view, delete, and save documents using file handling techniques.

This project was developed as a lab project for the Object-Oriented Programming course and demonstrates the practical implementation of major OOP concepts in C++.

---

# Features

* Add Documents
* View All Documents
* Search Documents by ID
* Search Documents by Title
* Delete Documents
* Save Documents to File
* Multiple Document Types
* Organized Multi-File Project Structure

---

# OOP Concepts Used

## Encapsulation

Private and protected data members are used to secure document data.

## Inheritance

`TextDocument` and `PDFDocument` classes inherit from the base `Document` class.

## Abstraction

The `Document` class is designed as an abstract class using virtual functions.

## Static Polymorphism

Function overloading is used in document searching functions.

## Dynamic Polymorphism

Virtual functions are used to achieve runtime polymorphism.

## File Handling

Documents are stored permanently using file handling (`ofstream` and `ifstream`).

---

# Technologies Used

* C++
* Object-Oriented Programming
* File Handling
* GitHub
* Visual Studio Code

---

# Project Structure

main.cpp
Document.h
Document.cpp
TextDocument.h
TextDocument.cpp
PDFDocument.h
PDFDocument.cpp
DocumentManager.h
DocumentManager.cpp
FileHandler.h
FileHandler.cpp
documents.txt

---

# How to Run

## Compile

```bash
g++ main.cpp Document.cpp TextDocument.cpp PDFDocument.cpp DocumentManager.cpp FileHandler.cpp -o dms
```

## Run

```bash
./dms
```

---

# Program Functionalities

1. Add new documents
2. View existing documents
3. Search documents
4. Delete documents
5. Save documents into file

---

# Team Members

* Member 1 — Base Classes & Inheritance
* Member 2 — File Handling
* Member 3 — Menu System & Search Functions
* Member 4 — GitHub Management & Presentation

---

# Challenges Faced

* Managing multiple source/header files
* Understanding runtime polymorphism
* Implementing file handling
* Organizing modular code structure
* GitHub collaboration

---

# Future Improvements

* GUI-based application
* User authentication system
* Database integration
* Cloud document storage
* Encryption and security features

---

# Conclusion

This project provided practical experience in implementing Object-Oriented Programming concepts using C++. It improved understanding of inheritance, abstraction, polymorphism, encapsulation, and file handling through a real-world style application.

