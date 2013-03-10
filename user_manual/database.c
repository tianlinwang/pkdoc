/** \page database Database

A database is a collection of tables with related data.
A table is a matrix with data.
A table in a database looks like a simple spreadsheet.
A column (data element) contains data of one and the
same kind, for example the column postcode.
A row contains the actual values for these specified columns.
For example a table with columns (Name, Age, Weight-lbs) could have a row with the values (Bob, 65, 165).
Primary Key: A primary key is unique.
A key value can not occur twice in one table.
With a key you can find at most one row.
A compound key (composite key) is a key that consists of multiple columns,
because one column is not sufficiently unique.
An index in a database resembles an index at the back of a book.


MySQL is a relational database management systems (RDBMS).
It is a computer application

\section sql_query SQL Query

SQL is a standard language for accessing databases.

MySQL uses all the standard ANSI SQL numeric data types such as INT,FLOAT(M,D) DECIMAL(M,D), DATE,DATETIME,TIME.
You can define the display length (M) and the number of decimals (D)

 most data you'll store will be in string format 

String Types: 
- CHAR(M)
- VARCHAR(M)


We have seen SQL SELECT command to fetch data from MySQL table.
We can use a conditional clause called WHERE clause to filter out results.
Using WHERE clause we can specify a selection criteria to select required 
records from a table.



*/
