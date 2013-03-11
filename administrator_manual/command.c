/** \page command Command-line Command

Each report or chart in PigKnows is a standalone application
which can be executed at the command line. These applications are called as command-prompt command
in Microsoft Windows or command-line command in Unix.
They are installed in pigknows_home/bin directory.

We can use these commands to create reports and charts in the report repository.

See the articles \cite GrSh:302a and \cite KoSh:303.



\section admin_inventory admin_inventory
\addindex admin_inventory
The command \c admin_inventory generate the 'Performance Monitor' report,
one of the breeding herd reports.

\par Synopsis
\verbatim
Usage: admin_inventory
       server        [localhost]
       customer      customerID
       user          admin_userID
       password      admin_secret
       language      [en | es | zh | de | fr | ro | pl | pt | nl]
       farm          farmID [A | A+B | A,B | A;B | _FG] 
       category      [sow | farm | farmgroup | user]
       webrootdir    [default | /pigknows]
       outputformat  [default | html | excel | pdf | txt | csv]
       fontsize      [default]
\endverbatim

\par Description
1. \a server specifies the database server name. The default is \c localhost.
2. \a customer specifies the customerID in uppercase.
3. \a user specifies the userID registered registered in \ref control_panel.
4. \a password specifies the secret password to access to the database.
5. \a language specified the language for displaying. The default is \c en.
6. \a farm specifies farmID in uppercase.
7. \a category specifies the category. The available categories are sow, farm, and user.
8. \a webrootdir specifies the web root directory. the default is \c /pigknows.
9. \a outputformat specifies the output format the default is \c html.
10. \a fontsize specifies the font size.

\sa \ref piglet_inventory, \ref pregnant_sow_inventory, \reg gilts_pool, and \ref farm_explorer. 

\section batch_data_import batch_data_import
\addindex batch_data_import
The command \c admin_inventory generate the 'Performance Monitor' report,
one of the breeding herd reports.

\par Synopsis
\verbatim
Usage: batch_data_import
       server        [localhost]
       customer      customerID
       user          userID
       password      secret
       language      [en | es | zh | de | fr | ro | pl | pt | nl]
       farm          farmID [A | A+B | A,B | A;B | _FG]
       batchname     batch_name
       batchtype     [EXCEL | PKLITE]
       action        [insert | update | delete]
       webrootdir    [default | /pigknows]
       datafilename  data_file_name
\endverbatim

\par Description
1. \a server specifies the database server name. The default is \c localhost.
2. \a customer specifies the customerID in uppercase.
3. \a user specifies the userID registered registered in \ref control_panel.
4. \a password specifies the secret password to access to the database.
5. \a language specified the language for displaying. The default is \c en.
6. \a farm specifies farmID in uppercase.
7. \a category specifies the category.
8. \a webrootdir specifies the web root directory. the default is \c /pigknows.
9. \a outputformat specifies the output format the default is \c html.
10. \a fontsize specifies the font size.



\sa \ref sow_history and \ref boar_history.

\section benchmark_onetoall benchmark_onetoall
\addindex benchmark_onetoall
The command \c admin_inventory generate the 'Performance Monitor' report,
one of the breeding herd reports.

\par Synopsis
\verbatim
Usage: benchmark_onetoall
       server        [localhost]
       customer      customerID
       user          userID
       password      secret
       language      [en | es | zh | de | fr | ro | pl | pt | nl]
       farm          farmID [A | A+B | A,B | A;B | _FG]
       database      database_list [ALL | DB1+DB2]
       lastday       [2008-12-31]
       period        [1 month | 1 quarter | 365 days]
       upper         [5 | 5% | ALL]
       lower         [10 | 10% | ALL]
       variables     [ALL | Standard List | var1,var2]
       farmsize      minimum_inventory [1000]
       farmloc       farm_location [US | CA]
       farmout       farm_list_to_exclude [NONE | A,B,C]
       farmin        farm_list_to_include [ALL | A,B,C]
       dateformat    [default | %Y-%m-%d]
       webrootdir    [default | /pigknows]
       outputformat  [default | html | excel | pdf | txt | csv]
       fontsize      [default]
\endverbatim

\par Description
1. \a server specifies the database server name. The default is \c localhost.
2. \a customer specifies the customerID in uppercase.
3. \a user specifies the userID registered registered in \ref control_panel.
4. \a password specifies the secret password to access to the database.
5. \a language specified the language for displaying. The default is \c en.
6. \a farm specifies farmID in uppercase.
7. \a category specifies the category.
8. \a webrootdir specifies the web root directory. the default is \c /pigknows.
9. \a outputformat specifies the output format the default is \c html.
10. \a fontsize specifies the font size.



\sa \ref benchmark_onetoone, \ref benchmark_summary.

\section benchmark_onetoone benchmark_onetoone
\addindex benchmark_onetoone
The command \c admin_inventory generate the 'Performance Monitor' report,
one of the breeding herd reports.

\par Synopsis
\verbatim
Usage: benchmark_onetoone
       server        [localhost]
       customer      customerID
       user          userID
       password      secret
       language      [en | es | zh | de | fr | ro | pl | pt | nl]
       database      database [db | db1+db2]
       lastday       [2008-12-31]
       period        [1 month | 1 quarter | 365 days]
       outputby      output_orientation [rank | farm | variable]
       ncolumn       #column_per_page [10]
       top           [10 | 10% | ALL]
       variables     [ALL | Standard List | var1,var2]
       farmsize      minimum_inventory [1000]
       farmloc       farm_location [US | CA]
       farmout       farm_list_to_exclude [NONE | A,B,C]
       farmin        farm_list_to_include [ALL | A,B,C]
       dateformat    [default | %Y-%m-%d]
       webrootdir    [default | /pigknows]
       outputformat  [default | html | excel | pdf | txt | csv]
       fontsize      [default]
\endverbatim

\par Description
1. \a server specifies the database server name. The default is \c localhost.
2. \a customer specifies the customerID in uppercase.
3. \a user specifies the userID registered registered in \ref control_panel.
4. \a password specifies the secret password to access to the database.
5. \a language specified the language for displaying. The default is \c en.
6. \a farm specifies farmID in uppercase.
7. \a category specifies the category.
8. \a webrootdir specifies the web root directory. the default is \c /pigknows.
9. \a outputformat specifies the output format the default is \c html.
10. \a fontsize specifies the font size.

\sa  \ref benchmark_onetoall, \ref benchmark_summary. 

\section benchmark_summary benchmark_summary
\addindex benchmark_summary
The command \c admin_inventory generate the 'Performance Monitor' report,
one of the breeding herd reports.

\par Synopsis
\verbatim
Usage: benchmark_summary
       server        [localhost]
       customer      customerID
       user          userID
       password      secret
       language      [en | es | zh | de | fr | ro | pl | pt | nl]
       database      database_list [ALL | DB1+DB2]
       lastday       [2008-12-31]
       period        [1 month | 1 quarter | 365 days]
       upper         [5 | 5% | ALL]
       lower         [10 | 10% | ALL]
       variables     [ALL | Standard List | var1,var2]
       farmsize      minimum_inventory [1000]
       farmloc       farm_location [US | CA]
       farmout       farm_list_to_exclude [NONE | A,B,C]
       farmin        farm_list_to_include [ALL | A,B,C]
       dateformat    [default | %Y-%m-%d]
       webrootdir    [default | /pigknows]
       outputformat  [default | html | excel | pdf | txt | csv]
       fontsize      [default]
\endverbatim

\par Description
1. \a server specifies the database server name. The default is \c localhost.
2. \a customer specifies the customerID in uppercase.
3. \a user specifies the userID registered registered in \ref control_panel.
4. \a password specifies the secret password to access to the database.
5. \a language specified the language for displaying. The default is \c en.
6. \a farm specifies farmID in uppercase.
7. \a category specifies the category.
8. \a webrootdir specifies the web root directory. the default is \c /pigknows.
9. \a outputformat specifies the output format the default is \c html.
10. \a fontsize specifies the font size.


\sa  \ref benchmark_onetoall, \ref benchmark_onetoone.

\section boar_history boar_history
\addindex benchmark_summary
The command \c admin_inventory generate the 'Performance Monitor' report,
one of the breeding herd reports.


\par Synopsis
\verbatim
Usage: boar_history
       server        [localhost]
       customer      customerID
       user          userID
       password      secret
       language      [en | es | zh | de | fr | ro | pl | pt | nl]
       farm          farmID [A | A+B | A,B | A;B | _FG]
       begin_date    [2009-01-01 | BEGINNING]
       end_date      [2009-12-31 | END]
       reportformat  [STANDARD | BATCH | PigCHAMP]
       dateformat    [default | %Y-%m-%d]
       id            boarID_list [1234,5678]
       webrootdir    [default | /pigknows]
       outputformat  [default | html | excel | pdf | txt | csv txt0]
       fontsize      [default]

Usage: boar_history
       server        [localhost]
       customer      customerID
       user          userID
       password      secret
       language      [en | es | zh | de | fr | ro | pl | pt | nl]
       farm          farmID [A | A+B | A,B | A;B | _FG]
       begin_date    [2009-01-01 | BEGINNING]
       end_date      [2009-12-31 | END]
       gline         genetic_line [ALL | DORIC,LANDRACE]
       pstatus       production_status [ALL | ACTIVE | REMOVED]
       gstatus       genetic_status
       reportformat  [STANDARD | BATCH | PigCHAMP]
       dateformat    [default | %Y-%m-%d]
       webrootdir    [default | /pigknows]
       outputformat  [default | html | excel | pdf | txt | csv | txt0]
       fontsize      [default]
\endverbatim

\par Description
1. \a server specifies the database server name. The default is \c localhost.
2. \a customer specifies the customerID in uppercase.
3. \a user specifies the userID registered registered in \ref control_panel.
4. \a password specifies the secret password to access to the database.
5. \a language specified the language for displaying. The default is \c en.
6. \a farm specifies farmID in uppercase.
7. \a category specifies the category.
8. \a webrootdir specifies the web root directory. the default is \c /pigknows.
9. \a outputformat specifies the output format the default is \c html.
10. \a fontsize specifies the font size.

\sa \ref sow_history, \ref boar_pstatus and \ref boar_usage.

\section boar_perform  boar_perform
\addindex boar_perform
The command \c admin_inventory generate the 'Performance Monitor' report,
one of the breeding herd reports.

\par Synopsis
\verbatim
Usage: boar_perform
       server        [localhost]
       customer      customerID
       user          userID
       password      secret
       language      [en | es | zh | de | fr | ro | pl | pt | nl]
       farm          farmID [A | A+B | A,B | A;B | _FG | _FGF$ | _FG#]
       boarID        id_list [123,456]
       lastday       [2009-12-31]
       period        [7d | 2w | 1m | 1q | 1y]
       parity        [ALL | 0,1,2,3-5,6+ | 2,3,4]
       gline         genetic_line [ALL | LANDRACE,DUROC]
       orderby       [gline | farrowed | farrowrate | liveborn | mating]
       servboar      [single |first | mixed]
       reportformat  [Standard]
       dateformat    [default | %Y-%m-%d]
       webrootdir    [default | /pigknows]
       outputformat  [default | html | excel | pdf | txt | csv]
       fontsize      [default]
\endverbatim

\par Description
1. \a server specifies the database server name. The default is \c localhost.
2. \a customer specifies the customerID in uppercase.
3. \a user specifies the userID registered registered in \ref control_panel.
4. \a password specifies the secret password to access to the database.
5. \a language specified the language for displaying. The default is \c en.
6. \a farm specifies farmID in uppercase.
7. \a category specifies the category.
8. \a webrootdir specifies the web root directory. the default is \c /pigknows.
9. \a outputformat specifies the output format the default is \c html.
10. \a fontsize specifies the font size.

\sa \ref boar_usage, \ref boar_history, and boar_pstatus.

\section boar_pstatus boar_pstatus
\addindex boar_pstatus
The command \c admin_inventory generate the 'Performance Monitor' report,
one of the breeding herd reports.


\par Synopsis
\verbatim
Usage: boar_pstatus
       server        [localhost]
       customer      customerID
       user          userID
       password      secret
       language      [en | es | zh | de | fr | ro | pl | pt | nl]
       farm          farmID [A | A+B | A,B | A;B | _FG | _FG$ | _FG#]
       pstatus       [ONFARM | ENTERED | REMOVED]
       gline         genetic_line <ALL | LANDRACE,DUROC]
       orderby       [boarid | gline | matings]
       reportformat  [Standard]
       dateformat    [default | %Y-%m-%d]
       webrootdir    [default | /pigknows]
       outputformat  [default | html | excel | pdf | txt | csv]
       fontsize      [default]
\endverbatim

\par Description
1. \a server specifies the database server name. The default is \c localhost.
2. \a customer specifies the customerID in uppercase.
3. \a user specifies the userID registered registered in \ref control_panel.
4. \a password specifies the secret password to access to the database.
5. \a language specified the language for displaying. The default is \c en.
6. \a farm specifies farmID in uppercase.
7. \a category specifies the category.
8. \a webrootdir specifies the web root directory. the default is \c /pigknows.
9. \a outputformat specifies the output format the default is \c html.
10. \a fontsize specifies the font size.

\sa \ref boar_usage, \ref boar_perform, and \ref boar_history.

\section boar_sales_history boar_sales_history
\addindex boar_sales_history
The command \c admin_inventory generate the 'Performance Monitor' report,
one of the breeding herd reports.


\par Synopsis
\verbatim
Usage: boar_sales_history
       server        [localhost]
       customer      customerID
       user          userID
       password      secret
       language      [en | es | zh | de | fr | ro | pl | pt | nl]
       farm          farmID [A | A+B | A,B | A;B | _FG | _FG$ | _FG#]
       boarid        boarID [ALL | s123 | s123,s456]
       lastday       [2009-12-31]
       period        [7d | 2w | 1m | 1q | 1y]
       ticket        ticketID
       client        clientID
       driver        driverID
       truck         truchID
       destination   destination
       invoice       invoiceID
       exit_order    exit_order
       salestype     [SALES | REMOVAL]
       variables     [All | your_choice]
       orderby       [default | salesdate | salesdate,salestime |
                      salesdate | boarid]
       reportformat  [Standard | Standard]
       dateformat    [default | %Y-%m-%d]
       webrootdir    [default | /pigknows]
       outputformat  [default | html | excel | pdf | txt | csv]
       fontsize      [default]
\endverbatim

\par Description
1. \a server specifies the database server name. The default is \c localhost.
2. \a customer specifies the customerID in uppercase.
3. \a user specifies the userID registered registered in \ref control_panel.
4. \a password specifies the secret password to access to the database.
5. \a language specified the language for displaying. The default is \c en.
6. \a farm specifies farmID in uppercase.
7. \a category specifies the category.
8. \a webrootdir specifies the web root directory. the default is \c /pigknows.
9. \a outputformat specifies the output format the default is \c html.
10. \a fontsize specifies the font size.


\sa \ref boar_history, \ref sow_sales_history, and \ref grower_sales_history.

\section boar_usage boar_usage
\addindex boar_usage
The command \c admin_inventory generate the 'Performance Monitor' report,
one of the breeding herd reports.


\par Synopsis
\verbatim
Usage: boar_usage
       server        [localhost]
       customer      customerID
       user          userID
       password      secret
       language      [en | es | zh | de | fr | ro | pl | pt | nl]
       farm          farmID [A | A+B | A,B | A;B | _FG | _FG$ | _FG#]
       lastday       [2009-12-31]
       period        [7d | 2w | 1m | 1q | 1y]
       nperiod       [2]
       gline         [ALL | LANDRACE,DUROC]
       reportformat  [Standard]
       dateformat    [default | %Y-%m-%d]
       webrootdir    [default | /pigknows]
       outputformat  [default | html | excel | pdf | txt | csv]
       fontsize      [default]
\endverbatim

\par Description
1. \a server specifies the database server name. The default is \c localhost.
2. \a customer specifies the customerID in uppercase.
3. \a user specifies the userID registered registered in \ref control_panel.
4. \a password specifies the secret password to access to the database.
5. \a language specified the language for displaying. The default is \c en.
6. \a farm specifies farmID in uppercase.
7. \a category specifies the category.
8. \a webrootdir specifies the web root directory. the default is \c /pigknows.
9. \a outputformat specifies the output format the default is \c html.
10. \a fontsize specifies the font size.




\sa \ref boar_pstatus, \ref boar_perform, and \ref boar_history.

\section box_plot box_plot
\addindex box_plot
The command \c admin_inventory generate the 'Performance Monitor' report,
one of the breeding herd reports.

\par Synopsis
\verbatim
Usage: box_plot
       server        [localhost]
       customer      customerID
       user          userID
       password      secret
       language      [en | es | zh | de | fr | ro | pl | pt | nl]
       farm          farmID [A | A+B | A,B | A;B | _FG | _FG$ | _FG#]
       gline         genetic_line [ALL | LANDRACE,DUROC]
       xaxis         x_axis [farm | parity | gline | servdate |
                             farrowdate | weandate]
       lastday       [2009-12-31]
       period        [7d | 2w | 1m | 1q | 1y]
       nperiod       [2]
       parity        [ALL | 0,1,2,3-5,6+ | 2,3,4]
       yaxis         y_axis [parity | wean1stservint]
       reportformat  [Standard | DataOnly]
       dateformat    [default | %Y-%m-%d]
       webrootdir    [default | /pigknows]
       outputformat  [default | html | excel | pdf | txt]
       graphfname    filename to hold graph
       scriptfname   filename to hold script
\endverbatim

\par Description
1. \a server specifies the database server name. The default is \c localhost.
2. \a customer specifies the customerID in uppercase.
3. \a user specifies the userID registered registered in \ref control_panel.
4. \a password specifies the secret password to access to the database.
5. \a language specified the language for displaying. The default is \c en.
6. \a farm specifies farmID in uppercase.
7. \a category specifies the category.
8. \a webrootdir specifies the web root directory. the default is \c /pigknows.
9. \a outputformat specifies the output format the default is \c html.
10. \a fontsize specifies the font size.




\sa \ref histogram, \ref control_chart, and \ref trend_chart.

\section change_id change_id
\addindex change_id
The command \c admin_inventory generate the 'Performance Monitor' report,
one of the breeding herd reports.

\par Synopsis
\verbatim
Usage: change_id
       server      [localhost]
       customer    customerID
       user        userID
       password    secret
       language    [en | es | zh | de | fr | ro | pl | pt | nl]
       farm        farmID
       changedate  [2009-12-31]
       IdType      [SowID | SowAltID | BoarID BoarAltID | farmID | customerID]
       old_id      oldID
       new_id      newID
\endverbatim

\par Description
1. \a server specifies the database server name. The default is \c localhost.
2. \a customer specifies the customerID in uppercase.
3. \a user specifies the userID registered registered in \ref control_panel.
4. \a password specifies the secret password to access to the database.
5. \a language specified the language for displaying. The default is \c en.
6. \a farm specifies farmID in uppercase.
7. \a category specifies the category.
8. \a webrootdir specifies the web root directory. the default is \c /pigknows.
9. \a outputformat specifies the output format the default is \c html.
10. \a fontsize specifies the font size.


\section cohort_analysis cohort_analysis
\addindex cohort_analysis
The command \c admin_inventory generate the 'Performance Monitor' report,
one of the breeding herd reports.


\par Synopsis
\verbatim
Usage: cohort_analysis
       server        [localhost]
       customer      customerID
       user          userID
       password      secret
       language      [en | es | zh | de | fr | ro | pl | pt | nl]
       farm          farmID [A | A+B | A,B | A;B | _FG | _FG$ | _FG#]
       gline         genetic_line [ALL | LANDRACE,DUROC]
       groupby       [servgroup | servdate]
       parity        [ALL | 0,1,2,3-5,6+ | 2,3,4]
       reportformat  [Standard | Detailed]
       dateformat    [default | %Y-%m-%d]
       servgroup     a service group [09-34]
       webrootdir    [default | /pigknows]
       outputformat  [default | html | excel | pdf | txt | csv]
       fontsize      [default]

Usage: cohort_analysis
       server        [localhost]
       customer      customerID
       user          userID
       password      secret
       language      [en | es | zh | de | fr | ro | pl | pt | nl]
       farm          farmID [A | A+B | A,B | A;B | _FG | _FG$ | _FG#>
       gline         [ALL | LANDRACE,DUROC]
       groupby       [servgroup | servdate]
       parity        [ALL | 0,1,2,3-5,6+ | 2,3,4]
       reportformat  [Standard | Detailed]
       dateformat    [default | %Y-%m-%d]
       lastday       [2009-12-31]
       period        [7d | 2w | 1m | 1q | 1y]
       nperiod       [2]
       webrootdir    [default | /pigknows]
       outputformat  [default | html | excel | pdf | txt | csv]
       fontsize      [default]
\endverbatim

\par Description
1. \a server specifies the database server name. The default is \c localhost.
2. \a customer specifies the customerID in uppercase.
3. \a user specifies the userID registered registered in \ref control_panel.
4. \a password specifies the secret password to access to the database.
5. \a language specified the language for displaying. The default is \c en.
6. \a farm specifies farmID in uppercase.
7. \a category specifies the category.
8. \a webrootdir specifies the web root directory. the default is \c /pigknows.
9. \a outputformat specifies the output format the default is \c html.
10. \a fontsize specifies the font size.




\sa \ref perform_monitor, \ref sow_perform, \ref gline_perform, 
    \ref gilt_perform, \ref service_perform.

\section conception_chart conception_chart
\addindex conception_chart
The command \c admin_inventory generate the 'Performance Monitor' report,
one of the breeding herd reports.


\par Synopsis
\verbatim
Usage: conception_chart
       server        [localhost]
       customer      customerID
       user          userID
       password      secret
       language      [en | es | zh | de | fr | ro | pl | pt | nl]
       farm          farmID [A | A+B | A,B | A;B | _FG | _FG$ | _FG#]
       conception    conception at [14-day | 4-week | 12-week]
       lastday       [2009-12-31]
       period        [7d | 2w | 1m | 1q | 1y]
       nperiod       [2]
       parity        [ALL | 0,1,2,3-5,6+ | 2,3,4]
       gline         genetic lines [ALL | LANDRACE,DUROC]
       nmates        filter #mates [=1 | >1 | >= 1 != 1]
       reportformat  [Count | Percent]
       dateformat    [default | %Y-%m-%d]
       webrootdir    [default | /pigknows]
       outputformat  [default | html | excel | pdf | txt]
       graphfname    filename to hold graph
       scriptfname   filename to hold script
\endverbatim

\par Description
1. \a server specifies the database server name. The default is \c localhost.
2. \a customer specifies the customerID in uppercase.
3. \a user specifies the userID registered registered in \ref control_panel.
4. \a password specifies the secret password to access to the database.
5. \a language specified the language for displaying. The default is \c en.
6. \a farm specifies farmID in uppercase.
7. \a category specifies the category.
8. \a webrootdir specifies the web root directory. the default is \c /pigknows.
9. \a outputformat specifies the output format the default is \c html.
10. \a fontsize specifies the font size.




\sa \ref lactation_chart, \ref control_chart, and \ref trend_chart.

\section control_chart control_chart
\addindex control_chart
The command \c admin_inventory generate the 'Performance Monitor' report,
one of the breeding herd reports.


\par Synopsis
\verbatim
Usage: control_chart
       server        database server [localhost]
       customer      customerID
       user          userID
       password      secret
       language      [en | es | zh | de | fr | ro | pl | pt | nl]
       farm          farmID [A | A+B | A,B | A;B | _FG | _FG$ | _FG#]
       gline         genetic line [ALL | LANDRACE,DUROC]
       lastday       [2009-12-31]
       period        [7d | 2w | 1m | 1q | 1y]
       nperiod       [2]
       parity        [ALL | 0,1,2,3-5,6+ | 2,3,4]
       variable      [Total Services | Total Farrowing | Total Liveborn |
                      Total Stillborn | Total Mummies | Total Deathborn |
                      Total Pigs Weaned | Avg Liveborn/Litter |
                      Avg Deathborn/Litter | Avg Weaned/Litter |
                      Gestation Length | Farrow Rate(%) |
                      Adj Farrow Rate(%) | % Piglet Loss]
       upper_target  [default]
       target        [default]
       lower_target  [default]
       reportformat  [Standard | DataOnly]
       dateformat    [default | %Y-%m-%d]
       webrootdir    [default | /pigknows]
       outputformat  [default | html | excel | pdf | txt | csv]
       graphfname    filename to hold graph
       scriptfname   filename to hold script
\endverbatim

\par Description
1. \a server specifies the database server name. The default is \c localhost.
2. \a customer specifies the customerID in uppercase.
3. \a user specifies the userID registered registered in \ref control_panel.
4. \a password specifies the secret password to access to the database.
5. \a language specified the language for displaying. The default is \c en.
6. \a farm specifies farmID in uppercase.
7. \a category specifies the category.
8. \a webrootdir specifies the web root directory. the default is \c /pigknows.
9. \a outputformat specifies the output format the default is \c html.
10. \a fontsize specifies the font size.

\sa \ref histogram, \ref scatter_chart.

\section cusum_chart cusum_chart
\addindex cusum_chart
The command \c admin_inventory generate the 'Performance Monitor' report,
one of the breeding herd reports.


\par Synopsis
\verbatim
Usage: cusum_chart
       server        [localhost]
       customer      customerID
       user          userID
       password      secret
       language      [en | es | zh | de | fr | ro | pl | pt | nl]
       farm          farmID [A | A+B | A,B | A;B | _FG | _FG$ | _FG#]
       gline         [ALL | LANDRACE,DUROC]
       lastday       [2009-12-31]
       period        [7d | 2w | 1m | 1q | 1y]
       nperiod       [2]
       parity        [ALL | 0,1,2,3-5,6+ | 2,3,4]
       variable      y-axis [services | farrows | totalborn
                             | liveborn | deadborn | pigsweaned]
       target        target for variable [60]
       reportformat  [Standard | DataOnly]
       dateformat    [default | %Y-%m-%d]
       webrootdir    [default | /pigknows]
       outputformat  [default | html | excel | pdf | txt]
       graphfname    filename to hold graph
       scriptfname   filename to hold script
\endverbatim

\par Description
1. \a server specifies the database server name. The default is \c localhost.
2. \a customer specifies the customerID in uppercase.
3. \a user specifies the userID registered registered in \ref control_panel.
4. \a password specifies the secret password to access to the database.
5. \a language specified the language for displaying. The default is \c en.
6. \a farm specifies farmID in uppercase.
7. \a category specifies the category.
8. \a webrootdir specifies the web root directory. the default is \c /pigknows.
9. \a outputformat specifies the output format the default is \c html.
10. \a fontsize specifies the font size.




\sa \ref sowherd_chart, \ref weekly_tally_chart.

\section data_extract data_extract
\addindex cusum_chart
The command \c admin_inventory generate the 'Performance Monitor' report,
one of the breeding herd reports.


\par Synopsis
\verbatim
Usage: data_extract
       server         [localhost]
       customer       customerID
       user           userID
       password       secret
       language       [en | es | zh | de | fr | ro | pl | pt | nl]
       farm           farmID [A | A+B | A,B | A;B | _FG | _FG$ | _FG#>
       gline          genetic_line [ALL | LANDRACE,DUROC]
       event          event_name [sow arrival | sow removal | boar arrival
                                  | boar removal | service | pregexam | pig deaths
                                  | pig defect | skipheat | treatments | general
                                  | farrow | abortion | nurse off | nurse on]
       varlist        [ALL | LANDRACE,DUROC]
       lastday        [2009-12-31]
       period         [7d | 2w | 1m | 1q | 1y]
       servgroup      service_group [ALL | 09-44]
       parity         parity_lsit [ALL | 0,1,2,3-5,6+ | 2,3,4]
       groupby        [default | parity | wean1stservint | weanestrusint |
                       weanservint | servservint | hns1stservint |
                       prevlactlen | weanage entry1stservint]
       orderby        [default | sowid | eventdate  | gline]
       inctransferred including_transfered_record [YES | NO]
       filter         SQL WHERE-clause [none]
       dateformat     [default | %Y-%m-%d]
       webrootdir     [default | /pigknows]
       outputformat   [default | html | excel | pdf | txt | csv]
       fontsize       [default]
\endverbatim

\par Description
1. \a server specifies the database server name. The default is \c localhost.
2. \a customer specifies the customerID in uppercase.
3. \a user specifies the userID registered registered in \ref control_panel.
4. \a password specifies the secret password to access to the database.
5. \a language specified the language for displaying. The default is \c en.
6. \a farm specifies farmID in uppercase.
7. \a category specifies the category.
8. \a webrootdir specifies the web root directory. the default is \c /pigknows.
9. \a outputformat specifies the output format the default is \c html.
10. \a fontsize specifies the font size.




\sa \ref sow_history, \ref boar_history, and \ref batch_data_import.

\section dictionary_view dictionary_view
\addindex dictionary_view
The command \c admin_inventory generate the 'Performance Monitor' report,
one of the breeding herd reports.

\par Synopsis
\verbatim
Usage: dictionary_view
       server        [localhost]
       customer      customerID
       user          userID
       password      secret
       language      [en | es | zh | de | fr | ro | pl | pt | nl]
       farm          farmID [A | A+B | A,B | A;B | _FG | _FG$ | _FG#]
       category      [All | Crates | Date Format | Barn,Room,Pen,Bin
                      | Defects | Death/Removal Reasons | Farm Type
                      | General Event Types | Glines | Grower Death Reasons
                      | Piglet Death Reasons | Targets | Worker]
       webrootdir    [default | /pigknows]
       outputformat  [default | html | excel | pdf | txt | csv]
       fontsize      [default]
\endverbatim

\par Description
1. \a server specifies the database server name. The default is \c localhost.
2. \a customer specifies the customerID in uppercase.
3. \a user specifies the userID registered registered in \ref control_panel.
4. \a password specifies the secret password to access to the database.
5. \a language specified the language for displaying. The default is \c en.
6. \a farm specifies farmID in uppercase.
7. \a category specifies the category.
8. \a webrootdir specifies the web root directory. the default is \c /pigknows.
9. \a outputformat specifies the output format the default is \c html.
10. \a fontsize specifies the font size.




\sa \ref pedigree_view, \ref target_list.

\section external_sow_index external_sow_index
\addindex external_sow_index
The command \c admin_inventory generate the 'Performance Monitor' report,
one of the breeding herd reports.


\par Synopsis
\verbatim
Usage: external_sow_index
       server        [localhost]
       customer      customerID
       user          userID
       password      secret
       language      [en | es | zh | de | fr | ro | pl | pt | nl]
       farm          farmID [A | A+B | A,B | A;B | _FG | _FG$ | _FG#]
       variables     [ALL | line1 | line2 | line3]
       orderby       [default | tag | line1 | line2 | linbe3 | line1,line2]
       webrootdir    [default | /pigknows]
       outputformat  [default | html | excel | pdf | txt | csv]
       fontsize      [default]
\endverbatim

\par Description
1. \a server specifies the database server name. The default is \c localhost.
2. \a customer specifies the customerID in uppercase.
3. \a user specifies the userID registered registered in \ref control_panel.
4. \a password specifies the secret password to access to the database.
5. \a language specified the language for displaying. The default is \c en.
6. \a farm specifies farmID in uppercase.
7. \a category specifies the category.
8. \a webrootdir specifies the web root directory. the default is \c /pigknows.
9. \a outputformat specifies the output format the default is \c html.
10. \a fontsize specifies the font size.




\sa \ref sow_perform, \ref sow_history.

\section farm_explorer farm_explorer
\addindex farm_explorer
The command \c admin_inventory generate the 'Performance Monitor' report,
one of the breeding herd reports.


\par Synopsis
\verbatim
Usage: farm_explorer
       server        [localhost]
       customer      customerID
       user          userID
       password      secret
       language      [en | es | zh | de | fr | ro | pl | pt | nl]
       farm          farmID [A | A+B | A,B | A;B | _FG | _FG$ | _FG#]
       pstatus       [Active | ALL | Contact]
       reportformat  [Standard]
       dateformat    [default | %Y-%m-%d]
       webrootdir    [default | /pigknows]
       outputformat  [default | html | excel | pdf | txt | csv]
       fontsize      [default]
\endverbatim

\par Description
1. \a server specifies the database server name. The default is \c localhost.
2. \a customer specifies the customerID in uppercase.
3. \a user specifies the userID registered registered in \ref control_panel.
4. \a password specifies the secret password to access to the database.
5. \a language specified the language for displaying. The default is \c en.
6. \a farm specifies farmID in uppercase.
7. \a category specifies the category.
8. \a webrootdir specifies the web root directory. the default is \c /pigknows.
9. \a outputformat specifies the output format the default is \c html.
10. \a fontsize specifies the font size.




\sa \ref sowherd_chart.

\section farrowing_location_perform farrowing_location_perform
\addindex farrowing_location_perform
The command \c admin_inventory generate the 'Performance Monitor' report,
one of the breeding herd reports.


\par Synopsis
\verbatim
Usage: farrowing_location_perform
       server        [localhost]
       customer      customerID
       user          userID
       password      secret
       language      [en | es | zh | de | fr | ro | pl | pt | nl]
       farm          farmID [A | A+B | A,B | A;B | _FG | _FG$ | _FG#]
       lastday       [2009-12-31]
       period        [7d | 2w | 1m | 1q | 1y]
       location      [barn | room | pen]
       reportformat  [Standard,Sum]
       dateformat    [default | %Y-%m-%d]
       webrootdir    [default | /pigknows]
       outputformat  [default | html | excel | pdf | txt | csv]
       fontsize      [default]
\endverbatim

\par Description
1. \a server specifies the database server name. The default is \c localhost.
2. \a customer specifies the customerID in uppercase.
3. \a user specifies the userID registered registered in \ref control_panel.
4. \a password specifies the secret password to access to the database.
5. \a language specified the language for displaying. The default is \c en.
6. \a farm specifies farmID in uppercase.
7. \a category specifies the category.
8. \a webrootdir specifies the web root directory. the default is \c /pigknows.
9. \a outputformat specifies the output format the default is \c html.
10. \a fontsize specifies the font size.




\sa \ref perform_monitor, \ref sow_perform, and \ref servtech_perform.

\section farrowing_rate farrowing_rate
\addindex farrowing_rate
The command \c admin_inventory generate the 'Performance Monitor' report,
one of the breeding herd reports.


\par Synopsis
\verbatim
Usage: farrowing_rate
       server         [localhost]
       customer       customerID
       user           userID
       password       secret
       language       [en | es | zh | de | fr | ro | pl | pt | nl]
       farm           farmID [A | A+B | A,B | A;B | _FG | _FG$ | _FG#]
       servgroup      list of service groups [12-20,12-22]
       lastday        [2009-12-31]
       period         [7d | 2w | 1m | 1q | 1y]
       nperiod        [2]
       intervalwidths [default | estrus_intervals | parity]
       parity         [ALL | 0,1,2,3-5,6+ | 2,3,4]
       cross          [ALL | Landrace,Duroc | Landrace by Duroc]
       reportformat   [default | Sows Presumed Pregnant | Sows Aborted
                       | Sows Culled | Sows Died | Sows Transferred out
                       | Sows Found not Pregnant | Sows Returned to Estrus
                       | Sows Heat NS | Sows Preg Check Negative]
       btarget        [default | 80]
       showreasons    [Yes | No]
       inctransserv   [Yes | No]
       reporttype     [default | Standard | Tradition | T100 | H100]
       dateformat     [default | %Y-%m-%d]
       webrootdir     [default | /pigknows]
       outputformat   [default | html | excel | pdf | txt | csv]
       fontsize       [default]
\endverbatim

\par Description
1. \a server specifies the database server name. The default is \c localhost.
2. \a customer specifies the customerID in uppercase.
3. \a user specifies the userID registered registered in \ref control_panel.
4. \a password specifies the secret password to access to the database.
5. \a language specified the language for displaying. The default is \c en.
6. \a farm specifies farmID in uppercase.
7. \a servgroup specifies service groups.
8. \a category specifies the category.
9. \a webrootdir specifies the web root directory. the default is \c /pigknows.
10. \a outputformat specifies the output format the default is \c html.
11. \a fontsize specifies the font size.




\sa \ref cusum_chart, \ref farrowing_location_perform.

\section feed_budget feed_budget
\addindex feed_budget
The command \c admin_inventory generate the 'Performance Monitor' report,
one of the breeding herd reports.


\par Synopsis
\verbatim
Usage: feed_buget
       server        [localhost]
       customer      customerID
       user          userID
       password      secret
       language      [en | es | zh | de | fr | ro | pl | pt | nl]
       farm          farmID [A | A+B | A,B | A;B | _FG | _FG$ | _FG#]
       groupid       group ID
       barn          barn ID [B1]
       reportformat  [Standard | Detailed]
       dateformat    [default | %Y-%m-%d]
       webrootdir    [default | /pigknows]
       outputformat  [default | html | excel | pdf | txt | csv]
       fontsize      [default]
\endverbatim

\par Description
1. \a server specifies the database server name. The default is \c localhost.
2. \a customer specifies the customerID in uppercase.
3. \a user specifies the userID registered registered in \ref control_panel.
4. \a password specifies the secret password to access to the database.
5. \a language specified the language for displaying. The default is \c en.
6. \a farm specifies farmID in uppercase.
7. \a category specifies the category.
8. \a webrootdir specifies the web root directory. the default is \c /pigknows.
9. \a outputformat specifies the output format the default is \c html.
10. \a fontsize specifies the font size.




\sa \ref feed_usage, \ref feed_delivered, and \ref feed_history.

\section feed_delivered feed_delivered
\addindex feed_delivered
The command \c admin_inventory generate the 'Performance Monitor' report,
one of the breeding herd reports.


\par Synopsis
\verbatim
Usage: feed_delivered
       server        [localhost]
       customer      customerID
       user          userID
       password      secret
       language      [en | es | zh | de | fr | ro | pl | pt | nl]
       farm          farmID [A | A+B | A,B | A;B | _FG | _FG$ | _FG#]
       lastday       [2009-12-31]
       period        [7d | 2w | 1m | 1q | 1y]
       nperiod       [2]
       groupid       [ALL | 0,1,2,3-5,6+ | 2,3,4]
       feedbin       feed bin ID
       orderby       order by variable [default]
       inclocfeed    include location feed [Yes | No]
       reportformat  [Standard | Summary | Detailed]
       dateformat    [default | %Y-%m-%d]
       webrootdir    [default | /pigknows]
       outputformat  [default | html | excel | pdf | txt | csv]
       fontsize      [default]
\endverbatim

\par Description
1. \a server specifies the database server name. The default is \c localhost.
2. \a customer specifies the customerID in uppercase.
3. \a user specifies the userID registered registered in \ref control_panel.
4. \a password specifies the secret password to access to the database.
5. \a language specified the language for displaying. The default is \c en.
6. \a farm specifies farmID in uppercase.
7. \a category specifies the category.
8. \a webrootdir specifies the web root directory. the default is \c /pigknows.
9. \a outputformat specifies the output format the default is \c html.
10. \a fontsize specifies the font size.




\sa \ref feed_history, \ref feed_usage.

\section feed_history feed_history
\addindex feed_history
The command \c admin_inventory generate the 'Performance Monitor' report,
one of the breeding herd reports.


\par Synopsis
\verbatim
Usage: feed_history
       server        [localhost]
       customer      customerID
       user          userID
       password      secret
       language      [en | es | zh | de | fr | ro | pl | pt | nl]
       farm          farmID [A | A+B | A,B | A;B | _FG | _FG$ | _FG#]
       feedbin       feed bin ID
       groupid       group ID
       ticket        ticket ID
       lastday       [2009-12-31]
       period        [7d | 2w | 1m | 1q | 1y]
       variables     [eventdate | eventname | feedid | ticket | groupid
                      | feedbin | weight | cost |meditype | mediprice
                      | mediperfeed | medicost | remark]
       reportformat  [Standard | Summary]
       dateformat    [default | %Y-%m-%d]
       webrootdir    [default | /pigknows]
       outputformat  [default | html | excel | pdf | txt | csv]
       fontsize      [default]
\endverbatim

\par Description
1. \a server specifies the database server name. The default is \c localhost.
2. \a customer specifies the customerID in uppercase.
3. \a user specifies the userID registered registered in \ref control_panel.
4. \a password specifies the secret password to access to the database.
5. \a language specified the language for displaying. The default is \c en.
6. \a farm specifies farmID in uppercase.
7. \a category specifies the category.
8. \a webrootdir specifies the web root directory. the default is \c /pigknows.
9. \a outputformat specifies the output format the default is \c html.
10. \a fontsize specifies the font size.




\sa \ref feed_delivered, \ref feed_budget, \ref feed_usage.


\section feed_usage  feed_usage
\addindex feed_usage
The command \c admin_inventory generate the 'Performance Monitor' report,
one of the breeding herd reports.


\par Synopsis
\verbatim
Usage: feed_usage
       server        [localhost]
       customer      customerID
       user          userID
       password      secret
       language      [en | es | zh | de | fr | ro | pl | pt | nl]
       farm          farmID [A | A+B | A,B | A;B | _FG | _FG$ | _FG#]
       location      [barn | room | pen]
       groupid       group ID
       lastday       [2009-12-31]
       period        [7d | 2w | 1m | 1q | 1y]
       nperiod       [2]
       reportformat  [Standard]
       webrootdir    [default | /pigknows]
\endverbatim

\par Description
1. \a server specifies the database server name. The default is \c localhost.
2. \a customer specifies the customerID in uppercase.
3. \a user specifies the userID registered registered in \ref control_panel.
4. \a password specifies the secret password to access to the database.
5. \a language specified the language for displaying. The default is \c en.
6. \a farm specifies farmID in uppercase.
7. \a category specifies the category.
8. \a webrootdir specifies the web root directory. the default is \c /pigknows.
9. \a outputformat specifies the output format the default is \c html.
10. \a fontsize specifies the font size.




\sa \ref feed_history, and \ref feed_delivered.

\section gilts_perform gilts_perform
\addindex gilts_perform
The command \c admin_inventory generate the 'Performance Monitor' report,
one of the breeding herd reports.


\par Synopsis
\verbatim
Usage: gilts_perform
       server        [localhost]
       customer      customerID
       user          userID
       password      secret
       language      [en | es | zh | de | fr | ro | pl | pt | nl]
       farm          farmID [A | A+B | A,B | A;B | _FG | _FG$ | _FG#]
       groupby       [entrydate | entrygroup]
       lastday       [2009-12-31]
       period        [7d | 2w | 1m | 1q | 1y]
       groupid       entry group ID [ALL | G20,G23]
       gline         [ALL | LANDRACE,DUROC]
       orderby       [gline | sowid | liveborn | average liveborn
                      | average totalborn | average weaned | farrowdate
                      | parity | bvsp]
       formula       [Standard | PePe]
       reportformat  [Standard]
       dateformat    [default | %Y-%m-%d]
       webrootdir    [default | /pigknows]
       outputformat  [default | html | excel | pdf | txt | csv]
       fontsize      [default]
\endverbatim

\par Description
1. \a server specifies the database server name. The default is \c localhost.
2. \a customer specifies the customerID in uppercase.
3. \a user specifies the userID registered registered in \ref control_panel.
4. \a password specifies the secret password to access to the database.
5. \a language specified the language for displaying. The default is \c en.
6. \a farm specifies farmID in uppercase.
7. \a category specifies the category.
8. \a webrootdir specifies the web root directory. the default is \c /pigknows.
9. \a outputformat specifies the output format the default is \c html.
10. \a fontsize specifies the font size.




\sa \ref sow_perform, and \ref perform_monitor.

\section gilts_pool gilts_pool
\addindex gilts_pool
The command \c admin_inventory generate the 'Performance Monitor' report,
one of the breeding herd reports.


\par Synopsis
\verbatim
Usage: gilts_pool
       server        [localhost]
       customer      customerID
       user          userID
       password      secret
       language      [en | es | zh | de | fr | ro | pl | pt | nl]
       farm          farmID [A | A+B | A,B | A;B | _FG | _FG$ | _FG#]
       reportformat  [Standard | Detailed | Mini | MB]
       period        [7d | 2w | 1m | 1q | 1y]
       gline         [ALL | LANDRACE,DUROC]
       orderby       [entrydate | sowid | gline | daysopen]
       dateformat    [default | %Y-%m-%d]
       daysopen      [0]
       webrootdir    [default | /pigknows]
       outputformat  [default | html | excel | pdf | txt | csv]
       fontsize      [default]
\endverbatim

\par Description
1. \a server specifies the database server name. The default is \c localhost.
2. \a customer specifies the customerID in uppercase.
3. \a user specifies the userID registered registered in \ref control_panel.
4. \a password specifies the secret password to access to the database.
5. \a language specified the language for displaying. The default is \c en.
6. \a farm specifies farmID in uppercase.
7. \a category specifies the category.
8. \a webrootdir specifies the web root directory. the default is \c /pigknows.
9. \a outputformat specifies the output format the default is \c html.
10. \a fontsize specifies the font size.




\sa \ref sowherd_chart, \ref sow_list, \ref pregnant_sow_inventory.

\section gilts_retention_rate gilts_retention_rate
\addindex gilts_retention_rate
The command \c admin_inventory generate the 'Performance Monitor' report,
one of the breeding herd reports.


\par Synopsis
\verbatim
Usage: gilts_retention_rate
       server        [localhost]
       customer      customerID
       user          userID
       password      secret
       language      [en | es | zh | de | fr | ro | pl | pt | nl]
       farm          farmID [A | A+B | A,B | A;B | _FG | _FG$ | _FG#]
       groupby       [entrydate | entrygroup]
       lastday       [2009-12-31]
       period        [7d | 2w | 1m | 1q | 1y]
       nperiod       [2]
       groupid       group ID [G20,G30]
       surviveto     survive up to [2p | 100d | 2m | 2q | 2y]
       gline         genetic line [ALL | LANDRACE,DUROC]
       reportformat  [default | Pecent | Count]
       dateformat    [default | %Y-%m-%d]
       webrootdir    [default | /pigknows]
       outputformat  [default | html | excel | pdf | txt | csv]
       fontsize      [default]
\endverbatim

\par Description
1. \a server specifies the database server name. The default is \c localhost.
2. \a customer specifies the customerID in uppercase.
3. \a user specifies the userID registered registered in \ref control_panel.
4. \a password specifies the secret password to access to the database.
5. \a language specified the language for displaying. The default is \c en.
6. \a farm specifies farmID in uppercase.
7. \a category specifies the category.
8. \a webrootdir specifies the web root directory. the default is \c /pigknows.
9. \a outputformat specifies the output format the default is \c html.
10. \a fontsize specifies the font size.




\sa \ref gilts_pool, \ref farrowing_rate.

\section gline_perform gline_perform
\addindex gline_perform
The command \c admin_inventory generate the 'Performance Monitor' report,
one of the breeding herd reports.


\par Synopsis
\verbatim
Usage: gline_perform
       server        [localhost]
       customer      customerID
       user          userID
       password      secret
       language      [en | es | zh | de | fr | ro | pl | pt | nl]
       farm          farmID [A | A+B | A,B | A;B | _FG | _FG$ | _FG#]
       lastday       [2009-12-31]
       period        [7d | 2w | 1m | 1q | 1y]
       orderby       [sow gline | boar gline]
       reportformat  [Standard]
       dateformat    [default | %Y-%m-%d]
       webrootdir    [default | /pigknows]
       outputformat  [default | html | excel | pdf | txt | csv]
       fontsize      [default]
\endverbatim

\par Description
1. \a server specifies the database server name. The default is \c localhost.
2. \a customer specifies the customerID in uppercase.
3. \a user specifies the userID registered registered in \ref control_panel.
4. \a password specifies the secret password to access to the database.
5. \a language specified the language for displaying. The default is \c en.
6. \a farm specifies farmID in uppercase.
7. \a category specifies the category.
8. \a webrootdir specifies the web root directory. the default is \c /pigknows.
9. \a outputformat specifies the output format the default is \c html.
10. \a fontsize specifies the font size.




\sa \ref sow_perform, \ref servtech_perform, \ref gilts_perform.

\section grower_availability grower_availability
\addindex grower_availability
The command \c admin_inventory generate the 'Performance Monitor' report,
one of the breeding herd reports.


\par Synopsis
\verbatim
Usage: grower_availability
       server        [localhost]
       customer      customerID
       user          userID
       password      secret
       langugae      [en | es | zh | de | fr | ro | pl | pt | nl]
       farm          farmID [A | A+B | A,B | A;B | _FG | _FG$ | _FG#>
       lastday       [2009-12-31]
       period        [7d | 2w | 1m | 1q | 1y]
       nperiod       [2]
       parity        [ALL | 0,1,2,3-5,6+ | 2,3,4]
       gline         [ALL | LANDRACE,DUROC]
       summary       [default | TOTAL | AVERAGE | NONE]
       reportformat  [STANDARD | DETAILED | KEY | SHORT1 | SHORT2
                      | SHORT3 | YTD | _my.userid]
       reporttype    [ALL | BREEDING | FARROWING | WEANING | INVENTORY]
       printtarget   [0 | 1]
       dateformat    [default | %Y-%m-%d]
       webrootdir    [default | /pigknows]
       outputformat  [default | html | excel | pdf | txt | csv]
       fontsize      [default]
\endverbatim

\par Description
1. \a server specifies the database server name. The default is \c localhost.
2. \a customer specifies the customerID in uppercase.
3. \a user specifies the userID registered registered in \ref control_panel.
4. \a password specifies the secret password to access to the database.
5. \a language specified the language for displaying. The default is \c en.
6. \a farm specifies farmID in uppercase.
7. \a category specifies the category.
8. \a webrootdir specifies the web root directory. the default is \c /pigknows.
9. \a outputformat specifies the output format the default is \c html.
10. \a fontsize specifies the font size.




\sa \ref grower_inventory, \ref grower_history.

\section grower_barn_perform grower_barn_perform
\addindex grower_barn_perform
The command \c admin_inventory generate the 'Performance Monitor' report,
one of the breeding herd reports.


\par Synopsis
\verbatim
Usage: grower_barn_perform
       server        [localhost]
       customer      customerID
       user          userID
       password      secret
       language      [en | es | zh | de | fr | ro | pl | pt | nl]
       farm          farmID [A | A+B | A,B | A;B | _FG | _FG$ | _FG#]
       barnids       barn ID
       lastday       [2009-12-31]
       period        [7d | 2w | 1m | 1q | 1y]
       variables     [default | Standard | GcmList | KeyList
                      | PigsList | SalesList | DaysList | WeightList | All]
       reportformat  [Standard]
       dateformat    [default | %Y-%m-%d]
       webrootdir    [default | /pigknows]
       outputformat  [default | html | excel | pdf | txt | csv]
       fontsize      [default]
\endverbatim

\par Description
1. \a server specifies the database server name. The default is \c localhost.
2. \a customer specifies the customerID in uppercase.
3. \a user specifies the userID registered registered in \ref control_panel.
4. \a password specifies the secret password to access to the database.
5. \a language specified the language for displaying. The default is \c en.
6. \a farm specifies farmID in uppercase.
7. \a category specifies the category.
8. \a webrootdir specifies the web root directory. the default is \c /pigknows.
9. \a outputformat specifies the output format the default is \c html.
10. \a fontsize specifies the font size.




\sa \ref grower_closeout, \ref grower_group_comparison.

\section grower_closeout grower_closeout
\addindex grower_closeout
The command \c admin_inventory generate the 'Performance Monitor' report,
one of the breeding herd reports.


\par Synopsis
\verbatim
Usage: grower_closeout
       server        [localhost]
       customer      customerID
       user          userID
       password      secret
       language      [en | es | zh | de | fr | ro | pl | pt | nl]
       farm          farmID [A | A+B | A,B | A;B | _FG | _FG$ | _FG#]
       barn          barnID
       groupid       [groupdate | groupid]
       lastday       [2009-12-31]
       period        [7d | 2w | 1m | 1q | 1y]
       nperiod       [2]
       reportformat  [Standard | Detailed | Key | CPC | FeedUsage
                      | FeedDelivered | Profit]
       dateformat    [default | %Y-%m-%d]
       webrootdir    [default | /pigknows]
       outputformat  [default | html | excel | pdf | txt | csv]
       fontsize      [default]
\endverbatim

\par Description
1. \a server specifies the database server name. The default is \c localhost.
2. \a customer specifies the customerID in uppercase.
3. \a user specifies the userID registered registered in \ref control_panel.
4. \a password specifies the secret password to access to the database.
5. \a language specified the language for displaying. The default is \c en.
6. \a farm specifies farmID in uppercase.
7. \a category specifies the category.
8. \a webrootdir specifies the web root directory. the default is \c /pigknows.
9. \a outputformat specifies the output format the default is \c html.
10. \a fontsize specifies the font size.




\sa \ref grower_barn_perform, \ref grower_history, \ref grower_grower_group_comparison.

\section grower_death_analysis grower_death_analysis
\addindex grower_death_analysis
The command \c admin_inventory generate the 'Performance Monitor' report,
one of the breeding herd reports.


\par Synopsis
\verbatim
Usage: grower_death_analysis
       server        [localhost]
       customer      customerID
       user          userID
       password      secret
       language      [en | es | zh | de | fr | ro | pl | pt | nl]
       farm          farmID [A | A+B | A,B | A;B | _FG | _FG$ | _FG#]
       gline         [ALL | LANDRACE,DUROC]
       barn          [ALL | EACH]
       room          [ALL | EACH]
       pen           [ALL | EACH]
       groupid       group ID [G20 | GH30]
       lastday       [2009-12-31]
       period        [7d | 2w | 1m | 1q | 1y]
       nperiod       [2]
       agedist       age distribution [ALL | 0,1,2,3-5,6+ | 2,3,4]
       reporttype    [default | Count | Percent | Both]
       reportformat  [default | Standard | Summary]
       dateformat    [default | %Y-%m-%d]
       webrootdir    [default | /pigknows]
       outputformat  [default | html | excel | pdf | txt | csv]
       fontsize      [default]
\endverbatim

\par Description
1. \a server specifies the database server name. The default is \c localhost.
2. \a customer specifies the customerID in uppercase.
3. \a user specifies the userID registered registered in \ref control_panel.
4. \a password specifies the secret password to access to the database.
5. \a language specified the language for displaying. The default is \c en.
6. \a farm specifies farmID in uppercase.
7. \a category specifies the category.
8. \a webrootdir specifies the web root directory. the default is \c /pigknows.
9. \a outputformat specifies the output format the default is \c html.
10. \a fontsize specifies the font size.




\sa \ref grower_mortality, \ref grower_mortality_chart, \ref grower_perform.

\section grower_group_comparison grower_group_comparison
\addindex grower_group_comparison
The command \c admin_inventory generate the 'Performance Monitor' report,
one of the breeding herd reports.


\par Synopsis
\verbatim
Usage: grower_group_comparison
       server        [localhost]
       customer      customerID
       user          userID
       password      secret
       language      [en | es | zh | de | fr | ro | pl | pt | nl]
       farm          farmID [A | A+B | A,B | A;B | _FG | _FG$ | _FG#]
       groupids      groupID [G20 | G30]
       outputby      output orientation [default | groupid | variable]
       variables     [default | KeyList1 | PigsList1 | CostList1
                      | FeedList1 | MediList1 | SalesList1 | DaysList1
                      | WeightList1 | All]
       reportformat  [Standard]
       dateformat    [default | %Y-%m-%d]
       webrootdir    [default | /pigknows]
       outputformat  [default | html | excel | pdf | txt | csv]
       fontsize      [default]
\endverbatim

\par Description
1. \a server specifies the database server name. The default is \c localhost.
2. \a customer specifies the customerID in uppercase.
3. \a user specifies the userID registered registered in \ref control_panel.
4. \a password specifies the secret password to access to the database.
5. \a language specified the language for displaying. The default is \c en.
6. \a farm specifies farmID in uppercase.
7. \a category specifies the category.
8. \a webrootdir specifies the web root directory. the default is \c /pigknows.
9. \a outputformat specifies the output format the default is \c html.
10. \a fontsize specifies the font size.




\sa \ref grower_barn_perform, \ref grower_closeout, \ref grower_history.

\section grower_group_history grower_group_history
\addindex grower_group_history
The command \c admin_inventory generate the 'Performance Monitor' report,
one of the breeding herd reports.


\par Synopsis
\verbatim
Usage: grower_group_history
       server        [localhost]
       customer      customerID
       user          userID
       password      secret
       language      [en | es | zh | de | fr | ro | pl | pt | nl]
       farm          farmID [A | A+B | A,B | A;B | _FG | _FG$ | _FG#]
       groupids      groupID [G20 | G30]
       reportformat  [Standard | FeedOnly | GrowerOnly | Summary]
       dateformat    [default | %Y-%m-%d]
       webrootdir    [default | /pigknows]
       outputformat  [default | html | excel | pdf | txt | csv]
       fontsize      [default]
\endverbatim

\par Description
1. \a server specifies the database server name. The default is \c localhost.
2. \a customer specifies the customerID in uppercase.
3. \a user specifies the userID registered registered in \ref control_panel.
4. \a password specifies the secret password to access to the database.
5. \a language specified the language for displaying. The default is \c en.
6. \a farm specifies farmID in uppercase.
7. \a category specifies the category.
8. \a webrootdir specifies the web root directory. the default is \c /pigknows.
9. \a outputformat specifies the output format the default is \c html.
10. \a fontsize specifies the font size.




\sa \ref grower_history, \ref grower_location_history, \ref feed_history.

\section grower_history grower_history
\addindex grower_history
The command \c admin_inventory generate the 'Performance Monitor' report,
one of the breeding herd reports.


\par Synopsis
\verbatim
Usage: grower_history
       server        [localhost]
       customer      customerID
       user          userID
       password      secret
       language      [en | es | zh | de | fr | ro | pl | pt | nl]
       farm          farmID [A | A+B | A,B | A;B | _FG | _FG$ | _FG#]
       barn          barnID [ALL | EACH]
       room          roomID [ALL | EACH]
       pen           penID [ALL | EACH]
       groupid       groupID [G20 | G30]
       ticket        ticketID
       lastday       [2009-12-31]
       period        [7d | 2w | 1m | 1q | 1y]
       eventname     [All | Begin Group | Purchase | Weaned In]
       variables     [All | your_choice]
       orderby       [default | barn,eventdate | barn,eventname
                      | eventdate | eventname | groupid]
       reportformat  [Standard | Standard]
       dateformat    [default | %Y-%m-%d]
       webrootdir    [default | /pigknows]
       outputformat  [default | html | excel | pdf | txt | csv]
       fontsize      [default]
\endverbatim

\par Description
1. \a server specifies the database server name. The default is \c localhost.
2. \a customer specifies the customerID in uppercase.
3. \a user specifies the userID registered registered in \ref control_panel.
4. \a password specifies the secret password to access to the database.
5. \a language specified the language for displaying. The default is \c en.
6. \a farm specifies farmID in uppercase.
7. \a category specifies the category.
8. \a webrootdir specifies the web root directory. the default is \c /pigknows.
9. \a outputformat specifies the output format the default is \c html.
10. \a fontsize specifies the font size.




\sa \ref grower_group_history, \ref feed_history.

\section grower_inventory grower_inventory
\addindex grower_inventory
The command \c admin_inventory generate the 'Performance Monitor' report,
one of the breeding herd reports.


\par Synopsis
\verbatim
Usage: grower_inventory
       server        [localhost]
       customer      customerID
       user          userID
       password      secret
       language      [en | es | zh | de | fr | ro | pl | pt | nl]
       farm          farmID [A | A+B | A,B | A;B | _FG | _FG$ | _FG#]
       barn          barnID [ALL | EACH]
       room          roomID [ALL | EACH]
       pen           penID <ALL | EACH]
       groupid       groupID [All | G20,G30]
       lastday       [2009-12-31]
       period        [7d | 2w | 1m | 1q | 1y]
       nperiod       [2]
       reportformat  [Standard | Breeder_Standard | Breeder_Detailed]
       dateformat    [default | %Y-%m-%d]
       webrootdir    [default | /pigknows]
       outputformat  [default | html | excel | pdf | txt | csv]
       fontsize      [default]
\endverbatim

\par Description
1. \a server specifies the database server name. The default is \c localhost.
2. \a customer specifies the customerID in uppercase.
3. \a user specifies the userID registered registered in \ref control_panel.
4. \a password specifies the secret password to access to the database.
5. \a language specified the language for displaying. The default is \c en.
6. \a farm specifies farmID in uppercase.
7. \a category specifies the category.
8. \a webrootdir specifies the web root directory. the default is \c /pigknows.
9. \a outputformat specifies the output format the default is \c html.
10. \a fontsize specifies the font size.




\sa \ref grower_availability, \ref grower_history, \ref grower_closeout.


\section grower_location_history grower_location_history 
\addindex grower_location_history
The command \c admin_inventory generate the 'Performance Monitor' report,
one of the breeding herd reports.

\par Synopsis
\verbatim
Usage: grower_location_history
       server        [localhost]
       customer      customerID
       user          userID
       password      secret
       language      [en | es | zh | de | fr | ro | pl | pt | nl]
       farm          farmID [A | A+B | A,B | A;B | _FG | _FG$ | _FG#]
       barn          barnID
       room          roomID [All | Each]
       pen           penID [All | Each]
       lastday       [2009-12-31]
       period        [7d | 2w | 1m | 1q | 1y]
       eventname     [All | Begin Loc | Purchase | Weaned In | Sales
                      | Death | Destroyed | Removal]
       variables     [ALL | your_choice]
       orderby       [default | barn,eventdate | barn,eventname |eventdate]
       reportformat  [Standard | Summary]
       dateformat    [default | %Y-%m-%d]
       webrootdir    [default | /pigknows]
       outputformat  [default | html | excel | pdf | txt | csv]
       fontsize      [default]
\endverbatim

\par Description
1. \a server specifies the database server name. The default is \c localhost.
2. \a customer specifies the customerID in uppercase.
3. \a user specifies the userID registered registered in \ref control_panel.
4. \a password specifies the secret password to access to the database.
5. \a language specified the language for displaying. The default is \c en.
6. \a farm specifies farmID in uppercase.
7. \a category specifies the category.
8. \a webrootdir specifies the web root directory. the default is \c /pigknows.
9. \a outputformat specifies the output format the default is \c html.
10. \a fontsize specifies the font size.




\sa grower_group_history, \ref grower_history.

\section grower_location_perform grower_location_perform
\addindex grower_location_perform
The command \c admin_inventory generate the 'Performance Monitor' report,
one of the breeding herd reports.

\par Synopsis
\verbatim
Usage: grower_location_perform
       server          [localhost]
       customer        customerID
       user            userID
       password        secret
       language        [en | es | zh | de | fr | ro | pl | pt | nl]
       farm            farmID [A | A+B | A,B | A;B | _FG | _FG$ | _FG#]
       lastday         [2009-12-31]
       period          [7d | 2w | 1m | 1q | 1y]
       nperiod         [2]
       barn            barnID
       room            roomID [All]
       pen             penID [All]
       include_oldpigs [Yes | No]
       reportformat    [Standard | Key | Detailed | Inventory | Feed
                        | FeedUsage | Summary]
       dateformat      [default | %Y-%m-%d]
       webrootdir      [default | /pigknows]
       outputformat    [default | html | excel | pdf | txt | csv]
       fontsize        [default]
\endverbatim

\par Description
1. \a server specifies the database server name. The default is \c localhost.
2. \a customer specifies the customerID in uppercase.
3. \a user specifies the userID registered registered in \ref control_panel.
4. \a password specifies the secret password to access to the database.
5. \a language specified the language for displaying. The default is \c en.
6. \a farm specifies farmID in uppercase.
7. \a category specifies the category.
8. \a webrootdir specifies the web root directory. the default is \c /pigknows.
9. \a outputformat specifies the output format the default is \c html.
10. \a fontsize specifies the font size.




\sa \ref growerr_location_history.

\section grower_mortality_chart grower_mortality_chart
\addindex grower_mortality_chart
The command \c admin_inventory generate the 'Performance Monitor' report,
one of the breeding herd reports.

\par Synopsis
\verbatim
Usage: grower_mortality_chart
       server        [localhost]
       customer      customerID
       user          userID
       password      secret
       language      [en | es | zh | de | fr | ro | pl | pt | nl]
       farm          farmID [A | A+B | A,B | A;B | _FG | _FG$ | _FG#]
       groupids      groupID [G20 | G30]
       lastday       [2009-12-31]
       period        [7d | 2w | 1m | 1q | 1y]
       reportformat  [Standard | DataOnly]
       dateformat    [default | %Y-%m-%d]
       webrootdir    [default | /pigknows]
       outputformat  [default | html | excel | pdf | txt | csv]
       fontsize      [default]
\endverbatim

\par Description
1. \a server specifies the database server name. The default is \c localhost.
2. \a customer specifies the customerID in uppercase.
3. \a user specifies the userID registered registered in \ref control_panel.
4. \a password specifies the secret password to access to the database.
5. \a language specified the language for displaying. The default is \c en.
6. \a farm specifies farmID in uppercase.
7. \a category specifies the category.
8. \a webrootdir specifies the web root directory. the default is \c /pigknows.
9. \a outputformat specifies the output format the default is \c html.
10. \a fontsize specifies the font size.




\sa \ref grower_weekly_mortality, \ref grower_death_analysis.


\section grower_mortality grower_mortality
\addindex grower_mortality
The command \c admin_inventory generate the 'Performance Monitor' report,
one of the breeding herd reports.

\par Synopsis
\verbatim
Usage: grower_mortality
       server        [localhost]
       customer      customerID
       user          userID
       password      secret
       language      [en | es | zh | de | fr | ro | pl | pt | nl]
       farm          farmID [A | A+B | A,B | A;B | _FG | _FG$ | _FG#]
       barn          barnID
       groupid       groupID [All]
       lastday       [2009-12-31]
       period        [7d | 2w | 1m | 1q | 1y]
       daysinweek    #days in a week [7 | 9 | 14]
       nwk           #weeks [4 | 10]
       reportformat  [Standard]
       dateformat    [default | %Y-%m-%d]
       webrootdir    [default | /pigknows]
       outputformat  [default | html | excel | pdf | txt | csv]
       fontsize      [default]
\endverbatim

\par Description
1. \a server specifies the database server name. The default is \c localhost.
2. \a customer specifies the customerID in uppercase.
3. \a user specifies the userID registered registered in \ref control_panel.
4. \a password specifies the secret password to access to the database.
5. \a language specified the language for displaying. The default is \c en.
6. \a farm specifies farmID in uppercase.
7. \a category specifies the category.
8. \a webrootdir specifies the web root directory. the default is \c /pigknows.
9. \a outputformat specifies the output format the default is \c html.
10. \a fontsize specifies the font size.




\sa \ref grower_death_analysis, \ref grower_weekly_mortality.

\section grower_perform grower_perform
\addindex grower_perform
The command \c admin_inventory generate the 'Performance Monitor' report,
one of the breeding herd reports.

\par Synopsis
\verbatim
Usage: grower_perform
       server        [localhost]
       customer      customerID
       user          userID
       password      secret
       language      [en | es | zh | de | fr | ro | pl | pt | nl]
       farm          farmID [A | A+B | A,B | A;B | _FG | _FG$ | _FG#]
       groupid       groupID [G20 | G30]
       lastday       [2009-12-31]
       period        [7d | 2w | 1m | 1q | 1y]
       barn          barnID [All]
       room          roomID [All]
       pen           penID [All]
       reportformat  [Standard | Detailed | Inventory | Key | 100
                      | Loss/Gain | FeedUsage | FeedDelivered | Profit]
       outputby      output orientation [default | variable | groupid]
       dateformat    [default | %Y-%m-%d]
       webrootdir    [default | /pigknows]
       outputformat  [default | html | excel | pdf | txt | csv]
       fontsize      [default]
\endverbatim

\par Description
1. \a server specifies the database server name. The default is \c localhost.
2. \a customer specifies the customerID in uppercase.
3. \a user specifies the userID registered registered in \ref control_panel.
4. \a password specifies the secret password to access to the database.
5. \a language specified the language for displaying. The default is \c en.
6. \a farm specifies farmID in uppercase.
7. \a groupid
8. \a lastday
9. \a period
10. \a category specifies the category.
11. \a webrootdir specifies the web root directory. the default is \c /pigknows.
12. \a outputformat specifies the output format the default is \c html.
13. \a fontsize specifies the font size.




\sa \ref grower_closeout, \ref grower_barn_perform, \ref grower_group_comparison.


\section grower_period_perform grower_period_perform
\addindex grower_period_perform
The command \c admin_inventory generate the 'Performance Monitor' report,
one of the breeding herd reports.

\par Synopsis
\verbatim
Usage: grower_period_perform
       server        [localhost]
       customer      customerID
       user          userID
       password      secret
       language      [en | es | zh | de | fr | ro | pl | pt | nl]
       farm          farmID [A | A+B | A,B | A;B | _FG | _FG$ | _FG#]
       lastday       [2009-12-31]
       period        [7d | 2w | 1m | 1q | 1y]
       nperiod       [2]
       reportformat  [Standard]
       dateformat    [default | %Y-%m-%d]
       webrootdir    [default | /pigknows]
       outputformat  [default | html | excel | pdf | txt | csv]
       fontsize      [default]
\endverbatim

\par Description
1. \a server specifies the database server name. The default is \c localhost.
2. \a customer specifies the customerID in uppercase.
3. \a user specifies the userID registered registered in \ref control_panel.
4. \a password specifies the secret password to access to the database.
5. \a language specified the language for displaying. The default is \c en.
6. \a farm specifies farmID in uppercase.
7. \a category specifies the category.
8. \a webrootdir specifies the web root directory. the default is \c /pigknows.
9. \a outputformat specifies the output format the default is \c html.
10. \a fontsize specifies the font size.




\sa \ref grower_perform, \ref grower_barn_perform, \ref grower_closeout.


\section grower_sales_history  grower_sales_history
\addindex grower_sales_history
The command \c admin_inventory generate the 'Performance Monitor' report,
one of the breeding herd reports.

\par Synopsis
\verbatim
Usage: grower_sales_history
       server        [localhost]
       customer      customerID
       user          userID
       password      secret
       language      [en | es | zh | de | fr | ro | pl | pt | nl]
       farm          farmID [A | A+B | A,B | A;B | _FG | _FG$ | _FG#]
       barn          barnID [ALL | EACH]
       lastday       [2009-12-31]
       period        [7d | 2w | 1m | 1q | 1y]
       groupid       groupID [G20 | G30]
       ticket        ticketID
       client        clientID
       driver        driverID
       truck         truchID
       destination   destinationID
       invoice       invoiceID
       exiti_order   exit_order
       variables     [All | your_choice]
       orderby       [default | barn,eventdate | barn,eventname
                      | eventdate | eventname | groupid]
       eventname     [SALES | REMOVAL]
       reportformat  [Standard | Standard]
       dateformat    [default | %Y-%m-%d]
       webrootdir    [default | /pigknows]
       outputformat  [default | html | excel | pdf | txt | csv]
       fontsize      [default]
\endverbatim

\par Description
1. \a server specifies the database server name. The default is \c localhost.
2. \a customer specifies the customerID in uppercase.
3. \a user specifies the userID registered registered in \ref control_panel.
4. \a password specifies the secret password to access to the database.
5. \a language specified the language for displaying. The default is \c en.
6. \a farm specifies farmID in uppercase.
7. \a category specifies the category.
8. \a webrootdir specifies the web root directory. the default is \c /pigknows.
9. \a outputformat specifies the output format the default is \c html.
10. \a fontsize specifies the font size.




\sa \ref location_sales_history, \ref sow_sales_history.

\section histogram histogram
\addindex histogram
The command \c admin_inventory generate the 'Performance Monitor' report,
one of the breeding herd reports.

\par Synopsis
\verbatim
Usage: histogram
       server        [localhost]
       customer      customerID
       user          userID
       password      secret
       language      [en | es | zh | de | fr | ro | pl | pt | nl]
       farm          farmID [A | A+B | A,B | A;B | _FG | _FG$ | _FG#]
       gline         genetic_line_list [ALL | LANDRACE,DUROC]
       xaxis         [age_on_arrival | age_on_removal | gestation_length
                      | lactation_length | liveborn | totalborn
                      | pigs_weaned | parity_at_service | parity_at_farrow]
       lastday       [2009-12-31]
       period        [7d | 2w | 1m | 1q | 1y]
       parity        [ALL | 0,1,2,3-5,6+ | 2,3,4]
       reportformat  [count | percent]
       dateformat    [default | %Y-%m-%d]
       webrootdir    [default | /pigknows]
       outputformat  [default | html | excel | pdf | txt]
       graphfname    filename to hold graph
       scriptfname   filename to hold script
\endverbatim

\par Description
1. \a server specifies the database server name. The default is \c localhost.
2. \a customer specifies the customerID in uppercase.
3. \a user specifies the userID registered registered in \ref control_panel.
4. \a password specifies the secret password to access to the database.
5. \a language specified the language for displaying. The default is \c en.
6. \a farm specifies farmID in uppercase.
7. \a category specifies the category.
8. \a webrootdir specifies the web root directory. the default is \c /pigknows.
9. \a outputformat specifies the output format the default is \c html.
10. \a fontsize specifies the font size.




\sa \ref scatter_chart, \ref trend_chart.

\section id_change_history id_change_history
\addindex id_change_history
The command \c admin_inventory generate the 'Performance Monitor' report,
one of the breeding herd reports.

\par Synopsis
\verbatim
Usage: id_change_history
       server        [localhost]
       customer      customerID
       user          userID
       password      secret
       language      [en | es | zh | de | fr | ro | pl | pt | nl]
       farm          farmID [A | A+B | A,B | A;B | _FG | _FG$ | _FG#]
       lastday       [2009-12-31]
       period        [7d | 2w | 1m | 1q | 1y]
       idtype        [SowId | BoarId]
       orderby       [changedate | newid | oldid]
       dateformat    [default | %Y-%m-%d]
       webrootdir    [default | /pigknows]
       outputformat  [default | html | excel | pdf | txt | csv]
       fontsize      [default]
\verbatim


\sa \ref sow_history.

\section id_list id_list
\addindex id_list
The command \c admin_inventory generate the 'Performance Monitor' report,
one of the breeding herd reports.

\par Synopsis
\verbatim
Usage: id_list
       server        [localhost]
       customer      customerID
       user          userID
       password      secret
       language      [en | es | zh | de | fr | ro | pl | pt | nl]
       farm          farmID [A | A+B | A,B | A;B | _FG | _FG$ | _FG#]
       idtype        [Sow | Boar | SowAltID | BoarAltID | GrowerGroup]
       reportformat  [Standard | Detailed]
       pstatus       [ONFARM | Entered | Served | Lactating | Removed | Idle]
       gline         [ALL | LANDRACE,DUROC]
       parity        [ALL | 0,1,2,3-5,6+ | 2,3,4]
       orderby       [sowid | altid | pstatus | gline]
       dateformat    [default | %Y-%m-%d]
       webrootdir    [default | /pigknows]
       outputformat  [default | html | excel | pdf | txt | csv]
       fontsize      [default]
\endverbatim

\par Description
1. \a server specifies the database server name. The default is \c localhost.
2. \a customer specifies the customerID in uppercase.
3. \a user specifies the userID registered registered in \ref control_panel.
4. \a password specifies the secret password to access to the database.
5. \a language specified the language for displaying. The default is \c en.
6. \a farm specifies farmID in uppercase.
7. \a category specifies the category.
8. \a webrootdir specifies the web root directory. the default is \c /pigknows.
9. \a outputformat specifies the output format the default is \c html.
10. \a fontsize specifies the font size.




\sa \ref sow_history.

\section interval_analysis  interval_analysis
\addindex interval_analysis
The command \c admin_inventory generate the 'Performance Monitor' report,
one of the breeding herd reports.

\par Synopsis
\verbatim
Usage: interval_analysis
       server        [localhost]
       customer      customerID
       user          userID
       password      secret
       language      [en | es | zh | de | fr | ro | pl | pt | nl]
       farm          farmID [A | A+B | A,B | A;B | _FG | _FG$ | _Fg#]
       lastday       [2009-12-31]
       period        [7d | 2w | 1m | 1q | 1y]
       nperiod       [2]
       parity        [ALL | 0,1,2,3-5,6+ | 2,3,4]
       gline         [ALL | LANDRACE,DUROC]
       reportformat  [Count | Percent | Both]
       intervalname  [LactLen | GestLen | Farrow1stWean | Farrow1stServ
                      | FarrowFarrow | Wean1stServ | ServAbort | ServPregExam
                      | Arrival1stServ | ArrivalRemoval | BeginRemoval | BirthRemoval]
       dateformat    [default | %Y-%m-%d]
       webrootdir    [default | /pigknows]
       outputformat  [default | html | excel | pdf | txt | csv]
       fontsize      [default]
\endverbatim

\par Description
1. \a server specifies the database server name. The default is \c localhost.
2. \a customer specifies the customerID in uppercase.
3. \a user specifies the userID registered registered in \ref control_panel.
4. \a password specifies the secret password to access to the database.
5. \a language specified the language for displaying. The default is \c en.
6. \a farm specifies farmID in uppercase.
7. \a category specifies the category.
8. \a webrootdir specifies the web root directory. the default is \c /pigknows.
9. \a outputformat specifies the output format the default is \c html.
10. \a fontsize specifies the font size.




\sa \ref perform_monitor.

\section kill_sheet_history kill_sheet_history
\addindex kill_sheet_history
The command \c admin_inventory generate the 'Performance Monitor' report,
one of the breeding herd reports.

\par Synopsis
\verbatim
Usage: kill_sheet_history
       server        [localhost]
       customer      customerID
       user          userID
       password      secret
       language      [en | es | zh | de | fr | ro | pl | pt | nl]
       farm          farmID <A | A+B | A,B | A;B | _FG | _FG$ | _FG#>
       tattoo        tattoo
       groupid       groupID[<G20 | G30,G40]
       lastday       [2009-12-31]
       period        [7d | 2w | 1m | 1q | 1y]
       variables     [ALL | your_choice]
       reportformat  [Standard | Summary]
       dateformat    [default | %Y-%m-%d]
       webrootdir    [default | /pigknows]
       outputformat  [default | html | excel | pdf | txt | csv]
       fontsize      [default]
\endverbatim

\par Description
1. \a server specifies the database server name. The default is \c localhost.
2. \a customer specifies the customerID in uppercase.
3. \a user specifies the userID registered registered in \ref control_panel.
4. \a password specifies the secret password to access to the database.
5. \a language specified the language for displaying. The default is \c en.
6. \a farm specifies farmID in uppercase.
7. \a category specifies the category.
8. \a webrootdir specifies the web root directory. the default is \c /pigknows.
9. \a outputformat specifies the output format the default is \c html.
10. \a fontsize specifies the font size.




\sa \ref feed_history, \ref grower_history.

\section lactation_chart lactation_chart
\addindex lactation_chart
The command \c admin_inventory generate the 'Performance Monitor' report,
one of the breeding herd reports.

\par Synopsis
\verbatim
Usage: lactation_chart
       server        [localhost]
       customer      customerID
       user          userID
       password      secret
       language      [en | es | zh | de | fr | ro | pl | pt | nl]
       farm          farmID [A | A+B | A,B | A;B | _FG | _FG$ | _FG#]
       gline         genetic lines [ALL | LANDRACE,DUROC]
       lastday       [2009-12-31]
       period        [7d | 2w | 1m | 1q | 1y]
       parity        [ALL | 0,1,2,3-5,6+ | 2,3,4]
       xaxis         [prevlactlen | prevpigsweaned | weanservint | wean1stservint
                      | weanestrusint | hnsservint | hns1stservint
                      | lactlength | servservint | entry1stservint | parity]
       yaxis         [liveborn | stillborn | mummies | totalborn |
                      wean1stservint1 | wean1stservint2]
       reportformat  [Standard | DataOnly]
       dateformat    [default | %Y-%m-%d]
       webrootdir    [default | /pigknows]
       outputformat  [default | html | excel | pdf | txt | csv]
       graphfname     filename to hold graph
       scriptfname    filename to hold script
\endverbatim

\par Description
1. \a server specifies the database server name. The default is \c localhost.
2. \a customer specifies the customerID in uppercase.
3. \a user specifies the userID registered registered in \ref control_panel.
4. \a password specifies the secret password to access to the database.
5. \a language specified the language for displaying. The default is \c en.
6. \a farm specifies farmID in uppercase.
7. \a category specifies the category.
8. \a webrootdir specifies the web root directory. the default is \c /pigknows.
9. \a outputformat specifies the output format the default is \c html.
10. \a fontsize specifies the font size.




\sa \ref control_chart, \ref scatter_chart.

\section last_event last_event 
\addindex last_event
The command \c admin_inventory generate the 'Performance Monitor' report,
one of the breeding herd reports.

\par Synopsis
\verbatim
Usage: last_event
       server        [localhost]
       customer      customerID
       user          userID
       password      secret
       languagae     [en | es | zh | de | fr | ro | pl | pt | nl]
       farm          farmID [A | A+B | A,B | A;B | _FG | _FG$ | _FG#]
       eventname     [Abortion | Farrow | Foster | Service
                      | Sow Arrival | Sow Removal | Wean | Treatments]
       nrecord       # record from the last event [1]
       reportformat  [Standard]
       dateformat    [default | %Y-%m-%d]
       webrootdir    [default | /pigknows]
       outputformat  [default | html | excel | pdf | txt | csv]
       fontsize      [default]
\endverbatim

\par Description
1. \a server specifies the database server name. The default is \c localhost.
2. \a customer specifies the customerID in uppercase.
3. \a user specifies the userID registered registered in \ref control_panel.
4. \a password specifies the secret password to access to the database.
5. \a language specified the language for displaying. The default is \c en.
6. \a farm specifies farmID in uppercase.
7. \a category specifies the category.
8. \a webrootdir specifies the web root directory. the default is \c /pigknows.
9. \a outputformat specifies the output format the default is \c html.
10. \a fontsize specifies the font size.




\sa \ref sow_perform, \ref gilt_perform, \ref gline_perform, \ref servtech_perform.

\section lastparity_data lastparity_data
\addindex lastparity_data
The command \c admin_inventory generate the 'Performance Monitor' report,
one of the breeding herd reports.

\par Synopsis
\verbatim
 Usage: lastparity_data
        server        [localhost]
        customer      customerID
        user          userID
        password      secret
        langugae      [en]
        farm          farmID
        lastparity    integer [1 | 2]
        dirname       directory name
\endverbatim

\par Description
1. \a server specifies the database server name. The default is \c localhost.
2. \a customer specifies the customerID in uppercase.
3. \a user specifies the userID registered registered in \ref control_panel.
4. \a password specifies the secret password to access to the database.
5. \a language specified the language for displaying. The default is \c en.
6. \a farm specifies farmID in uppercase.
7. \a category specifies the category.
8. \a webrootdir specifies the web root directory. the default is \c /pigknows.
9. \a outputformat specifies the output format the default is \c html.
10. \a fontsize specifies the font size.




\sa \ref lastevent_data,\ref data_extract.

\section license_bill license_bill
\addindex license_bill
The command \c admin_inventory generate the 'Performance Monitor' report,
one of the breeding herd reports.

\par Synopsis
\verbatim
 Usage: license_bill
        server         [localhost]
        admin_user     administrator user ID
        admin_password administrator password
        customer       customerID
        langugae       [en | es | zh | de | fr | ro | pl | pt | nl]
        bill_yearmonth [2009-12]
        webrootdir     [default | /pigknows]
\endverbatim

\par Description
1. \a server specifies the database server name. The default is \c localhost.
2. \a customer specifies the customerID in uppercase.
3. \a user specifies the userID registered registered in \ref control_panel.
4. \a password specifies the secret password to access to the database.
5. \a language specified the language for displaying. The default is \c en.
6. \a farm specifies farmID in uppercase.
7. \a category specifies the category.
8. \a webrootdir specifies the web root directory. the default is \c /pigknows.
9. \a outputformat specifies the output format the default is \c html.
10. \a fontsize specifies the font size.



\section litter_balance litter_balance
\addindex litter_balance
The command \c admin_inventory generate the 'Performance Monitor' report,
one of the breeding herd reports.

\par Synopsis
\verbatim
 Usage: litter_balance
        server         [localhost]
        customer       customerID
        user           userID
        password       secret
        language       [en | es | zh | de | fr | ro | pl | pt | nl]
        farm           farmID [A | A+B | A,B | A;B | _FG | _FG$ | _FG#]
        lastday        [2009-12-31]
        period         [7d | 2w | 1m | 1q | 1y]
        orderby        [balance | sowid | eventdate]
        baseevent      [Farrow | Wean | LastWean]
        unbalancedonly [1 | 0]
        reportformat  [Standard]
        dateformat     [default | %Y-%m-%d]
        webrootdir     [default | /pigknows]
        outputformat   [default | html | excel | pdf | txt | csv]
        fontsize       [default]
\endverbatim

\par Description
1. \a server specifies the database server name. The default is \c localhost.
2. \a customer specifies the customerID in uppercase.
3. \a user specifies the userID registered registered in \ref control_panel.
4. \a password specifies the secret password to access to the database.
5. \a language specified the language for displaying. The default is \c en.
6. \a farm specifies farmID in uppercase.
7. \a category specifies the category.
8. \a webrootdir specifies the web root directory. the default is \c /pigknows.
9. \a outputformat specifies the output format the default is \c html.
10. \a fontsize specifies the font size.




\sa \ref litter_selection.

\section litter_selection litter_selection
\addindex litter_selection
The command \c admin_inventory generate the 'Performance Monitor' report,
one of the breeding herd reports.

\par Synopsis
\verbatim
 Usage: litter_selection
        server        [localhost]
        customer      customerID
        user          userID
        password      secret
        language      [en | es | zh | de | fr | ro | pl | pt | nl]
        farm          farmID [A | A+B | A,B | A;B | _FG | _FG$ | _FG#]
        groupby       [farrowdate | litterid]
        lastday       [2009-12-31]
        period        [7d | 2w | 1m | 1q | 1y]
        litterids     litterId list
        orderby       [litterid | dam | damgline | parity | totalborn |
                       liveborn | weaned | adj21daywt | bvsp | birthdate]
        formula       [Standard | PePe]
        reportformat  [Standard]
        dateformat    [default | %Y-%m-%d]
        webrootdir    [default | /pigknows]
        outputformat  [default | html | excel | pdf | txt | csv]
        fontsize      [default]
\endverbatim

\par Description
1. \a server specifies the database server name. The default is \c localhost.
2. \a customer specifies the customerID in uppercase.
3. \a user specifies the userID registered registered in \ref control_panel.
4. \a password specifies the secret password to access to the database.
5. \a language specified the language for displaying. The default is \c en.
6. \a farm specifies farmID in uppercase.
7. \a category specifies the category.
8. \a webrootdir specifies the web root directory. the default is \c /pigknows.
9. \a outputformat specifies the output format the default is \c html.
10. \a fontsize specifies the font size.




\sa \ref litter_balance

\section location_death_analysis location_death_analysis
\addindex location_death_analysis
The command \c admin_inventory generate the 'Performance Monitor' report,
one of the breeding herd reports.

\par Synopsis
\verbatim
 Usage: location_death_analysis
        server          [localhost]
        customer        customerID
        user            userID
        password        secret
        language        [en | es | zh | de | fr | ro | pl | pt | nl]
        farm            farmID [A | A+B | A,B | A;B | _FG | _FG$ | _FG#]
        gline           [ALL | LANDRACE,DUROC]
        barn            [ALL | EACH]
        room            [ALL | EACH]
        pen             [ALL | EACH]
        lastday         [2009-12-31]
        period          [7d | 2w | 1m | 1q | 1y]
        nperiod         [2]
        agedist         [ALL | 0,1,2,3-5,6+ | 2,3,4]
        include_oldpigs [Yes | NO]
        reporttype      [default | Count | Percent | Both]
        reportformat    [default | Standard | Summary]
        dateformat      [default | %Y-%m-%d]
        webrootdir      [default | /pigknows]
        outputformat    [default | html | excel | pdf | txt | csv]
        fontsize        [default]
\endverbatim

\par Description
1. \a server specifies the database server name. The default is \c localhost.
2. \a customer specifies the customerID in uppercase.
3. \a user specifies the userID registered registered in \ref control_panel.
4. \a password specifies the secret password to access to the database.
5. \a language specified the language for displaying. The default is \c en.
6. \a farm specifies farmID in uppercase.
7. \a category specifies the category.
8. \a webrootdir specifies the web root directory. the default is \c /pigknows.
9. \a outputformat specifies the output format the default is \c html.
10. \a fontsize specifies the font size.




\sa \ref grower_location_history, \ref grower_death_analysis, \reg grower_mortality.

\section location_feed_delivered location_feed_delivered
\addindex location_feed_delivered
The command \c admin_inventory generate the 'Performance Monitor' report,
one of the breeding herd reports.

\par Synopsis
\verbatim
 Usage: location_feed_delivered
        server        [localhost]
        customer      customerID
        user          userID
        password      secret
        language      [en | es | zh | de | fr | ro | pl | pt | nl]
        farm          farmID [A | A+B | A,B | A;B | _FG | _FG$ | _FG#]
        lastday       [2009-12-31]
        period        [7d | 2w | 1m | 1q | 1y]
        nperiod       [2]
        barn          barnID
        room          roomID [ALL]
        pen           penID [ALL]
        orderby       [default]
        reportformat  [Standard | Detailed | Summary]
        dateformat    [default | %Y-%m-%d]
        webrootdir    [default | /pigknows]
        outputformat  [default | html | excel | pdf | txt | csv]
        fontsize      [default]
\endverbatim

\par Description
1. \a server specifies the database server name. The default is \c localhost.
2. \a customer specifies the customerID in uppercase.
3. \a user specifies the userID registered registered in \ref control_panel.
4. \a password specifies the secret password to access to the database.
5. \a language specified the language for displaying. The default is \c en.
6. \a farm specifies farmID in uppercase.
7. \a category specifies the category.
8. \a webrootdir specifies the web root directory. the default is \c /pigknows.
9. \a outputformat specifies the output format the default is \c html.
10. \a fontsize specifies the font size.




\sa \ref location_history, \ref feed_delivered.

\section location_sales_history location_sales_history
\addindex location_sales_history
The command \c admin_inventory generate the 'Performance Monitor' report,
one of the breeding herd reports.

\par Synopsis

\verbatim
 Usage: location_sales_history
        server        [localhost]
        customer      customerID
        user          userID
        password      secret
        language      [en | es | zh | de | fr | ro | pl | pt | nl]
        farm          farmID [A | A+B | A,B | A;B | _FG | _FG$ | _FG#]
        barn          barnID [ALL | EACH]
        lastday       [2009-12-31]
        period        [7d | 2w | 1m | 1q | 1y]
        ticket        ticketID
        client        clientID
        driver        driverID
        truck         truchID
        destination   destinationID
        invoice       invoiceID
        exiti_order   exit_order
        variables     [All | your_choice]
        orderby       [default | barn,eventdate | barn,eventname |
                       eventdate | eventname]
        eventname     [SALES | REMOVAL]
        reportformat  [Standard | Standard]
        dateformat    [default | %Y-%m-%d]
        webrootdir    [default | /pigknows]
        outputformat  [default | html | excel | pdf | txt | csv]
        fontsize      [default]
\endverbatim

\par Description
1. \a server specifies the database server name. The default is \c localhost.
2. \a customer specifies the customerID in uppercase.
3. \a user specifies the userID registered registered in \ref control_panel.
4. \a password specifies the secret password to access to the database.
5. \a language specified the language for displaying. The default is \c en.
6. \a farm specifies farmID in uppercase.
7. \a category specifies the category.
8. \a webrootdir specifies the web root directory. the default is \c /pigknows.
9. \a outputformat specifies the output format the default is \c html.
10. \a fontsize specifies the font size.




\sa \ref grower_sales_history, \ref sow_sales_history.

\section matings_service matings_service
\addindex matings_service
The command \c admin_inventory generate the 'Performance Monitor' report,
one of the breeding herd reports.

\par Synopsis
\verbatim
 Usage: matings_service
        server        [localhost]
        customer      customerID
        user          userID
        password      secret
        language      [en | es | zh | de | fr | ro | pl | pt | nl]
        farm          farmID [A | A+B | A,B | A;B | _FG | _FG$ | _FG#]
        gline         [ALL | LANDRACE,DUROC]
        lastday       [2009-12-31]
        period        [7d | 2w | 1m | 1q | 1y]
        parity        [ALL | 0,1,2,3-5,6+ | 2,3,4]
        reportformat  [Standard]
        dateformat    [default | %Y-%m-%d]
        webrootdir    [default | /pigknows]
        outputformat  [default | html | excel | pdf | txt | csv]
        fontsize      [default]
\endverbatim

\par Description
1. \a server specifies the database server name. The default is \c localhost.
2. \a customer specifies the customerID in uppercase.
3. \a user specifies the userID registered registered in \ref control_panel.
4. \a password specifies the secret password to access to the database.
5. \a language specified the language for displaying. The default is \c en.
6. \a farm specifies farmID in uppercase.
7. \a category specifies the category.
8. \a webrootdir specifies the web root directory. the default is \c /pigknows.
9. \a outputformat specifies the output format the default is \c html.
10. \a fontsize specifies the font size.




\sa \ref cusum_chart, \ref service_result.

\section pedigree_view pedigree_view
\addindex pedigree_view
The command \c admin_inventory generate the 'Performance Monitor' report,
one of the breeding herd reports.

\par Synopsis
\verbatim
 Usage: pedigree_view
        server        [localhost]
        customer      customerID
        user          userID
        password      secret
        language      [en | es | zh | de | fr | ro | pl | pt | nl]
        farm          farmID [A | A+B | A,B | A;B | _FG | _FG$ | _FG#]
        gline         [ALL | LANDRACE,DUROC]
        reportformat  [STANDARD | DETAILED]
        orderby       [pigid | gline | sire | dam | litterid | sex]
        dateformat    [default | %Y-%m-%d]
        webrootdir    [default | /pigknows]
        outputformat  [default | html | excel | pdf | txt | csv]
        fontsize      [default]
\endverbatim

\par Description
1. \a server specifies the database server name. The default is \c localhost.
2. \a customer specifies the customerID in uppercase.
3. \a user specifies the userID registered registered in \ref control_panel.
4. \a password specifies the secret password to access to the database.
5. \a language specified the language for displaying. The default is \c en.
6. \a farm specifies farmID in uppercase.
7. \a category specifies the category.
8. \a webrootdir specifies the web root directory. the default is \c /pigknows.
9. \a outputformat specifies the output format the default is \c html.
10. \a fontsize specifies the font size.




\sa \ref service_list, \ref matings_service.

\section perform_monitor perform_monitor
\addindex perform_monitor
The command \c admin_inventory generate the 'Performance Monitor' report,
one of the breeding herd reports.

\par Synopsis
\verbatim
 Usage: perform_monitor
        server        [localhost]
        customer      customerID
        user          userID
        password      secret
        language      [en | es | zh | de | fr | ro | pl | pt | nl]
        farm          farmID [A | A+B | A,B | A;B | _FG | _FG$ | _FG#]
        lastday       [2009-12-31]
        period        [7d | 2w | 1m | 1q | 1y]
        nperiod       [2]
        parity        parity_list [ALL | 0,1,2,3-5,6+ | 2,3,4]
        gline         genetic_line_list [ALL | LANDRACE,DUROC]
        summary       [default | TOTAL | AVERAGE | NONE]
        reportformat  [STANDARD | DETAILED | KEY | SHORT1 | SHORT2
                       SHORT3 | YTD | _customized.userid]
        reporttype    [ALL | BREEDING | FARROWING | WEANING | INVENTORY]
        printtarget   [0 | 1]
        dateformat    [default | %Y-%m-%d]
        webrootdir    [default | /pigknows]
        outputformat  [default | html | excel | pdf | txt | csv]
        fontsize      [default]
\endverbatim

\par Description
1. \a server specifies the database server name. The default is \c localhost.
2. \a customer specifies the customerID in uppercase.
3. \a user specifies the userID registered registered in \ref control_panel.
4. \a password specifies the secret password to access to the database.
5. \a language specified the language for displaying. The default is \c en.
6. \a farm specifies farmID in uppercase.
7. \a category specifies the category.
8. \a webrootdir specifies the web root directory. the default is \c /pigknows.
9. \a outputformat specifies the output format the default is \c html.
10. \a fontsize specifies the font size.




\sa \ref sow_perform, \ref gilts_perform, \ref gline_perform.

\section piggydeck_history piggydeck_history
\addindex piggydeck_history
The command \c admin_inventory generate the 'Performance Monitor' report,
one of the breeding herd reports.

\par Synopsis
\verbatim
 Usage: piggydeck_history
        server        [localhost]
        customer      customerID
        user          userID
        password      secret
        language      [en | es | zh | de | fr | ro | pl | pt | nl]
        farm          farmID [A | A+B | A,B | A;B | _FG | _FG$ | _FG#]
        lastday       [2009-12-31]
        period        [7d | 2w | 1m | 1q | 1y]
        variables     [ALL | your_choice]
        reportformat  [Standard | Summary]
        dateformat    [default | %Y-%m-%d]
        webrootdir    [default | /pigknows]
        outputformat  [default | html | excel | pdf | txt | csv]
        fontsize      [default]
\endverbatim

\par Description
1. \a server specifies the database server name. The default is \c localhost.
2. \a customer specifies the customerID in uppercase.
3. \a user specifies the userID registered registered in \ref control_panel.
4. \a password specifies the secret password to access to the database.
5. \a language specified the language for displaying. The default is \c en.
6. \a farm specifies farmID in uppercase.
7. \a category specifies the category.
8. \a webrootdir specifies the web root directory. the default is \c /pigknows.
9. \a outputformat specifies the output format the default is \c html.
10. \a fontsize specifies the font size.



\section piglet_death_analysis piglet_death_analysis
\addindex piglet_death_analysis
The command \c admin_inventory generate the 'Performance Monitor' report,
one of the breeding herd reports.

\par Synopsis
\verbatim
 Usage: piglet_death_analysis
        server        [localhost]
        customer      customerID
        user          userID
        password      secret
        language      [en | es | zh | de | fr | ro | pl | pt | nl]
        farm          farmID [A | A+B | A,B | A;B | _FG | _FG$ | _FG#]
        lastday       [2009-12-31]
        period        [7d | 2w | 1m | 1q | 1y]
        nperiod       [2]
        paritydist    [ALL | 0,1,2,3-5,6+ | 2,3,4]
        agedist       [ALL | 0,1,2,3-5,6+ | 2,3,4]
        gline         [ALL | LANDRACE,DUROC]
        reportformat  [Count | Percent | Both]
        reporttype    [Main Categories | All Reasons | Summary]
        dateformat    [default | %Y-%m-%d]
        webrootdir    [default | /pigknows]
        outputformat  [default | html | excel | pdf | txt | csv]
        fontsize      [default]
\endverbatim

\par Description
1. \a server specifies the database server name. The default is \c localhost.
2. \a customer specifies the customerID in uppercase.
3. \a user specifies the userID registered registered in \ref control_panel.
4. \a password specifies the secret password to access to the database.
5. \a language specified the language for displaying. The default is \c en.
6. \a farm specifies farmID in uppercase.
7. \a category specifies the category.
8. \a webrootdir specifies the web root directory. the default is \c /pigknows.
9. \a outputformat specifies the output format the default is \c html.
10. \a fontsize specifies the font size.




\sa \ref piglet_loss_analysis.

\section piglet_inventory piglet_inventory
\addindex piglet_inventory
The command \c admin_inventory generate the 'Performance Monitor' report,
one of the breeding herd reports.

\par Synopsis
\verbatim
 Usage: piglet_inventory
        server        [localhost]
        customer      customerID
        user          userID
        password      secret
        language      [en | es | zh | de | fr | ro | pl | pt | nl]
        farm          farmID [A | A+B | A,B | A;B | _FG | _FG$ | _FG#]
        lastday       [2009-12-31]
        period        [7d | 2w | 1m | 1q | 1y]
        nperiod       [2]
        startday      [2009-12-31]
        gline         [ALL | LANDRACE,DUROC]
        reportformat  [Standard]
        dateformat    [default | %Y-%m-%d]
        webrootdir    [default | /pigknows]
        outputformat  [default | html | excel | pdf | txt | csv]
        fontsize      [default]
\endverbatim

\par Description
1. \a server specifies the database server name. The default is \c localhost.
2. \a customer specifies the customerID in uppercase.
3. \a user specifies the userID registered registered in \ref control_panel.
4. \a password specifies the secret password to access to the database.
5. \a language specified the language for displaying. The default is \c en.
6. \a farm specifies farmID in uppercase.
7. \a category specifies the category.
8. \a webrootdir specifies the web root directory. the default is \c /pigknows.
9. \a outputformat specifies the output format the default is \c html.
10. \a fontsize specifies the font size.




\sa \ref pregnant_sow_inventory.

\section piglet_loss_analysis piglet_loss_analysis
\addindex piglet_loss_analysis
The command \c admin_inventory generate the 'Performance Monitor' report,
one of the breeding herd reports.

\par Synopsis
\verbatim
 Usage: piglet_loss_analysis
        server        [localhost]
        customer      customerID
        user          userID
        password      secret
        language      [en | es | zh | de | fr | ro | pl | pt | nl]
        farm          farmID <A | A+B | A,B | A;B | _FG | _FG$ | _FG#]
        lastday       [2009-12-31]
        period        [7d | 2w | 1m | 1q | 1y]
        nperiod       [2]
        paritydist    [ALL | 0,1,2,3-5,6+ | 2,3,4]
        agedist       [ALL | 0,1,2,3-5,6+ | 2,3,4]
        gline         [ALL | LANDRACE,DUROC]
        reportformat  [Count | Percent | Both]
        reporttype    [All Reasons | Main Categories | Summary]
        dateformat    [default | %Y-%m-%d]
        webrootdir    [default | /pigknows]
        outputformat  [default | html | excel | pdf | txt | csv]
        fontsize      [default]
\endverbatim

\par Description
1. \a server specifies the database server name. The default is \c localhost.
2. \a customer specifies the customerID in uppercase.
3. \a user specifies the userID registered registered in \ref control_panel.
4. \a password specifies the secret password to access to the database.
5. \a language specified the language for displaying. The default is \c en.
6. \a farm specifies farmID in uppercase.
7. \a category specifies the category.
8. \a webrootdir specifies the web root directory. the default is \c /pigknows.
9. \a outputformat specifies the output format the default is \c html.
10. \a fontsize specifies the font size.




\sa \ref piglet_death_analysis.

\section piglet_management piglet_management
\addindex piglet_management
The command \c admin_inventory generate the 'Performance Monitor' report,
one of the breeding herd reports.

\par Synopsis
\verbatim
 Usage: piglet_management
        server        [localhost]
        customer      customerID
        user          userID
        password      secret
        language      [en | es | zh | de | fr | ro | pl | pt | nl]
        farm          farmID [A | A+B | A,B | A;B | _FG | _FG$ | _FG#]
        lastday       [2009-12-31]
        period        [7d | 2w | 1m | 1q | 1y]
        nperiod       [2]
        parity        [ALL | 0,1,2,3-5,6+ | 2,3,4]
        gline         [ALL | LANDRACE,DUROC]
        reportformat  [Standard]
        dateformat    [default | %Y-%m-%d]
        webrootdir    [default | /pigknows]
        outputformat  [default | html | excel | pdf | txt | csv]
        fontsize      [default]
\endverbatim

\par Description
1. \a server specifies the database server name. The default is \c localhost.
2. \a customer specifies the customerID in uppercase.
3. \a user specifies the userID registered registered in \ref control_panel.
4. \a password specifies the secret password to access to the database.
5. \a language specified the language for displaying. The default is \c en.
6. \a farm specifies farmID in uppercase.
7. \a category specifies the category.
8. \a webrootdir specifies the web root directory. the default is \c /pigknows.
9. \a outputformat specifies the output format the default is \c html.
10. \a fontsize specifies the font size.




\sa \ref piglet_death_analysis.

\section pregnancy_loss pregnancy_loss
\addindex pregnancy_loss
The command \c admin_inventory generate the 'Performance Monitor' report,
one of the breeding herd reports.

\par Synopsis
\verbatim
 Usage: pregnancy_loss
        server        [localhost]
        customer      customerID
        user          userID
        password      secret
        language      [en | es | zh | de | fr | ro | pl | pt | nl]
        farm          farmID [A | A+B | A,B | A;B | _FG | _FG$ | _FG#]
        lastday       [2009-12-31]
        period        [7d | 2w | 1m | 1q | 1y]
        nperiod       [2]
        parity        [ALL | 0,1,2,3-5,6+ | 2,3,4]
        gline         [ALL | LANDRACE,DUROC]
        reportformat  [Standard]
        dateformat    [default | %Y-%m-%d]
        webrootdir    [default | /pigknows]
        outputformat  [default | html | excel | pdf | txt | csv]
        fontsize      [default]
\endverbatim

\par Description
1. \a server specifies the database server name. The default is \c localhost.
2. \a customer specifies the customerID in uppercase.
3. \a user specifies the userID registered registered in \ref control_panel.
4. \a password specifies the secret password to access to the database.
5. \a language specified the language for displaying. The default is \c en.
6. \a farm specifies farmID in uppercase.
7. \a category specifies the category.
8. \a webrootdir specifies the web root directory. the default is \c /pigknows.
9. \a outputformat specifies the output format the default is \c html.
10. \a fontsize specifies the font size.




\sa

\section pregnant_sow_inventory pregnant_sow_inventory
\addindex pregnant_sow_inventory
The command \c admin_inventory generate the 'Performance Monitor' report,
one of the breeding herd reports.

\par Synopsis
\verbatim
 Usage: pregnant_sow_inventory
        server        [localhost]
        customer      customerID
        user          userID
        password      secret
        language      [en | es | zh | de | fr | ro | pl | pt | nl]
        farm          farmID <A | A+B | A,B | A;B | _FG | _FG$ | _FG#]
        lastday       [2009-12-31]
        period        [7d | 2w | 1m | 1q | 1y]
        parity        [ALL | 0,1,2,3-5,6+ | 2,3,4]
        cross         [ALL | 1 X 1 | 1 X 2, 2 X 1]
        reportformat  [Standard]
        inctransserv  [YES | NO]
        dateformat    [default | %Y-%m-%d]
        webrootdir    [default | /pigknows]
        outputformat  [default | html | excel | pdf | txt | csv]
        fontsize      [default]
\endverbatim

\par Description
1. \a server specifies the database server name. The default is \c localhost.
2. \a customer specifies the customerID in uppercase.
3. \a user specifies the userID registered registered in \ref control_panel.
4. \a password specifies the secret password to access to the database.
5. \a language specified the language for displaying. The default is \c en.
6. \a farm specifies farmID in uppercase.
7. \a category specifies the category.
8. \a webrootdir specifies the web root directory. the default is \c /pigknows.
9. \a outputformat specifies the output format the default is \c html.
10. \a fontsize specifies the font size.




\sa \ref piglet_inventory.

\section productivity_analysis productivity_analysis
\addindex productivity_analysis
The command \c admin_inventory generate the 'Performance Monitor' report,
one of the breeding herd reports.

\par Synopsis
\verbatim
 Usage: productivity_analysis
        server        [localhost]
        customer      customerID
        user          userID
        password      secret
        language      [en | es | zh | de | fr | ro | pl | pt | nl]
        farm          farmID [A | A+B | A,B | A;B | _FG | _FG$ | _FG#]
        lastday       [2009-12-31]
        period        [7d | 2w | 1m | 1q | 1y]
        nperiod       [2]
        parity        [ALL | 0,1,2,3-5,6+ | 2,3,4]
        gline         [ALL | LANDRACE,DUROC]
        reportformat  [Standard]
        dateformat    [default | %Y-%m-%d]
        webrootdir    [default | /pigknows]
        outputformat  [default | html | excel | pdf | txt | csv]
        fontsize      [default]
\endverbatim

\par Description
1. \a server specifies the database server name. The default is \c localhost.
2. \a customer specifies the customerID in uppercase.
3. \a user specifies the userID registered registered in \ref control_panel.
4. \a password specifies the secret password to access to the database.
5. \a language specified the language for displaying. The default is \c en.
6. \a farm specifies farmID in uppercase.
7. \a category specifies the category.
8. \a webrootdir specifies the web root directory. the default is \c /pigknows.
9. \a outputformat specifies the output format the default is \c html.
10. \a fontsize specifies the font size.




\sa \ref cohort_analysis, \ref perform_monitor.

\section prolific_sow_list prolific_sow_list
\addindex prolific_sow_list
The command \c admin_inventory generate the 'Performance Monitor' report,
one of the breeding herd reports.

\par Synopsis
\verbatim
 Usage: prolific_sow_list
        server        [localhost]
        customer      customerID
        user          userID
        password      secret
        language      [en | es | zh | de | fr | ro | pl | pt | nl]
        farm          farmID [A | A+B | A,B | A;B | _FG | _FG$ | _FG#]
        groupby       [pstatus | servdate | farrowdate | sowid]
        pstatus       [ALL | LACTATING | DUE TO FARROW |
                       WEANED | ONFARM | REMOVED]
        lastday       [2009-12-31]
        period        [7d | 2w | 1m | 1q | 1y]
        gline         [ALL | LANDRACE,DUROC]
        parity        [ALL | 0,1,2,3-5,6+ | 2,3,4]
        orderby       [sowid | altid | totalborn | liveborn | gline |
                       pigs weaned | bvsp | pstatus | pstatusdate |
                       servgroup | parity]
        top           [10% | 20% | 100% | 10 | 20]
        formula       [Standard | PePe | BLUP]
        reportformat  [Standard]
        dateformat    [default | %Y-%m-%d]
        webrootdir    [default | /pigknows]
        outputformat  [default | html | excel | pdf | txt | csv]
        fontsize      [default]
\endverbatim

\par Description
1. \a server specifies the database server name. The default is \c localhost.
2. \a customer specifies the customerID in uppercase.
3. \a user specifies the userID registered registered in \ref control_panel.
4. \a password specifies the secret password to access to the database.
5. \a language specified the language for displaying. The default is \c en.
6. \a farm specifies farmID in uppercase.
7. \a category specifies the category.
8. \a webrootdir specifies the web root directory. the default is \c /pigknows.
9. \a outputformat specifies the output format the default is \c html.
10. \a fontsize specifies the font size.




\sa \ref litter_selection, \ref sow_perform.

\section ration_view ration_view
\addindex ration_view
The command \c admin_inventory generate the 'Performance Monitor' report,
one of the breeding herd reports.

\par Synopsis
\verbatim
 Usage: ration_view
        server        [localhost]
        customer      customerID
        user          userID
        password      secret
        language      [en | es | zh | de | fr | ro | pl | pt | nl]
        farm          farmID [A | A+B | A,B | A;B | _FG | _FG$ | _FG#]
        barn          barnID [ALL]
        groupid       [7d | 2w | 1m | 1q | 1y]
        reportformat  [STANDARD]
        webrootdir    [default | /pigknows]
        outputformat  [default | html | excel | pdf | txt | csv]
        fontsize      [default]
\endverbatim

\par Description
1. \a server specifies the database server name. The default is \c localhost.
2. \a customer specifies the customerID in uppercase.
3. \a user specifies the userID registered registered in \ref control_panel.
4. \a password specifies the secret password to access to the database.
5. \a language specified the language for displaying. The default is \c en.
6. \a farm specifies farmID in uppercase.
7. \a category specifies the category.
8. \a webrootdir specifies the web root directory. the default is \c /pigknows.
9. \a outputformat specifies the output format the default is \c html.
10. \a fontsize specifies the font size.




\sa \ref feed_budget.

\section repeat_estrus  repeat_estrus
\addindex repeat_estrus
The command \c admin_inventory generate the 'Performance Monitor' report,
one of the breeding herd reports.

\par Synopsis
\verbatim
 Usage: repeat_estrus
        server        [localhost]
        customer      customerID
        user          userID
        password      secret
        language      [en | es | zh | de | fr | ro | pl | pt | nl]
        farm          farmID <A | A+B | A,B | A;B | _FG | _FG$ | _FG#]
        gline         [ALL | LANDRACE,DUROC]
        lastday       [2009-12-31]
        period        [7d | 2w | 1m | 1q | 1y]
        nperiod       [2]
        parity        [ALL | 0,1,2,3-5,6+ | 2,3,4]
        reportformat  [Count | Percent | Both]
        dateformat    [default | %Y-%m-%d]
        webrootdir    [default | /pigknows]
        outputformat  [default | html | excel | pdf | txt | csv]
        fontsize      [default]
\endverbatim

\par Description
1. \a server specifies the database server name. The default is \c localhost.
2. \a customer specifies the customerID in uppercase.
3. \a user specifies the userID registered registered in \ref control_panel.
4. \a password specifies the secret password to access to the database.
5. \a language specified the language for displaying. The default is \c en.
6. \a farm specifies farmID in uppercase.
7. \a category specifies the category.
8. \a webrootdir specifies the web root directory. the default is \c /pigknows.
9. \a outputformat specifies the output format the default is \c html.
10. \a fontsize specifies the font size.




\sa \ref returns_post_weaning.

\section returns_post_weaning returns_post_weaning
\addindex returns_post_weaning
The command \c admin_inventory generate the 'Performance Monitor' report,
one of the breeding herd reports.

\par Synopsis
\verbatim
 Usage: returns_post_weaning
        server        [localhost]
        customer      customerID
        user          userID
        password      secret
        language      [en | es | zh | de | fr | ro | pl | pt | nl]
        farm          farmID [A | A+B | A,B | A;B | _FG | _FG$ | _FG#]
        gline         [ALL | LANDRACE,DUROC]
        lastday       [2009-12-31]
        period        [7d | 2w | 1m | 1q | 1y]
        nperiod       [2]
        parity        [ALL | 0,1,2,3-5,6+ | 2,3,4]
        reportformat  [COUNT | PERCENT | BOTH]
        dateformat    [default | %Y-%m-%d]
        webrootdir    [default | /pigknows]
        outputformat  [default | html | excel | pdf | txt | csv]
        fontsize      [default]
\endverbatim

\par Description
1. \a server specifies the database server name. The default is \c localhost.
2. \a customer specifies the customerID in uppercase.
3. \a user specifies the userID registered registered in \ref control_panel.
4. \a password specifies the secret password to access to the database.
5. \a language specified the language for displaying. The default is \c en.
6. \a farm specifies farmID in uppercase.
7. \a category specifies the category.
8. \a webrootdir specifies the web root directory. the default is \c /pigknows.
9. \a outputformat specifies the output format the default is \c html.
10. \a fontsize specifies the font size.




\sa \ref \repeated_estrus.

\section run_chart run_chart
\addindex run_chart
The command \c admin_inventory generate the 'Performance Monitor' report,
one of the breeding herd reports.

\par Synopsis
\verbatim
 Usage: run_chart
        server        [localhost]
        customer      customerID
        user          userID
        password      secret
        language      [en | es | zh | de | fr | ro | pl | pt | nl]
        farm          farmID [A | A+B | A,B | A;B | _FG | _FG$ | _FG#]
        gline         [ALL | LANDRACE,DUROC]
        lastday       [2009-12-31]
        period        [7d | 2w | 1m | 1q | 1y]
        nperiod       [2]
        parity        [ALL | 0,1,2,3-5,6+ | 2,3,4]
        variable      [Total Services | Total Farrowing | Total Liveborn |
                       Total Stillborn | Total Mummies | Total Deathborn |
                       Total Pigs Weaned | Avg Liveborn/Litter |
                       Avg Deathborn/Litter | Gestation Length]
        reportformat  [Standard | DataOnly]
        dateformat    [default | %Y-%m-%d]
        webrootdir    [default | /pigknows]
        outputformat  [default | html | excel | pdf | txt | csv]
        graphfname    filename to hold graph
        scriptfname   filename to hold script
\endverbatim

\par Description
1. \a server specifies the database server name. The default is \c localhost.
2. \a customer specifies the customerID in uppercase.
3. \a user specifies the userID registered registered in \ref control_panel.
4. \a password specifies the secret password to access to the database.
5. \a language specified the language for displaying. The default is \c en.
6. \a farm specifies farmID in uppercase.
7. \a category specifies the category.
8. \a webrootdir specifies the web root directory. the default is \c /pigknows.
9. \a outputformat specifies the output format the default is \c html.
10. \a fontsize specifies the font size.




\sa \ref histogram, \ref control_chart, \ref box_plot.

\section scatter_chart scatter_chart
\addindex scatter_chart
The command \c admin_inventory generate the 'Performance Monitor' report,
one of the breeding herd reports.

\par Synopsis
\verbatim
 Usage: scatter_chart
        server        [localhost]
        customer      customerID
        user          userID
        password      secret
        language      [en | es | zh | de | fr | ro | pl | pt | nl]
        farm          farmID [A | A+B | A,B | A;B | _FG | _FG$ | _FG#]
        gline         [ALL | LANDRACE,DUROC]
        xaxis         [parity]
        yaxis         [liveborn | maleborn | femaleborn | mummies |
                       stillborn | totalborn]
        lastday       [2009-12-31]
        period        [7d | 2w | 1m | 1q | 1y]
        reportformat  [Standard | DataOnly]
        dateformat    [default | %Y-%m-%d]
        webrootdir    [default | /pigknows]
        graphfname    filename to graph
        scriptfname   filename to hold script
\endverbatim

\par Description
1. \a server specifies the database server name. The default is \c localhost.
2. \a customer specifies the customerID in uppercase.
3. \a user specifies the userID registered registered in \ref control_panel.
4. \a password specifies the secret password to access to the database.
5. \a language specified the language for displaying. The default is \c en.
6. \a farm specifies farmID in uppercase.
7. \a category specifies the category.
8. \a webrootdir specifies the web root directory. the default is \c /pigknows.
9. \a outputformat specifies the output format the default is \c html.
10. \a fontsize specifies the font size.




\sa \ref histogram, \ref control_chart.

\section servgroup_perform servgroup_perform
\addindex servgroup_perform
The command \c admin_inventory generate the 'Performance Monitor' report,
one of the breeding herd reports.

\par Synopsis
\verbatim
 Usage: servgroup_perform
        server        [localhost]
        customer      customerID
        user          userID
        password      secret
        language      [en | es | zh | de | fr | ro | pl | pt | nl]
        farm          farmID [A | A+B | A,B | A;B | _FG | _FG$ | _FG#]
        lastday       [2009-12-31]
        period        [7d | 2w | 1m | 1q | 1y]
        servgroup     servGroupID
        orderby       [servgroup | servdate | farrowed | returned |
                       liveborn | mortality | weaned]
        reportformat  [Standard]
        dateformat    [default | %Y-%m-%d]
        webrootdir    [default | /pigknows]
        outputformat  [default | html | excel | pdf | txt | csv]
        fontsize      [default]
\endverbatim

\par Description
1. \a server specifies the database server name. The default is \c localhost.
2. \a customer specifies the customerID in uppercase.
3. \a user specifies the userID registered registered in \ref control_panel.
4. \a password specifies the secret password to access to the database.
5. \a language specified the language for displaying. The default is \c en.
6. \a farm specifies farmID in uppercase.
7. \a category specifies the category.
8. \a webrootdir specifies the web root directory. the default is \c /pigknows.
9. \a outputformat specifies the output format the default is \c html.
10. \a fontsize specifies the font size.




\sa \ref servtech_perform, \ref sow_perform, \ref gline_perform, and \ref perform_monitor.

\section service_chart service_chart
\addindex service_chart
The command \c admin_inventory generate the 'Performance Monitor' report,
one of the breeding herd reports.

\par Synopsis
\verbatim
 Usage: service_chart
        server        [localhost]
        customer      customerID
        user          userID
        password      secret
        language      [en | es | zh | de | fr | ro | pl | pt | nl]
        farm          farmID [A | A+B | A,B | A;B | _FG | _FG$ | _FG#]
        gline         genetic lines [ALL | LANDRACE,DUROC]
        lastday       [2009-12-31]
        period        [7d | 2w | 1m | 1q | 1y]
        parity        [ALL | 0,1,2,3-5,6+ | 2,3,4]
        xaxis         [weanservint | wean1stservint |
                       weanestrusint | hnsservint | hns1stservint |
                       lactlength | servservint | entry1stservint | parity]
        yaxis         [liveborn | stillborn | mummies | totalborn | adjfarrowrate |
                       farrowrate | wean1stservint1 | wean1stservint2]
        mininobs      [10]
        reportformat  [Standard | DataOnly]
        dateformat    [default | %Y-%m-%d]
        webrootdir    [default | /pigknows]
        outputformat  [default | html | excel | pdf | txt | csv]
        graphfname     filename to hold graph
        scriptfname    filename to hold script
\endverbatim

\par Description
1. \a server specifies the database server name. The default is \c localhost.
2. \a customer specifies the customerID in uppercase.
3. \a user specifies the userID registered registered in \ref control_panel.
4. \a password specifies the secret password to access to the database.
5. \a language specified the language for displaying. The default is \c en.
6. \a farm specifies farmID in uppercase.
7. \a category specifies the category.
8. \a webrootdir specifies the web root directory. the default is \c /pigknows.
9. \a outputformat specifies the output format the default is \c html.
10. \a fontsize specifies the font size.




\sa \ref cusum_chart, \ref sowherd_chart.

\section service_gline service_gline
\addindex service_gline
The command \c admin_inventory generate the 'Performance Monitor' report,
one of the breeding herd reports.

\par Synopsis
\verbatim
 Usage: service_gline
        server        [localhost]
        customer      customerID
        user          userID
        password      secret
        language      [en | es | zh | de | fr | ro | pl | pt | nl]
        farm          farmID [A | A+B | A,B | A;B | _FG | _FG$ | _FG#]
        lastday       [2009-12-31]
        period        [7d | 2w | 1m | 1q | 1y]
        nperiod       [2]
        reportformat  [Count | Percent | Both]
        dateformat    [default | %Y-%m-%d]
        webrootdir    [default | /pigknows]
        outputformat  [default | html | excel | pdf | txt | csv]
        fontsize      [default]
\endverbatim

\par Description
1. \a server specifies the database server name. The default is \c localhost.
2. \a customer specifies the customerID in uppercase.
3. \a user specifies the userID registered registered in \ref control_panel.
4. \a password specifies the secret password to access to the database.
5. \a language specified the language for displaying. The default is \c en.
6. \a farm specifies farmID in uppercase.
7. \a category specifies the category.
8. \a webrootdir specifies the web root directory. the default is \c /pigknows.
9. \a outputformat specifies the output format the default is \c html.
10. \a fontsize specifies the font size.




\sa \ref matings_service, \ref gline_perform, \ref servtech_perform.


\section service_list  service_list
\addindex service_list
The command \c admin_inventory generate the 'Performance Monitor' report,
one of the breeding herd reports.

\par Synopsis
\verbatim
 Usage: service_list
        server        [localhost]
        customer      customerID
        user          userID
        password      secret
        language      [en | es | zh | de | fr | ro | pl | pt | nl]
        farm          farmID [A | A+B | A,B | A;B | _FG | _FG$ | _FG#]
        lastday       [2009-12-31]
        period        [7d | 2w | 1m | 1q | 1y]
        servgroup     servGroupID [09-35]
        servresult    [default | All | Presumed Pregnant | Farrowed |
                       Pregnant or Farrowed | Returned | Aborted |
                       Neg Preg Test | Culled or Destroyed | Death |
                       Transferred]
        parity        [ALL | 0,1,2,3-5,6+ | 2,3,4]
        cross         [ALL | 1 X 1 | 1 X 2, 2 X 1]
        orderby       [default | sowid | servdate | duedate |
                       servresult | opendate | parity | servgroup | sowgline]
        days115       [115]
        inctransserv  [Yes | No]
        reportformat  [Standard]
        dateformat    [default | %Y-%m-%d]
        webrootdir    [default | /pigknows]
        outputformat  [default | html | excel | pdf | txt | csv]
        fontsize      [default]
\endverbatim

\par Description
1. \a server specifies the database server name. The default is \c localhost.
2. \a customer specifies the customerID in uppercase.
3. \a user specifies the userID registered registered in \ref control_panel.
4. \a password specifies the secret password to access to the database.
5. \a language specified the language for displaying. The default is \c en.
6. \a farm specifies farmID in uppercase.
7. \a category specifies the category.
8. \a webrootdir specifies the web root directory. the default is \c /pigknows.
9. \a outputformat specifies the output format the default is \c html.
10. \a fontsize specifies the font size.




\sa \ref service_result, \ref matings_service.

\section service_perform service_perform
\addindex service_perform
The command \c admin_inventory generate the 'Performance Monitor' report,
one of the breeding herd reports.

\par Synopsis
\verbatim
 Usage: service_perform
        server        [localhost]
        customer      customerID
        user          userID
        password      secret
        language      [en | es | zh | de | fr | ro | pl | pt | nl]
        farm          farmID [A | A+B | A,B | A;B | _FG | _FG$ | _FG#]
        section       [single technician | 1st technician | technician]
        lastday       [2009-12-31]
        period        [7d | 2w | 1m | 1q | 1y]
        parity        [ALL | 0,1,2,3-5,6+ | 2,3,4]
        gline         [ALL | LANDRACE,DUROC]
        orderby       [gline | technician | servdate | farrowed |
                       returned | liveborn | parity | mortality | weaned]
        inctransserv  [Yes | No]
        reportformat  [Standard]
        dateformat    [default | %Y-%m-%d]
        webrootdir    [default | /pigknows]
        outputformat  [default | html | excel | pdf | txt | csv]
        fontsize      [default]
\endverbatim

\par Description
1. \a server specifies the database server name. The default is \c localhost.
2. \a customer specifies the customerID in uppercase.
3. \a user specifies the userID registered registered in \ref control_panel.
4. \a password specifies the secret password to access to the database.
5. \a language specified the language for displaying. The default is \c en.
6. \a farm specifies farmID in uppercase.
7. \a category specifies the category.
8. \a webrootdir specifies the web root directory. the default is \c /pigknows.
9. \a outputformat specifies the output format the default is \c html.
10. \a fontsize specifies the font size.




\sa \ref sow_perform, \ref gilts_perform.

\section service_result service_result
\addindex service_result
The command \c admin_inventory generate the 'Performance Monitor' report,
one of the breeding herd reports.

\par Synopsis
\verbatim
Usage: service_result positioned_arguments
   server        [localhost]
   customer      customerID
   user          userID
   password      secret
   language      [en | es | zh | de | fr | ro | pl | pt | nl]
   farm          farmID [A | A+B | A,B | A;B | _GF | _GF$ | GF#]
   servgroup     list of service groups [12-20,12-22]
   lastday       [2009-12-31]
   period        [7d | 2w | 1m | 1q | 1y]
   nperiod       [2]
   parity        [ALL | 0,1,2,3-5,6+ | 2,3,4]
   cross         [ALL | 1 X 1 | 1 X 2, 2 X 1]
   inctransserv  [Yes | No]
   reportformat  [Standard]
   dateformat    [default | %Y-%m-%d]
   webrootdir    [default | /pigknows]
   outputformat  [default | html | excel | pdf | txt | csv]
   fontsize      [default]
\endverbatim

\par Description
1. \a server specifies the database server name. The default is \c localhost.
2. \a customer specifies the customerID in uppercase.
3. \a user specifies the userID registered registered in \ref control_panel.
4. \a password specifies the secret password to access to the database.
5. \a language specified the language for displaying. The default is \c en.
6. \a farm specifies farmID in uppercase.
7. \a farm specifies service groups.
8. \a category specifies the category.
9. \a webrootdir specifies the web root directory. the default is \c /pigknows.
10. \a outputformat specifies the output format the default is \c html.
11. \a fontsize specifies the font size.




\sa \ref sow_perform, \ref gilts_retention_rate.

\section servtech_perform servtech_perform
\addindex servtech_perform
The command \c admin_inventory generate the 'Performance Monitor' report,
one of the breeding herd reports.

\par Synopsis
\verbatim
 Usage: servtech_perform
        server        [localhost]
        customer      customerID
        user          userID
        password      secret
        language      [en | es | zh | de | fr | ro | pl | pt | nl]
        farm          farmID [A | A+B | A,B | A;B | _FG | _FG$ | _FG#]
        lastday       [2009-12-31]
        period        [7d | 2w | 1m | 1q | 1y]
        parity        [ALL | 0,1,2,3-5,6+ | 2,3,4]
        gline         [ALL | LANDRACE,DUROC]
        orderby       [gline | technician | servdate | farrowed |
                       returned | liveborn | parity | mortality | weaned]
        servtech      service technician team <single | 1st | mixed]
        reportformat  [Standard]
        dateformat    [default | %Y-%m-%d]
        webrootdir    [default | /pigknows]
        outputformat  [default | html | excel | pdf | txt | csv]
        fontsize      [default]
\endverbatim

\par Description
1. \a server specifies the database server name. The default is \c localhost.
2. \a customer specifies the customerID in uppercase.
3. \a user specifies the userID registered registered in \ref control_panel.
4. \a password specifies the secret password to access to the database.
5. \a language specified the language for displaying. The default is \c en.
6. \a farm specifies farmID in uppercase.
7. \a category specifies the category.
8. \a webrootdir specifies the web root directory. the default is \c /pigknows.
9. \a outputformat specifies the output format the default is \c html.
10. \a fontsize specifies the font size.




\sa \ref service_perform, \ref service_list, \ref service_result.

\section simple_statistics simple_statistics
\addindex simple_statistics
The command \c admin_inventory generate the 'Performance Monitor' report,
one of the breeding herd reports.

\par Synopsis
\verbatim
 Usage: simple_statistics
        server        [localhost]
        customer      customerID
        user          userID
        password      secret
        language      [en | es | zh | de | fr | ro | pl | pt | nl]
        farm          farmID [A | A+B | A,B | A;B | _FG | _FG$ | _FG#]
        lastday       [2009-12-31]
        period        [7d | 2w | 1m | 1q | 1y]
        nperiod       [2]
        parity        [ALL | 0,1,2,3-5,6+ | 2,3,4]
        gline         [ALL | LANDRACE,DUROC]
        variable      [totalborn | viableborn | liveborn | stillborn |
                       mummies | deadborn | pigweaned]
        reportformat  [Standard]
        dateformat    [default | %Y-%m-%d]
        webrootdir    [default | /pigknows]
        outputformat  [default | html | excel | pdf | txt | csv]
        fontsize      [default]
\endverbatim

\par Description
1. \a server specifies the database server name. The default is \c localhost.
2. \a customer specifies the customerID in uppercase.
3. \a user specifies the userID registered registered in \ref control_panel.
4. \a password specifies the secret password to access to the database.
5. \a language specified the language for displaying. The default is \c en.
6. \a farm specifies farmID in uppercase.
7. \a category specifies the category.
8. \a webrootdir specifies the web root directory. the default is \c /pigknows.
9. \a outputformat specifies the output format the default is \c html.
10. \a fontsize specifies the font size.



\section sow_cards sow_cards 
\addindex sow_cards
The command \c admin_inventory generate the 'Performance Monitor' report,
one of the breeding herd reports.

\par Synopsis
\verbatim
 Usage: sow_cards
        server        [localhost]
        customer      customerID
        user          userID
        password      secret
        language      [en | es | zh | de | fr | ro | pl | pt | nl]
        farm          farmID [A | A+B | A,B | A;B | _FG | _FG$ | _FG#]
        gline         genetic_line_list <ALL | LANDRACE,DUROC]
        pstatus       production_status <ALproduction_status ddL | SERVED | ONFARM]
        reportformat  [LAST3 | LAST4 | LAST5 | MINI | LABEL10 | NEWSHAM |
                       200 | 300 | _my.userid]
        days21        [21]
        days35        [35]
        days121       [112]
        event         [Last]
        sortby        [sowid]
        firstday      [2009-12-31 | '']
        lastday       [2009-12-31 | '']
        groupby       [default | servdate | servgroup | pstatus]
        servgroup     ['' | 09-52]
        servresult    [Due | All | Farrow | Abortion | Return | Neg Preg Test |
                       Transfer | Heat NS | Not In Pig  | Removed]
        formula       [default | PEPE]
        dateformat    [default | %Y-%m-%d]
        voffset       [0 | 2]
        webrootdir    [default | /pigknows]
        outputformat  [default | pdf_letter | pdf_a4 | txt]
        fontsize      [default]

 Usage: sow_cards
        server        [localhost]
        customer      customerID
        user          userID
        password      secret
        language      [en | es | zh | de | fr | ro | pl | pt | nl]
        farm          farmID [A | A+B | A,B | A;B | _FG | _FG$ | _FG#]
        reportformat  [LAST3 | LAST4 | LAST5 | MINI | LABEL10 | NEWSHAM |
                       200 | 300 | _my.userid]
        days21        [21]
        days35        [35]
        days121       [112]
        ids           [id1,id2]
        formula       [default | PEPE]
        dateformat    [default | %Y-%m-%d]
        voffset       [0 | 2]
        webrootdir    [default | /pigknows]
        outputformat  [default | pdf_letter | pdf_a4 | txt]
        fontsize      [default]
\endverbatim

\par Description
1. \a server specifies the database server name. The default is \c localhost.
2. \a customer specifies the customerID in uppercase.
3. \a user specifies the userID registered registered in \ref control_panel.
4. \a password specifies the secret password to access to the database.
5. \a language specified the language for displaying. The default is \c en.
6. \a farm specifies farmID in uppercase.
7. \a category specifies the category.
8. \a webrootdir specifies the web root directory. the default is \c /pigknows.
9. \a outputformat specifies the output format the default is \c html.
10. \a fontsize specifies the font size.




\sa \ref sow_history

\section sow_duefor_heatcheck sow_duefor_heatcheck 
\addindex sow_duefor_heatcheck
The command \c admin_inventory generate the 'Performance Monitor' report,
one of the breeding herd reports.

\par Synopsis
\verbatim
 Usage: sow_duefor_heatcheck
        server        [localhost]
        customer      customerID
        user          userID
        password      secret
        language      [en | es | zh | de | fr | ro | pl | pt | nl]
        farm          farmID <A | A+B | A,B | A;B | _FG | _FG$ | _FG#]
        reportformat  [Standard | Detailed | Mini | MB]
        period        [7d | 2w | 1m | 1q | 1y]
        gline         [ALL | LANDRACE,DUROC]
        orderby       [servdate | sowid | altid | servgroup |
                       parity | location | gline]
        dateformat    [default | %Y-%m-%d]
        day1          [1]
        day21         [21]
        webrootdir    [default | /pigknows]
        outputformat  [default | html | excel | pdf | txt | csv]
        fontsize      [default]
\endverbatim

\par Description
1. \a server specifies the database server name. The default is \c localhost.
2. \a customer specifies the customerID in uppercase.
3. \a user specifies the userID registered registered in \ref control_panel.
4. \a password specifies the secret password to access to the database.
5. \a language specified the language for displaying. The default is \c en.
6. \a farm specifies farmID in uppercase.
7. \a category specifies the category.
8. \a webrootdir specifies the web root directory. the default is \c /pigknows.
9. \a outputformat specifies the output format the default is \c html.
10. \a fontsize specifies the font size.




\sa \ref sow_duefor_service, \ref sow_duefor_pregtest, \ref sow_dueto_farrow.

\section sow_duefor_pregtest sow_duefor_pregtest
\addindex sow_duefor_pregtest
The command \c admin_inventory generate the 'Performance Monitor' report,
one of the breeding herd reports.

\par Synopsis
\verbatim
 Usage: sow_duefor_pregtest
        server        [localhost]
        customer      customerID
        user          userID
        password      secret
        language      [en | es | zh | de | fr | ro | pl | pt | nl]
        farm          farmID [A | A+B | A,B | A;B | _FG | _FG$ | _FG#]
        reportformat  [Standard | Detailed | Mini | MB]
        period        [7d | 2w | 1m | 1q | 1y]
        gline         [ALL | LANDRACE,DUROC]
        orderby       [servdate | sowid | altid | servgroup | parity |
                       location | gline | servremark]
        dateformat    [default | %Y-%m-%d]
        day1          [1]
        day35         [35]
        webrootdir    [default | /pigknows]
        outputformat  [default | html | excel | pdf | txt | csv]
        fontsize      [default]
\endverbatim

\par Description
1. \a server specifies the database server name. The default is \c localhost.
2. \a customer specifies the customerID in uppercase.
3. \a user specifies the userID registered registered in \ref control_panel.
4. \a password specifies the secret password to access to the database.
5. \a language specified the language for displaying. The default is \c en.
6. \a farm specifies farmID in uppercase.
7. \a category specifies the category.
8. \a webrootdir specifies the web root directory. the default is \c /pigknows.
9. \a outputformat specifies the output format the default is \c html.
10. \a fontsize specifies the font size.




\sa \ref sow_duefor_heatcheck, \ref sow_duefor_service, \ref sow_dueto_farrow, \ref sow_dueto_wean.

\section sow_duefor_service sow_duefor_service
\addindex sow_duefor_service
The command \c admin_inventory generate the 'Performance Monitor' report,
one of the breeding herd reports.

\par Synopsis
\verbatim
 Usage: sow_duefor_service
        server        [localhost]
        customer      customerID
        user          userID
        password      secret
        language      [en | es | zh | de | fr | ro | pl | pt | nl]
        farm          farmID [A | A+B | A,B | A;B | _FG | _FG$ | _FG#]
        reportformat  [Standard | Detailed | Mini | MB]
        dummy         [dummy]
        gline         [ALL | LANDRACE,DUROC]
        orderby       [daysopen | sowid | altid | parity | pstatus |
                       location | gline]
        dateformat    [default | %Y-%m-%d]
        daysopen      [0]
        webrootdir    [default | /pigknows]
        outputformat  [default | html | excel | pdf | txt | csv]
        fontsize      [default]
\endverbatim

\par Description
1. \a server specifies the database server name. The default is \c localhost.
2. \a customer specifies the customerID in uppercase.
3. \a user specifies the userID registered registered in \ref control_panel.
4. \a password specifies the secret password to access to the database.
5. \a language specified the language for displaying. The default is \c en.
6. \a farm specifies farmID in uppercase.
7. \a category specifies the category.
8. \a webrootdir specifies the web root directory. the default is \c /pigknows.
9. \a outputformat specifies the output format the default is \c html.
10. \a fontsize specifies the font size.




\sa \ref sow_duefor_heatcheck, \redf sow_duefor_pregtest,
    \redf sow_dueto_farrow, \ref sow_duerto_wean.

\section sow_dueto_farrow sow_dueto_farrow
\addindex sow_dueto_farrow
The command \c admin_inventory generate the 'Performance Monitor' report,
one of the breeding herd reports.

\par Synopsis
\verbatim
 Usage: sow_dueto_farrow
        server        [localhost]
        customer      customerID
        user          userID
        password      secret
        language      [en | es | zh | de | fr | ro | pl | pt | nl]
        farm          farmID [A | A+B | A,B | A;B | _FG | _FG$ | _FG#]
        reportformat  [Standard | Detailed | Mini | MB]
        period        [7d | 2w | 1m | 1q | 1y]
        gline         [ALL | LANDRACE,DUROC]
        orderby       [duedate | servdate | sowid | altid | servgroup |
                       parity | location | servboar | gline | servremark]
        dateformat    [default | %Y-%m-%d]
        day1          [1]
        day115        [avg | 115]
        daysopen      [0]
        webrootdir    [default | /pigknows]
        outputformat  [default | html | excel | pdf | txt | csv]
        fontsize      [default]
\endverbatim

\par Description
1. \a server specifies the database server name. The default is \c localhost.
2. \a customer specifies the customerID in uppercase.
3. \a user specifies the userID registered registered in \ref control_panel.
4. \a password specifies the secret password to access to the database.
5. \a language specified the language for displaying. The default is \c en.
6. \a farm specifies farmID in uppercase.
7. \a category specifies the category.
8. \a webrootdir specifies the web root directory. the default is \c /pigknows.
9. \a outputformat specifies the output format the default is \c html.
10. \a fontsize specifies the font size.




\sa \ref gilts_pool, \ref sow_dueto_wean.

\section sow_dueto_wean sow_dueto_wean
\addindex sow_dueto_wean
The command \c admin_inventory generate the 'Performance Monitor' report,
one of the breeding herd reports.

\par Synopsis
\verbatim
 Usage: sow_dueto_wean
        server        [localhost]
        customer      customerID
        user          userID
        password      secret
        language      [en | es | zh | de | fr | ro | pl | pt | nl]
        farm          farmID [A | A+B | A,B | A;B | _FG | _FG$ | _FG#]
        reportformat  [Standard | Detailed | Mini | MB]
        dummy         [dummy]
        gline         [ALL | LANDRACE,DUROC]
        orderby       [farrowdate | sowid | altid | servgroup | parity |
                       location | gline | farrremark]
        dateformat    [default | %Y-%m-%d]
        daysopen      [0]
        webrootdir    [default | /pigknows]
        outputformat  [default | html | excel | pdf | txt | csv]
        fontsize      [default]
\endverbatim

\par Description
1. \a server specifies the database server name. The default is \c localhost.
2. \a customer specifies the customerID in uppercase.
3. \a user specifies the userID registered registered in \ref control_panel.
4. \a password specifies the secret password to access to the database.
5. \a language specified the language for displaying. The default is \c en.
6. \a farm specifies farmID in uppercase.
7. \a category specifies the category.
8. \a webrootdir specifies the web root directory. the default is \c /pigknows.
9. \a outputformat specifies the output format the default is \c html.
10. \a fontsize specifies the font size.


\sa \ref gilts_pool, \ref sow_dueto_farrow,
    \ref sow_prefarr_action, and \ref sow_duefor_service.

\section sowgline_perform sowgline_perform
\addindex sowgline_perform
The command \c admin_inventory generate the 'Performance Monitor' report,
one of the breeding herd reports.

\par Synopsis
\verbatim
 Usage: sowgline_perform
        server        [localhost]
        customer      customerID
        user          userID
        password      secret
        language      [en | es | zh | de | fr | ro | pl | pt | nl]
        farm          farmID [A | A+B | A,B | A;B | _FG | _FG$ | _FG#]
        variable      variable list [parity | liveborn | ... ]
        pstatus       production status [ALL | ONFARM | | LACTATING | WEANED | REMOVED]
        gline         genetic_line [ALL | LANDRACE,DUROC]
        parity        [ALL | 0,1,2,3-5,6+ | 2,3,4]
        reportformat  [Standard]
        dateformat    [default | %Y-%m-%d]]
        webrootdir    [default | /pigknows]
        outputformat  [default | html | excel | pdf | txt | csv]
        fontsize      [default]
\endverbatim

\par Description
1. \a server specifies the database server name. The default is \c localhost.
2. \a customer specifies the customerID in uppercase.
3. \a user specifies the userID registered registered in \ref control_panel.
4. \a password specifies the secret password to access to the database.
5. \a language specified the language for displaying. The default is \c en.
6. \a farm specifies farmID in uppercase.
7. \a category specifies the category.
8. \a webrootdir specifies the web root directory. the default is \c /pigknows.
9. \a outputformat specifies the output format the default is \c html.
10. \a fontsize specifies the font size.




\sa \ref sow_perform, \ref servtech_perform.

\section sowherd_chart  sowherd_chart
\addindex sowherd_chart
The command \c admin_inventory generate the 'Performance Monitor' report,
one of the breeding herd reports.

\par Synopsis
\verbatim
 Usage: sowherd_chart
        server        [localhost]
        customer      customerID
        user          userID
        password      secret
        language      [en | es | zh | de | fr | ro | pl | pt | nl]
        farm          farmID [A | A+B | A,B | A;B | _FG | _FG$ | _FG#]
        gline         [ALL | LANDRACE,DUROC]
        xaxis         [parity | age | gline | pstatus]
        pstatus       [ONFARM | All | Entered | Served | Lactating |
                       Not In Pig | Overdue | Served Before Weaned |
                       Weaned | Pregnancy Terminated | Skipheat |
                       Heat NS | Removed]
        reportformat  [Count | Percent | Both]
        dateformat    [default | %Y-%m-%d]
        webrootdir    [default | /pigknows]
        outputformat  [default | html | excel | pdf | txt]
        graphfname    filename to hold graph
        scriptfname   filename to hold script
\endverbatim

\par Description
1. \a server specifies the database server name. The default is \c localhost.
2. \a customer specifies the customerID in uppercase.
3. \a user specifies the userID registered registered in \ref control_panel.
4. \a password specifies the secret password to access to the database.
5. \a language specified the language for displaying. The default is \c en.
6. \a farm specifies farmID in uppercase.
7. \a category specifies the category.
8. \a webrootdir specifies the web root directory. the default is \c /pigknows.
9. \a outputformat specifies the output format the default is \c html.
10. \a fontsize specifies the font size.




\sa \ref farm_explorer, \ref trend_chart.

\section sow_history sow_history
\addindex sow_history
The command \c admin_inventory generate the 'Performance Monitor' report,
one of the breeding herd reports.

\par Synopsis
\verbatim
 Usage: sow_history
        server        [localhost]
        customer      customerID
        user          userID
        password      secret
        language      [en | es | zh | de | fr | ro | pl | pt | nl]
        farm          farmID [A | A+B | A,B | A;B | _FG | _FG$ | _FG#]
        begin_date    [BEGINNING | 2008-10-31]
        end_date      [END | 2008-12-31]
        id            id_list [sow123,sow456]
        orderby       order_orientation [Descending | Ascending]
        reportformat  [Standard | Batch]
        dateformat    [default | %Y-%m-%d]
        webrootdir    [default | /pigknows]
        outputformat  [default | html | excel | pdf | txt | csv | txt0]
        fontsize      [default]

 Usage: sow_history
        server        [localhost]
        customer      customerID
        user          userID
        password      secret
        language      [en | es | zh | de | fr | ro | pl | pt | nl]
        farm          farmID [A | A+B | A,B | A;B | _FG | _FG$ | _FG#]
        begin_date    [BEGINNING | 2008-10-31]
        end_date      [END | 2008-12-31]
        pstatus       production_status [ALL | ONFARM | ENTERED | SERVED
                                        | WEANED | LACTATING | HEAT NS
                                        | DIAGNOSED NOT PREGNANT |REMOVED]
        gline         genetic_line_list [ALL | DORIC,LANDRACE]
        parity        [ALL | 0,1,2,3-5,6+ | 2,3,4]
        orderby       order_orientation [default | Ascending | Descending]
        reportformat  [Standard | Batch | PigCHAMP]
        dateformat    [default | %Y-%m-%d]
        webrootdir    [default | /pigknows]
        outputformat  [default | html | excel | pdf | txt | csv | txt0]
        fontsize      [default]
\endverbatim

\par Description
1. \a server specifies the database server name. The default is \c localhost.
2. \a customer specifies the customerID in uppercase.
3. \a user specifies the userID registered registered in \ref control_panel.
4. \a password specifies the secret password to access to the database.
5. \a language specified the language for displaying. The default is \c en.
6. \a farm specifies farmID in uppercase.
7. \a category specifies the category.
8. \a webrootdir specifies the web root directory. the default is \c /pigknows.
9. \a outputformat specifies the output format the default is \c html.
10. \a fontsize specifies the font size.




\sa \ref boar_history, \ref sow_sales_history, \ref id_change_history.

\section sow_not_preg sow_not_preg
\addindex sow_not_preg
The command \c admin_inventory generate the 'Performance Monitor' report,
one of the breeding herd reports.

\par Synopsis
\verbatim
 Usage: sow_not_preg
        server        [localhost]
        customer      customerID
        user          userID
        password      secret
        language      [en | es | zh | de | fr | ro | pl | pt | nl]
        farm          farmID <A | A+B | A,B | A;B | _FG | _FG$ | _FG#]
        reportformat  [Standard | Detailed | Mini | MB]
        dummy         [dummy]
        gline         [ALL | LANDRACE,DUROC]
        orderby       [servdate | sowid | altid | servgroup |
                       opendate | parity | location | gline]
        dateformat    [default | %Y-%m-%d]
        daysopen      [0]
        webrootdir    [default | /pigknows]
        outputformat  [default | html | excel | pdf | txt | csv]
        fontsize      [default]
\endverbatim

\par Description
1. \a server specifies the database server name. The default is \c localhost.
2. \a customer specifies the customerID in uppercase.
3. \a user specifies the userID registered registered in \ref control_panel.
4. \a password specifies the secret password to access to the database.
5. \a language specified the language for displaying. The default is \c en.
6. \a farm specifies farmID in uppercase.
7. \a category specifies the category.
8. \a webrootdir specifies the web root directory. the default is \c /pigknows.
9. \a outputformat specifies the output format the default is \c html.
10. \a fontsize specifies the font size.




\sa \ref sow_duefor_service, \ref sow_dueto_wean. 

\section sow_perform sow_perform
\addindex sow_perform
The command \c admin_inventory generate the 'Performance Monitor' report,
one of the breeding herd reports.

\par Synopsis
\verbatim
 Usage: sow_perform
        server        [localhost]
        customer      customerID
        user          userID
        password      secret
        language      [en | es | zh | de | fr | ro | pl | pt | nl]
        farm          farmID [A | A+B | A,B | A;B | _FG | _FG$ | _FG#]
        groupby       [pstatus | servdate | farrowdate | sowid]
        pstatus       [LACTATING | DUE TO FARROW | WEANED | ONFARM]
        lastday       [2009-12-31]
        period        [7d | 2w | 1m | 1q | 1y]
        gline         [ALL | LANDRACE,DUROC]
        parity        [ALL | 0,1,2,3-5,6+ | 2,3,4]
        orderby       [sowid | liveborn | gline | weaned | bvsp |
                       duedate | farrowdate | average totalborn |
                       average liveborn | average weaned | parity | weight]
        formula       [Standard | PePe]
        reportformat  [Standard]
        dateformat    [default | %Y-%m-%d]
        webrootdir    [default | /pigknows]
        outputformat  [default | html | excel | pdf | txt | csv]
        fontsize      [default]
\endverbatim

\par Description
1. \a server specifies the database server name. The default is \c localhost.
2. \a customer specifies the customerID in uppercase.
3. \a user specifies the userID registered registered in \ref control_panel.
4. \a password specifies the secret password to access to the database.
5. \a language specified the language for displaying. The default is \c en.
6. \a farm specifies farmID in uppercase.
7. \a category specifies the category.
8. \a webrootdir specifies the web root directory. the default is \c /pigknows.
9. \a outputformat specifies the output format the default is \c html.
10. \a fontsize specifies the font size.




\sa \ref gilts_perform, \ref perform_monitor.

\section sow_prefarr_action sow_prefarr_action
\addindex sow_prefarr_action
The command \c admin_inventory generate the 'Performance Monitor' report,
one of the breeding herd reports.

\par Synopsis
\verbatim
 Usage: sow_prefarr_action
        server        [localhost]
        customer      customerID
        user          userID
        password      secret
        language      [en | es | zh | de | fr | ro | pl | pt | nl]
        farm          farmID <A | A+B | A,B | A;B | _FG | _FG$ | _FG#]
        reportformat  [Standard | Detailed | Mini | MB]
        period        [7d | 2w | 1m | 1q | 1y]
        gline         [ALL | LANDRACE,DUROC]
        orderby       [duedate | servdate | sowid | altid | servgroup |
                       parity | location | gline | servremark]
        dateformat    [default | %Y-%m-%d]
        day1          [1]
        day115        [avg | 115]
        webrootdir    [default | /pigknows]
        outputformat  [default | html | excel | pdf | txt]
        fontsize      [default]
\endverbatim

\par Description
1. \a server specifies the database server name. The default is \c localhost.
2. \a customer specifies the customerID in uppercase.
3. \a user specifies the userID registered registered in \ref control_panel.
4. \a password specifies the secret password to access to the database.
5. \a language specified the language for displaying. The default is \c en.
6. \a farm specifies farmID in uppercase.
7. \a category specifies the category.
8. \a webrootdir specifies the web root directory. the default is \c /pigknows.
9. \a outputformat specifies the output format the default is \c html.
10. \a fontsize specifies the font size.




\sa \ref sow_duefor_heatcheck, \ref sow_duefor_pregtest, \ref sow_dueto_farrow.

\section sow_pstatus sow_pstatus
\addindex sow_pstatus
The command \c admin_inventory generate the 'Performance Monitor' report,
one of the breeding herd reports.

\par Synopsis
\verbatim
 Usage: sow_pstatus
        server        [localhost]
        customer      customerID
        user          userID
        password      secret
        language      [en | es | zh | de | fr | ro | pl | pt | nl]
        farm          farmID [A | A+B | A,B | A;B | _FG | _FG$ | _FG#]
        pstatus       [ONFARM | Diagnosed Not Pregnant | Diagnosed Pregnant |
                       Entered | Heat NS | Lactating | Not In Pig | Overdue |
                       Removed | Pregnancy Terminated  | To Cull | Served |
                       Served Before Weaned | Weaned]
        gline         [ALL | LANDRACE,DUROC]
        orderby       [sowid | gline | parity | pstatus | servgroup]
        servgroup     [ALL]
        parity        [ALL | 0,1,2,3-5,6+ | 2,3,4]
        reportformat  [STANDARD | DEATILED]
        dateformat    [default | %Y-%m-%d]
        webrootdir    [default | /pigknows]
        outputformat  [default | html | excel | pdf | txt | csv]
        fontsize      [default]
\endverbatim

\par Description
1. \a server specifies the database server name. The default is \c localhost.
2. \a customer specifies the customerID in uppercase.
3. \a user specifies the userID registered registered in \ref control_panel.
4. \a password specifies the secret password to access to the database.
5. \a language specified the language for displaying. The default is \c en.
6. \a farm specifies farmID in uppercase.
7. \a category specifies the category.
8. \a webrootdir specifies the web root directory. the default is \c /pigknows.
9. \a outputformat specifies the output format the default is \c html.
10. \a fontsize specifies the font size.




\sa \ref id_list , \ref sow_history, \ref sow_perform.

\section sow_removal_analysis sow_removal_analysis
\addindex sow_removal_analysis
The command \c admin_inventory generate the 'Performance Monitor' report,
one of the breeding herd reports.

\par Synopsis
\verbatim
 Usage: sow_removal_analysis
        server        [localhost]
        customer      customerID
        user          userID
        password      secret
        language      [en | es | zh | de | fr | ro | pl | pt | nl]
        farm          farmID [A | A+B | A,B | A;B | _FG | _FG$ | _FG#]
        gline         [ALL | LANDRACE,DUROC]
        lastday       [2009-12-31]
        period        [7d | 2w | 1m | 1q | 1y]
        nperiod       [2]
        parity        [ALL | 0,1,2,3-5,6+ | 2,3,4]
        reporttype    [Reasons and Result | Reasons and Categories |
                       Categories and Result | Categories and Categories]
        dateformat    [default | %Y-%m-%d]
        webrootdir    [default | /pigknows]
        outputformat  [default | html | excel | pdf | txt | csv]
        fontsize      [default]
\endverbatim

\par Description
1. \a server specifies the database server name. The default is \c localhost.
2. \a customer specifies the customerID in uppercase.
3. \a user specifies the userID registered registered in \ref control_panel.
4. \a password specifies the secret password to access to the database.
5. \a language specified the language for displaying. The default is \c en.
6. \a farm specifies farmID in uppercase.
7. \a category specifies the category.
8. \a webrootdir specifies the web root directory. the default is \c /pigknows.
9. \a outputformat specifies the output format the default is \c html.
10. \a fontsize specifies the font size.




\sa \ref gilts_retension_rate, \ref sow_history.


\section sow_sales_history sow_sales_history
\addindex sow_sales_history
The command \c admin_inventory generate the 'Performance Monitor' report,
one of the breeding herd reports.

\par Synopsis
\verbatim
 Usage: sow_sales_history
        server        [localhost]
        customer      customerID
        user          userID
        password      secret
        language      [en | es | zh | de | fr | ro | pl | pt | nl]
        farm          farmID [A | A+B | A,B | A;B | _FG | _Fg$ | _FG#]
        sowid         sowID [ALL | s123 | s123,s456]
        lastday       [2009-12-31]
        period        [7d | 2w | 1m | 1q | 1y]
        ticket        ticketID
        client        clientID
        driver        driverID
        truck         truchID
        destination   destination
        invoice       invoiceID
        exit_order    exit_order
        salestype     [SALES | REMOVAL]
        variables     [All | your_choice]
        orderby       [default | salesdate | salesdate,salestime |
                       salesdate | sowid]
        reportformat  [Standard | Standard]
        dateformat    [default | %Y-%m-%d]
        webrootdir    [default | /pigknows]
        outputformat  [default | html | excel | pdf | txt | csv]
        fontsize      [default]
\endverbatim

\par Description
1. \a server specifies the database server name. The default is \c localhost.
2. \a customer specifies the customerID in uppercase.
3. \a user specifies the userID registered registered in \ref control_panel.
4. \a password specifies the secret password to access to the database.
5. \a language specified the language for displaying. The default is \c en.
6. \a farm specifies farmID in uppercase.
7. \a category specifies the category.
8. \a webrootdir specifies the web root directory. the default is \c /pigknows.
9. \a outputformat specifies the output format the default is \c html.
10. \a fontsize specifies the font size.




\sa \ref sow_history.

\section sow_weaned_not_served sow_weaned_not_served
\addindex sow_weaned_not_served
The command \c admin_inventory generate the 'Performance Monitor' report,
one of the breeding herd reports.

\par Synopsis
\verbatim
 Usage: sow_weaned_not_served
        server        [localhost]
        customer      customerID
        user          userID
        password      secret
        language      [en | es | zh | de | fr | ro | pl | pt | nl]
        farm          farmID [A | A+B | A,B | A;B | _FG | _FG$ | _FG#]
        reportformat  [Standard | Detailed | Mini | MB]
        dummy         [7d | 2w | 1m | 1q | 1y]
        gline         [ALL | LANDRACE,DUROC]
        orderby       [weandate | sowid | altid | servgroup | parity |
                       location | gline]        dateformat    [default | %Y-%m-%d]
        daysopen      [0]
        webrootdir    [default | /pigknows]
        outputformat  [default | html | excel | pdf | txt]
        fontsize      [default]
\endverbatim

\par Description
1. \a server specifies the database server name. The default is \c localhost.
2. \a customer specifies the customerID in uppercase.
3. \a user specifies the userID registered registered in \ref control_panel.
4. \a password specifies the secret password to access to the database.
5. \a language specified the language for displaying. The default is \c en.
6. \a farm specifies farmID in uppercase.
7. \a category specifies the category.
8. \a webrootdir specifies the web root directory. the default is \c /pigknows.
9. \a outputformat specifies the output format the default is \c html.
10. \a fontsize specifies the font size.




\sa \ref sow_duefor_service.


\section tally_sheet tally_sheet
\addindex tally_sheet
The command \c admin_inventory generate the 'Performance Monitor' report,
one of the breeding herd reports.

\par Synopsis
\verbatim
 Usage: tally_sheet
        server        [localhost]
        customer      customerID
        user          userID
        password      secret
        language      [en | es | zh | de | fr | ro | pl | pt | nl]
        farm          farmID [A | A+B | A,B | A;B | _FG | _FG$ | _FG#]
        lastday       [2009-12-31]
        period        [7d | 2w | 1m | 1q | 1y]
        nperiod       [2]
        parity        [ALL | 0,1,2,3-5,6+ | 2,3,4]
        gline         [ALL | LANDRACE,DUROC]
        variable      [#service | #abortion | #abortion_natural | #abortion_induced
                       #farrow | #liveborn | #pigweaned | #sow_entered
        reportformat  [Standard]
        dateformat    [default | %Y-%m-%d]
        webrootdir    [default | /pigknows]
        outputformat  [default | html | excel | pdf | txt | csv]
        fontsize      [default]
\endverbatim

\par Description
1. \a server specifies the database server name. The default is \c localhost.
2. \a customer specifies the customerID in uppercase.
3. \a user specifies the userID registered registered in \ref control_panel.
4. \a password specifies the secret password to access to the database.
5. \a language specified the language for displaying. The default is \c en.
6. \a farm specifies farmID in uppercase.
7. \a category specifies the category.
8. \a webrootdir specifies the web root directory. the default is \c /pigknows.
9. \a outputformat specifies the output format the default is \c html.
10. \a fontsize specifies the font size.




\sa \ref weekly_tally_chart.

\section tally_sheet_detail tally_sheet_detail
\addindex tally_sheet_detail
The command \c admin_inventory generate the 'Performance Monitor' report,
one of the breeding herd reports.

\par Synopsis
\verbatim
 Usage: tally_sheet_detail
        server        [localhost]
        customer      customerID
        user          userID
        password      secret
        language      [en | es | zh | de | fr | ro | pl | pt | nl]
        farm          farmID [A | A+B | A,B | A;B | _FG | _FG$ | _FG#]
        begindate     [2009-12-20]
        enddate       [2009-12-31]
        parity        [ALL | 0,1,2,3-5,6+ | 2,3,4]
        gline         [ALL | LANDRACE,DUROC]
        variable      [#service | #farrow | #abortion | #liveborn |
                       #pigweaned | #sow_entered | ... ]
        dateformat    [default | %Y-%m-%d]
        webrootdir    [default | /pigknows]
        outputformat  [default | html | excel | pdf | txt | csv]
        fontsize      [default]
\endverbatim

\par Description
1. \a server specifies the database server name. The default is \c localhost.
2. \a customer specifies the customerID in uppercase.
3. \a user specifies the userID registered registered in \ref control_panel.
4. \a password specifies the secret password to access to the database.
5. \a language specified the language for displaying. The default is \c en.
6. \a farm specifies farmID in uppercase.
7. \a category specifies the category.
8. \a webrootdir specifies the web root directory. the default is \c /pigknows.
9. \a outputformat specifies the output format the default is \c html.
10. \a fontsize specifies the font size.




\sa \ref tally_sheet_analysis.

\section target_list target_list
\addindex target_list
The command \c admin_inventory generate the 'Performance Monitor' report,
one of the breeding herd reports.

\par Synopsis
\verbatim
 Usage: target_list
        server        [localhost]
        customer      customerID
        user          userID
        password      secret
        language      [en | es | zh | de | fr | ro | pl | pt | nl]
        farm          farmID [A | A+B | A,B | A;B | _FG | _FG$ | _FG#]
        reportformat  [Standard]
        webrootdir    [default | /pigknows]
        outputformat  [default | html | excel | pdf | txt | csv]
        fontsize      [default]
\endverbatim

\par Description
1. \a server specifies the database server name. The default is \c localhost.
2. \a customer specifies the customerID in uppercase.
3. \a user specifies the userID registered registered in \ref control_panel.
4. \a password specifies the secret password to access to the database.
5. \a language specified the language for displaying. The default is \c en.
6. \a farm specifies farmID in uppercase.
7. \a category specifies the category.
8. \a webrootdir specifies the web root directory. the default is \c /pigknows.
9. \a outputformat specifies the output format the default is \c html.
10. \a fontsize specifies the font size.




\sa \ref dictionary_view.

\section trend_chart trend_chart
\addindex trend_chart
The command \c admin_inventory generate the 'Performance Monitor' report,
one of the breeding herd reports.

\par Synopsis
\verbatim
 Usage: trend_chart
        server        [localhost]
        customer      customerID
        user          userID
        password      secret
        language      [en | es | zh | de | fr | ro | pl | pt | nl]
        farm          farmID [A | A+B | A,B | A;B | _FG | _FG$ | _FG#]
        gline         [ALL | LANDRACE,DUROC]
        xaxis         [servdate | farrowdate | weandate | deathdate |
                       heatnoservice]
        lastday       [2009-12-31]
        period        [7d | 2w | 1m | 1q | 1y]
        nperiod       [2]
        parity        [ALL | 0,1,2,3-5,6+ | 2,3,4]
        yaxis         [nservice | parity | servnmates | wean1stservint]
        reportformat  [Standard | DataOnly]
        dateformat    [default | %Y-%m-%d]
        webrootdir    [default | /pigknows]
        outputformat  [default | html | excel | pdf | txt | csv]
        graphfname    filename to hold graph
        scriptfname   filename to hold script
\endverbatim

\par Description
1. \a server specifies the database server name. The default is \c localhost.
2. \a customer specifies the customerID in uppercase.
3. \a user specifies the userID registered registered in \ref control_panel.
4. \a password specifies the secret password to access to the database.
5. \a language specified the language for displaying. The default is \c en.
6. \a farm specifies farmID in uppercase.
7. \a category specifies the category.
8. \a webrootdir specifies the web root directory. the default is \c /pigknows.
9. \a outputformat specifies the output format the default is \c html.
10. \a fontsize specifies the font size.




\sa \ref histogram, \ref weekday_tally_chart.

\section verify_license verify_license
\addindex verify_license
The command \c admin_inventory generate the 'Performance Monitor' report,
one of the breeding herd reports.

\par Synopsis
\verbatim
 Usage: verify_license
        server        [localhost]
        customer      customerID
        user          userID
        password      secret
        language      [en | es | zh | de | fr | ro | pl | pt | nl]
        warning       [1 | 0]
\endverbatim

\par Description
1. \a server specifies the database server name. The default is \c localhost.
2. \a customer specifies the customerID in uppercase.
3. \a user specifies the userID registered registered in \ref control_panel.
4. \a password specifies the secret password to access to the database.
5. \a language specified the language for displaying. The default is \c en.
6. \a farm specifies farmID in uppercase.
7. \a category specifies the category.
8. \a webrootdir specifies the web root directory. the default is \c /pigknows.
9. \a outputformat specifies the output format the default is \c html.
10. \a fontsize specifies the font size.



\section weekday_tally_chart weekday_tally_chart
\addindex weekday_tally_chart
The command \c admin_inventory generate the 'Performance Monitor' report,
one of the breeding herd reports.

\par Synopsis
\verbatim
 Usage: weekday_tally_chart
        server        [localhost]
        customer      customerID
        user          userID
        password      secret
        language      [en | es | zh | de | fr | ro | pl | pt | nl]
        farm          farmID [A | A+B | A,B | A;B | _FG | _FG$ | _FG#]
        variable      [service | farrow | wean | liveborn | stillborn
                       | mummies | piglet_deaths | sow_deaths | abortion
                       | served_liveborn | served_farrowrate | sow_enter
                       | sow_remove]
        gline         genetic lines [ALL | LANDRACE,DUROC]
        lastday       [2009-12-31]
        nweek         #weeks [2]
        parity        [ALL | 0,1,2,3-5,6+ | 2,3,4]
        reportformat  [Count | Frequency | Mean]
        dateformat    [default | %Y-%m-%d]
        webrootdir    [default | /pigknows]
        outputformat  [default | html | excel | pdf | txt]
        graphfname    filename to hold graph
        scriptfname   filename to hold script
\endverbatim

\par Description
1. \a server specifies the database server name. The default is \c localhost.
2. \a customer specifies the customerID in uppercase.
3. \a user specifies the userID registered registered in \ref control_panel.
4. \a password specifies the secret password to access to the database.
5. \a language specified the language for displaying. The default is \c en.
6. \a farm specifies farmID in uppercase.
7. \a category specifies the category.
8. \a webrootdir specifies the web root directory. the default is \c /pigknows.
9. \a outputformat specifies the output format the default is \c html.
10. \a fontsize specifies the font size.


*/
