/*In C, when we open a file using fopen(), then system creates a special structure (defined in <stdio.h>) that stores important information about the file, such as:
file name
file location
current position in file
mode (read/write)
status (EOF, error, etc.)

This structure is of type FILE.
A FILE pointer is a pointer that points to this structure.*/