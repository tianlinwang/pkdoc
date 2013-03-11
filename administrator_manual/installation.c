/** \page installation Installation

\section prerequisites Prerequisites
\subsection apache Apache
Apache 2.2.X

Here is the step-by-step instructions:
1. Download and Unpack.
   Go to <http://www.apache.org/dist/httpd/binaries/win32> and choose a mirror.
    You want the latest win32-x86-no_ssl  ``MSI Installer Package'' release.
   Here is one 
   httpd-2.2.17-win32-x86-no_ssl,msi
2. Install
   When you install Apache, you'll get
   a prompt for server Information.  Choose appropriate values
   \verbatim
     Network Domain: localhost
     Server Name: localhost
     Admin Email: your email address
     [checked]: for All Users, on Port 80, as a Service
   \endverbatim
3. Starting and Stopping the server.
   After installing, Apache2 automatically starts. 
   The start icon in the System Tray means it started.
   The stop icon means the ``Monitor Apache Servers''
   is running, but Apache2 isn't started.

   You can easily start/stop/restart Apache and Apache2
   via that icon in your System Tray. 
   If you get ``The requested operation has failed!'' error while starting apache
   use the ``Test Configuration'' shortcut in the Start Menu to find the error
   (if the text window pops up then closes before you can
   read it, your config file is fine). 
4. Testing.
   Now the ultimate test. To see if it's serving. Open your browser
   and head to: http://localhost/

   If it shows the It works! you have your server software installed and running.
5. Making Apache point to your files.
   Edit C:/Program Files/Apache Software Foundation/Apache2.2/conf/httpd.conf
   and search for DocumentRoot. 
   Change it from something like DocumentRoot
   ``C:/Program Files/Apache Software Foundation/Apache2.2/htdocs''
   to the location where your HTML files and site are located. 
   In my case: DocumentRoot ``C:/public_html''
   Then scroll down about one page and change: 
   <Directory ``C:/Program Files/Apache Software Foundation/Apache2.2/htdocs''>
   to point to the same location you set DocumentRoot to in the last step.
   Restart apache to make the changes take effect.


\subsection mysql MySQL
Here is the step-by-step instructions:

1. Download and Unpack.

   Download MySQL from http://dev.mysql.com/downloads/mysql/5.1.html.
   Just make sure you get a Windows Essentials (x86) binary version. (after you click the ``pick a mirror'', 
   if it asks you to login, scroll down
   a little and click the ``No thanks, just take me to the downloads!'' link under the login form)
   mysql-essential-5.1.52-win32.msi
2. Install
   Run the MSI file and use the following settings
   + Typical Setup</li>
   + Skip Sign-Up</li>
   + make sure ``Configure the MySQL Server now'' is checked</li>
   + ``Detailed Configuration''</li>
   + ``Developer Machine''</li>
   + ``Multifunctional Database''</li>
   + ``InnoDB Tablespace Settings'' - leave everything default</li>
   + ''Decision Support (DSS)/OLAP''</li>
   + make sure ``Enable TCP/IP Networking''
     is checked and leave the port number at 3306 (at this point, if you have a firewall,
     it will usually try to access itself on the localhost)
     Leave ``Enable Strict Mode'' checked</li>
   + ``Standard Character Set''</li>
   + check ``Install As Windows Service''
     and I would recommend leaving ``Launch the MySQL Server automatically'' checked.</li>
   + enter a root password (and remember/write it down)
     and I would recommend leaving ``Enable root access from remote machines'' unchecked</li>
   + then hit ``execute'' and it'll install and set it up.</li>

\subsection php PHP

Here is the step-by-step instructions:

<OL>
<li>Download and Unpack.

Download and install PHP from http://www.php.net/downloads.php,
you should grab the newest 5.x.x Windows Binaries zip package that will work on apache.
Here is one 
php-5.2.14-Win32-VC6-x86

 Unzip it to C:\\php.  Rename \\C:\\php\\php.ini-recommended to php.ini 
</li>

<li> Edit php.ini
Edit php.ini in using a  text editor and look for doc\_root,
 then change it to doc_root = "C\\public_html''

Look for  the extension_dir and change it to 
\verbatim
extension_dir = "C:\\php\\ext''
\endverbatim

If you are going to be using your server for testing, i recommend (this is optional)
 you search and change the error reporting to give you info on any errors, notices, or bad coding. If you want to enable this type of stuff, search for error_reporting for and change:
error_reporting = E_ALL \& ~E_NOTICE
</li>

<li>Edit httpd.conf.
At the very end of the file add the following lines: 

\verbatim
	LoadModule php5_module "C:/php/php5apache2_2.dll"
	AddType application/x-httpd-php .php
	PHPIniDir "C:/php"
\endverbatim

To get Apache to automatically look for an index.php, search httpd.conf for
   DirectoryIndex and add the files you want apache to look for when a directory is loaded. It looks like:
\verbatim
<IfModule dir_module>
     DirectoryIndex index.php index.html
</IfModule>
\endverbatim
</li>

<li>Testing
Restart Apache. Create a test.php file and save it in  in C:\\public_html directory.
The test.php contains the following three lines:

\verbatim
<?php
phpinfo();
?>
\endverbatim
Load the file in your browser like http://localhost/test.php
</li>
</ol>


\section pigknows PigKnows

\subsection library C++ Library

\subsection install_command  Command-line Command

\subsection web_interface Web Interface

\section getting_started Getting Started
First of all, create a database user PigKnowsAdmin using the following commands:
\verbatim
mysql -uroot -prootPassWord mysql
create user 'PigKnowsAdmin'@'localhost' identified by 'NewPassWord';
grant all privileges on *.* to 'PigKnowsAdmin'@'localhost' with grant option;
\endverbatim
\subsection pigknows_db Craete the database 'pigknows'
\verbatim
pigknows_db.php localhost root rootPassWord
\endverbatim

\subsection demo Create a test
*/
