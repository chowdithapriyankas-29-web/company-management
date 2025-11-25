
Staff Management System

Abstract

The Staff Management System is a simple, terminal-based application developed in C for managing employee records efficiently. The system provides core functionalities such as adding new staff details, searching for existing records by ID, updating information, viewing all stored records, and deleting entries when needed. All staff data is stored persistently in a text-based .txt file, ensuring that information remains available across multiple program sessions.

Designed for ease of use, the application follows a menu-driven interface, making it suitable for beginners learning file handling, data structures, and control flow in C. This project demonstrates essential programming concepts in a practical and easy-to-understand format.




Features of the Program

Add new staff records including:

ID

Name

Department

Salary


View all stored staff records in a clean list

Search for staff by ID

Update existing staff information

Delete staff records from the system

Persistent storage using a .txt file

Automatically loads data on startup if file exists

Fully terminal-based interface

Beginner-friendly program structure



Technical Requirements

1. System Requirements

Operating System: Windows / Linux / macOS

Command-line/terminal environment

Minimum RAM: 4 MB

Minimal disk space for the .txt file


2. Software Requirements

C Compiler: GCC / MinGW / Clang / MSVC

Text editor or IDE (VS Code, Dev-C++, CodeBlocks, Vim, etc.)

Optional: Make tool for automation


3. Programming Requirements

Language: C

Basic understanding of file handling and structures



Functional Requirements

1. User Interface

Operates entirely through the terminal

Clearly displays all menu options

Accepts and validates user inputs

Smooth navigation between different operations


2. Staff Record Operations

Add Staff: Enter and save new employee details

Search Staff: Retrieve staff information by ID

View Staff: Display all stored records

Update Staff: Modify existing staff information

Delete Staff: Remove a staff entry from the system


3. Data Management

Stores information in a persistent staff_data.txt file

Ensures that data remains available across multiple sessions

Automatically creates file when saving for the first time



---

File Handling Requirements

Read/write access to the working directory

Staff records stored in text format in staff_data.txt

Program creates the file automatically if missing



---

Compilation Requirements

Code must compile without errors

Recommended compiler flag:

-Wall

to display all warnings



---

How to Run the Program

1. Compile the Program

Open your terminal inside the project directory and run:

gcc staff_management.c -o staff_management

2. Run the Executable

On Linux/macOS:

./staff_management

On Windows:

staff_management.exe


<img width="326" height="308" alt="Screenshot 2025-11-25 124731" src="https://github.com/user-attachments/assets/aaf966ae-e922-4487-b27c-456885066c9e" />
<img width="325" height="325" alt="Screenshot 2025-11-25 124807" src="https://github.com/user-attachments/assets/f7b19e39-7193-4cfa-9fad-56f179434cfb" />


<img width="354" height="451" alt="Screenshot 2025-11-25 124826" src="https://github.com/user-attachments/assets/6a1e8087-478e-4fd3-a263-62cc1efc0bd6" />

<img width="347" height="701" alt="Screenshot 2025-11-25 124845" src="https://github.com/user-attachments/assets/7e4e0c0b-aa0f-415c-b483-41660bc1ded5" />
<img width="332" height="222" alt="Screenshot 2025-11-25 124853" src="https://github.com/user-attachments/assets/fc23913d-672e-47ac-b9bd-ab0c4c8d33b7" />
