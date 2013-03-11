/** \page conversion Conversion

Each software application needs specific steps to extract
and prepare the data for conversion. See the following topics.
Once you have the prepared the data, you  can convert your former database to the Agritec format.


Steps:


1. Extract the data from your former application
following the specific instructions.

2. Compress the data in a ZIP file. Select the files, right click,
Send To..., Compress folder. DO NOT use RAR, LZ or other formats different than ZIP.

3. Using an Internet browser.

4. Enter your invitation code. If you do not have an invitation code,
   please contact Agritec to get one.

5. Enter your E-mail.

6. Select the software application that you have.

7. In File box, enter the path of the ZIP file that you have created.

8. Click Upload. Depending on the database and the Internet connection,
this action can take several minutes. Please be patient.



The conversion usually can take up to 48 hours.
When the new database is ready,
you will receive a notification via e-mail with a link to
download the new database.

The converted database is compressed in a ZIP file.
Download and unzip it to your hard disk.
 Finally, use the Database restore option of Porcitec to
add it into the Database Management system:

To restore the converted database

1. Click the link in the notification e-mail to download
  the converted database to your computer.

2. Select Open to open the ZIP file. In some Operating Systems,
   you first need to save it in your hard disk and then open it.

3. Unzip the compressed file to your hard disk (the Desktop might be a good place)

4. Execute Porcitec, click File and then Restore.

5. Click the button of Get Backup From box and select the above file.

6. Click Ok.


\section pigchamp_dos PigCHAMP DOS

PigChamp data files can easily be converted to Porcitec.
To create a batch file of your data to send to Agritec for conversion,
follow the instructions below:



Note about data integrity:

Please run Pigchamp's Data Integrity Report and fix any errors
that are important to you before you submit your database to
Agritec for conversion. If you choose not to do this,
data integrity errors will be ignored (for example a service before a weaning).



Note to herds using 1000-day format:

Before creating your Batch file, you must convert
your 1000-day date format to Month-Day format.

To change the date format in PigChamp for DOS:

1. Go to Setup

2. Go to Screen Options

3. Select Date Format = Month-Day

Note for users of PigChamp versions 2.2

First you must update your PigChamp database to PigChamp 4.0
 before it can be converted to Agritec. You will need PigChamp 4.0
 or higher. There is a utility called `Convert PigChamp 2.2'
in the Utilities menu. This converts 2.2 to 4.x and then you
can create the batch file that you need.





Note for users with a non english version of PigChamp
(spanish, french, ...)

The conversor is designed to import english batch files.
Before to generate the PigChamp reports, it is absolutely
necessary that you change temporally the language of your PigChamp.

1. Go to Setup

2. Go to Screen Options

3. Select English in Language option







1- Breeding data



To create a Batch file in PigChamp for DOS:



For Sow/Boar Records



1. Go to Reports

2. Go to Breeding Herd Reports

3. Go to History

4. Answer the series of 5 questions as follows:
5 History beginning date? -> BEGINNING

6 History ending date? -> END

7 Selection method? -> ALL

8 Output format? ->BATCH

9 Output device? -> ASCII

10 Name your file as BREEDING.TXT

11 This file will now be saved in the same directory
as your Pigchamp program.



The file created must look as follows:

\verbatim
6425A; HEADER; ; TG; ; ; ;
6425A; HEADER2; ; 0.00; 0.0; ; ; ; ; ;
6425A; 31MAY01; ENTER; FEMALE; 0; YES
6425A; 31MAY01; AI; C1216; ; 0
6425A; 22SEP01; FARROW; 11; 0; 2; ; ; ;
6425A; 09OCT01; WEAN; 9;
6425A; 15OCT01; AI; C1354; ; 0
\endverbatim


2- Growing data

For growing data, the procedure is similar:



1. Go to Reports

2. Go to Growth Reports

3. Go to History

4. In the history screen, select:

History type: select LOCATION for dynamic systems or GROUP for static systems.

History beginning date? -> BEGINNING

History ending date? -> END

Selection method? -> ALL

Output format? ->BATCH

Output device? -> ASCII

Name your file as STATIC.TXT for all in/all out data, and DYNAMIC.TXT
 for continuous flow data. This file will
now be saved in the same directory as your Pigchamp program.



Important: The filter automatically assigns the FEED account to feed events,
and SALES account to sales events from PigChamp. Porcitec needs
 to relate purchases or sales with financial accounts.
So if you use sales or feed events, then you need to go to Porcitec Options
| Accounts and define 2 accounts: FEED for feed expenses,
and SALES for pig sales. Otherwise growing performance reports
 will not show feed expenses or sales.


3- Send the data

Finally zip the created files (BREEDING.TXT, DYNAMIC.TXT, STATIC.TXT)
in a unique file and use the Agritec Services to get the new database.
See Converting the database topic.




\section pigwin32 PigWIN v3.2

Important note: This article is for the original PigWin version 2.5 or lower.
  Agrovision, a Dutch company, purchased PigWin rights in America
 in September 2005 and is selling PigManager under the PigWin name.
If you are using PigWin 'Agrovision powered', please see Import from PigManager.



PigWin uses a database called Paradox which is composed of several files.
 You must compact them and send them to Agritec Software.



1. Search for the database folder. Go to Windows | Search and enter SHISTORY.DB.
 Click Ok and you will see the folder where this file is located.
Other files that you can find in this folder are: SOWS.DB, MATES.DB or FARRS.DB.

2. Compact the entire folder using Winzip or any other similar tools.
If you use Windows XP or Vista, you can simply click on this folder
using the right button of the mouse and you will see a
list of options to compress the folder.

3. Use the Agritec Services to get the new database.
See Converting the database topic.

\section pigwin6 PigWIN v6.0 or higher

then email me all files in a PigWin sub-folder that contains BASISVKN.DB

Here is the info on converting to PigWin

 
If you have PigWIN v3.2, then email me the whole folder in PigWin that contains SHISTORY.DB

If you have PigWIN v6.0 or higher, then email me the whole folder in PigWin that contains BASISVKN.DB

You should compress the whole folder first, then send me the zipped file.

\section swinebooks SwineBooks

SwineBooks uses a database called Microsoft SQL Server
which is composed of two files.



1. Compact your database using Winzip or any other similar
zip tool. If you use Windows XP or Vista, you can simply
click on this file using the right button of the mouse and
you will see a list of options to compress the folder.
The database usually is located at
\verbatim
 C:\Program Files\SwineBooks Pro
\endverbatim
 directory.
Search the file for the farm name. You will find 2
files with the same name, usually  something like
MyFarm.swpo and MyFarm\_log.ldf.

2. Use the Agritec Services to get your new database.
   See Converting the database topic.

\section care3000 PigCHAMP CARE 3000

The initial version of PigCare was owned by PIC and
uses a database called Paradox which is composed of several files.
You must compact them and send them to Agritec Software.

See PigCare 3000 if you have purchased PigCare later than 2005.



1. Search for the database folder. Go to Windows |
Search and enter EVENTS.DBF. Click Ok and you will
see the folder where this file is located. Other files
in this folder are: BOAR.DBF or SOW.DBF.

2. Compact the entire folder using Winzip or
   any other similar tools. If you use Windows XP or
   Vista, you can simply click on this folder using the
   right button of the mouse and you will see a
  list of options to compress the folder.

3. Use the Agritec Services to get the new database.
   See Converting the database topic.



To export data from the PigCHAMP Care 3000 program,
   follow the instructions below:

1. Click on the File Menu

2. Select Export.  A menu will appear to the right

3. Select PigCHAMP Farm Data File (*.pcf3).

4. Select the location in which to save the file.

5. Compact the above pcf3 file using Winzip or any other similar tools.
   If you use Windows XP or Vista, you can simply click on this folder
   using the right button of the mouse and you will see a
   list of options to compress the folder.

6. Use the Agritec Services to get the new database.
   See Converting the database topic.

\section pigmanager PigManager

PigManager or PigWIN6
PigManager uses a database called Paradox which is
   composed of several files. You must compact
  them and send them to Agritec Software.



1. Search for the database folder. You can find them
  usually at
\begin{verbatim}
 C:\Program Files\PigManager\Ibms\Bd\<Farm ID>
\end{verbatim}
  where \texttt{ <Farm ID>} is the name or number of the farm, for example
  \begin{verbatim}
 C:\Program Files\PigManager\Ibms\Bd\00001
\end{verbatim}
   f you cannot find it, go to Windows | Search and enter BASISVKN.
   Click Ok and you will see the folder where this file is located.

2. Compact the entire folder using Winzip or any other
   similar tools. If you use Windows XP or Vista, you can simply
   click on this folder using the right button of
  the mouse and you will see a list of options to compress the folder.

3. Use the Agritec Services to get the new database.
   See Converting the database topic.

\section winpig WinPig

To export data from the WinPig (Agrosoft), follow the instructions below:

1. Install PDF Creator in your computer.
   You can download it from 
\verbatim
http://sourceforge.net/projects/pdfcreator/
\endverbatim

2. Start WinPig and print the following reports
   selecting PDFCreator as printer:

Registration of sows\_Entered.pdf  f

Registration of sows\_Served.pdf  f

Registration of sows\_Farrowed.pdf  f

Registration of sows\_Weaned.pdf  f

Registration of sows\_Removed.pdf  f

3. Compact the above files in a zip file

4. Use the Agritec Services to get the new database.
   See Converting the database topic.

\section metafarms MetaFarms

\section herdsman HERDSMAN

 */
