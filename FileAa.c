/*
    Author  : Umair Farooq
    Program : File Input/Output
*/

/*In C programming, File I/O (Input/Output) means reading
 data from a file or writing data into a file.

Question: Why files

Normally, you use:
printf() → output to screen
scanf() → input from keyboard

=> When a program runs, any data you enter or print using scanf() or printf() is temporary.
   As soon as the program ends, all data is lost.

=> Data saved in a file stays even after the program ends.
Example: saving student records, bills, login data.

Question: Types of Files

1. Text files (.txt,.c) 
→ store data as readable characters ie textual data

2. Binary files (.bin,.exe.mp3) 
→ store data in binary format (not human-readable).

Question: What to do in file I/O

1. Creating a new file
2. Opening an existing file
3. Closing a file
4. Reading  and writing information from a file


Question: Functions Used in File I/O

Function	Description
fopen()	    Opens a file
fprintf()	Instead of printing on the screen, it prints into a file.
fscanf()	Reads data from a file

fgetc()   	Reads a single character from a file.
fputc() 	Writes a single character to a file

fgets() 	Reads a string from a file
fputs() 	Writes a string to a file

fclose()	Closes a file

Question: File Opening Modes
Mode	Meaning
"r"	    Open for reading (file must exist)
"w"   	Open for writing (creates or overwrites file)
        It erases all old data and starts writing from the beginning.

"a" 	Open for appending (adds data to end of file)

"r+"	Read and write (file must exist)
"w+"	Read and write (creates or overwrites file)
"a+"	Read and append (creates if not exist)

 */