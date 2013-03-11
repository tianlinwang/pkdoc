/** \page appendix Appendix
 
\section database_schema Database Schema
PigKnows has three database in its hirachy. The top level database is \c pigknows.
The second level database is named after customer name such as \c DUTCHELM.
The third level database is named after customer and farm names such as \c DUTCHELM_FARM1

\subsection sql_tables_pigknows SQL tables in pigknows database
\subsubsection sql_table_glossary Table glossary
\verbatim
CREATE TABLE `glossary` (
  `recno` int(10) unsigned NOT NULL auto_increment,
  `phrase` varchar(160) NOT NULL default '',
  `en` varchar(160) NOT NULL default '',
  `es` varchar(160) default NULL,
  `zh` varchar(160) default NULL,
  `de` varchar(160) default NULL,
  `fr` varchar(160) default NULL,
  `ro` varchar(160) default NULL,
  `nl` varchar(160) default NULL,
  `pl` varchar(160) default NULL,
  `pt` varchar(160) default NULL,
  `ru` varchar(160) default NULL,
  `th` varchar(160) default NULL,
  `sk` varchar(160) default NULL,
  `sl` varchar(160) default NULL,
  `sr` varchar(160) default NULL,
  `ko` varchar(160) default NULL,
  `jp` varchar(160) default NULL,
  PRIMARY KEY  (`recno`),
  UNIQUE KEY `phrase` (`phrase`)
) ENGINE=MEMORY AUTO_INCREMENT=68721 DEFAULT CHARSET=latin1;
\endverbatim

\subsubsection sql_table_customer Table customer
\verbatim
CREATE TABLE `customer` (
  `customerid` varchar(16) NOT NULL default '',
  `customername` varchar(50) default NULL,
  `contact` varchar(50) NOT NULL default '',
  `address1` varchar(50) default NULL,
  `address2` varchar(50) default NULL,
  `state` varchar(20) default NULL,
  `zipcode` varchar(10) default NULL,
  `country` varchar(20) default NULL,
  `workphone` varchar(20) default NULL,
  `homephone` varchar(20) default NULL,
  `cellphone` varchar(20) default NULL,
  `remark` varchar(80) default NULL,
  PRIMARY KEY  (`customerid`),
  KEY `contact` (`contact`)
) ENGINE=InnoDB DEFAULT CHARSET=latin1;
\endverbatim

\subsubsection sql_table_user Table user
\verbatim
CREATE TABLE `user` (
  `userid` char(20) NOT NULL default '',
  `username` char(30) default '',
  PRIMARY KEY  (`userid`),
  KEY `username` (`username`)
) ENGINE=InnoDB DEFAULT CHARSET=latin1;
\endverbatim

\subsubsection sql_table_userquery Table userquery
\verbatim
CREATE TABLE `userquery` (
  `recno` mediumint(8) unsigned NOT NULL auto_increment,
  `userid` char(16) NOT NULL default '',
  `querytype` varchar(64) NOT NULL,
  `queryid` varchar(64) NOT NULL default '',
  `query` text NOT NULL,
  PRIMARY KEY  (`recno`),
  UNIQUE KEY `userid_querytype_queryid` (`userid`,`querytype`,`queryid`)
) ENGINE=InnoDB AUTO_INCREMENT=37745 DEFAULT CHARSET=latin1;
\endverbatim

\subsubsection sql_table_licensekey Table licensekey
\verbatim
CREATE TABLE `licensekey` (
  `licensekey` char(42) NOT NULL default '',
  PRIMARY KEY  (`licensekey`)
) ENGINE=MyISAM DEFAULT CHARSET=latin1;
\endverbatim

\subsubsection sql_table_data_extract Table data_extract
\verbatim
CREATE TABLE `data_extract` (
  `recno` int(10) unsigned NOT NULL auto_increment,
  `userid` varchar(20) NOT NULL,
  `inserttime` varchar(17) NOT NULL,
  `farm` varchar(64) default NULL,
  `sowgline` varchar(20) default NULL,
  `sowid` varchar(16) default NULL,
  `servdate` date default NULL,
  `servresult` varchar(13) default NULL,
  `servboar` varchar(16) default NULL,
  `servboar1` varchar(16) default NULL,
  `servboar2` varchar(16) default NULL,
  `servboar3` varchar(16) default NULL,
  `technician1` varchar(11) default NULL,
  `technician2` varchar(11) default NULL,
  `technician3` varchar(11) default NULL,
  `servgroup` varchar(9) default NULL,
  `parity` tinyint(4) default NULL,
  `servnmates` tinyint(4) default NULL,
  `servno` tinyint(4) default NULL,
  `farrow1stservint` smallint(6) default NULL,
  `wean1stservint` smallint(6) default NULL,
  `hns1stservint` smallint(6) default NULL,
  `pstatus` varchar(23) default NULL,
  `farrowdate` date default NULL,
  `totalborn` smallint(6) default NULL,
  `liveborn` smallint(6) default NULL,
  `femaleborn` smallint(6) default NULL,
  `maleborn` smallint(6) default NULL,
  `stillborn` smallint(6) default NULL,
  `mummies` smallint(6) default NULL,
  `gestlen` smallint(6) default NULL,
  `farrowbarn` varchar(10) default NULL,
  `farrowroom` varchar(10) default NULL,
  `farrowpen` varchar(9) default NULL,
  `weandate` date default NULL,
  `weanpigs` smallint(6) default NULL,
  `weanlitterwt` decimal(6,2) default NULL,
  `eventdate` date default NULL,
  `pregexamdate` date default NULL,
  `pregexamresult` varchar(14) default NULL,
  `abortdate` date default NULL,
  `abortdays` smallint(6) default NULL,
  `eventtype` varchar(12) default NULL,
  `servboar4` varchar(16) default NULL,
  `servnboars` tinyint(4) default NULL,
  `npigs` smallint(6) default NULL,
  `entryparity` tinyint(4) default NULL,
  `boargline` varchar(9) default NULL,
  `entrydate` date default NULL,
  `removedate` date default NULL,
  `removeparity` tinyint(4) default NULL,
  `removetype` varchar(10) default NULL,
  `removereason1` varchar(20) default NULL,
  `removereason2` varchar(20) default NULL,
  `removeweight` decimal(6,1) default NULL,
  `currentparity` tinyint(4) default NULL,
  `sowaltid` varchar(21) default NULL,
  `boarid` varchar(16) default NULL,
  `boaraltid` varchar(21) default NULL,
  `nurseoffpigs` smallint(6) default NULL,
  `nurseonpigs` smallint(6) default NULL,
  `birthdate` date default NULL,
  `servtype` varchar(8) default NULL,
  `entryage` smallint(6) default NULL,
  `removeage` smallint(6) default NULL,
  `flaguser1` int(11) default NULL,
  `flaguser2` decimal(9,2) default NULL,
  `servboar5` varchar(16) default NULL,
  `technician4` varchar(11) default NULL,
  `technician5` varchar(11) default NULL,
  `gstatus` varchar(12) default NULL,
  `weanservint` smallint(6) default NULL,
  `prevlactlen` smallint(6) default NULL,
  `farrcond` tinyint(4) default NULL,
  `entrysex` varchar(8) default NULL,
  `litterid` varchar(12) default NULL,
  `servloc` varchar(9) default NULL,
  `entrygroup` varchar(9) default NULL,
  `sowsire` varchar(21) default NULL,
  `sowdam` varchar(21) default NULL,
  `boarsire` varchar(21) default NULL,
  `boardam` varchar(21) default NULL,
  `servdodate` date default NULL,
  `own` varchar(3) default NULL,
  `pstatusdate` date default NULL,
  `weanage` smallint(6) default NULL,
  `deathreason` varchar(20) default NULL,
  `duedate` date default NULL,
  `hnsnextservint` smallint(6) default NULL,
  `weanestrusint` smallint(6) default NULL,
  `servservint` smallint(6) default NULL,
  `littercolor` varchar(12) default NULL,
  `semenage1` smallint(6) default NULL,
  `semenage2` smallint(6) default NULL,
  `semenage3` smallint(6) default NULL,
  `induced` tinyint(4) default NULL,
  `assisted` tinyint(4) default NULL,
  `life_weanpigs` smallint(6) default NULL,
  `life_totalborn` smallint(6) default NULL,
  `avg_totalborn` decimal(6,2) default NULL,
  `life_liveborn` smallint(6) default NULL,
  `avg_liveborn` decimal(6,2) default NULL,
  `avg_stillborn` decimal(6,2) default NULL,
  `avg_mummies` decimal(6,2) default NULL,
  `currentloc` varchar(10) default NULL,
  `entry1stservint` smallint(6) default NULL,
  `birth1stservint` smallint(6) default NULL,
  `deathdays` smallint(6) default NULL,
  `soworigin` varchar(12) default NULL,
  `boarorigin` varchar(12) default NULL,
  `servscore` tinyint(4) default NULL,
  `prevtotalborn` smallint(6) default NULL,
  `prevliveborn` smallint(6) default NULL,
  `prevstillborn` smallint(6) default NULL,
  `prevmummies` smallint(6) default NULL,
  `prevweanpigs` smallint(6) default NULL,
  `viableborn` smallint(6) default NULL,
  `deadborn` smallint(6) default NULL,
  `prevpstatus` varchar(13) default NULL,
  `prevpstatusdate` date default NULL,
  `user1` varchar(40) default NULL,
  `user2` varchar(40) default NULL,
  `prevgestlen` smallint(6) default NULL,
  `technician123` varchar(13) default NULL,
  `birthwt` decimal(6,2) default NULL,
  `treatment` varchar(10) default NULL,
  `avg_weanpigs` decimal(6,2) default NULL,
  `flagdate` date default NULL,
  `flagtype` varchar(12) default NULL,
  `flagremark` varchar(20) default NULL,
  `farrowint` smallint(6) default NULL,
  `reason` varchar(20) default NULL,
  `avg_gestlen` decimal(6,2) default NULL,
  `avg_lactlen` decimal(6,2) default NULL,
  `pigdeaths` smallint(6) default NULL,
  `pigdefect` smallint(6) default NULL,
  `weanremovalint` int(11) default NULL,
  `lactlen` smallint(6) default NULL,
  `lweandate` date default NULL,
  `abortreason` varchar(11) default NULL,
  `aborttype` varchar(9) default NULL,
  `aborttime` varchar(9) default NULL,
  `treatdate` date default NULL,
  `fweandate` date default NULL,
  `fweanpigs` smallint(6) default NULL,
  `servboargline` varchar(20) default NULL,
  `servboar1gline` varchar(20) default NULL,
  `servboar2gline` varchar(20) default NULL,
  `servboar3gline` varchar(20) default NULL,
  `servnglines` tinyint(4) default NULL,
  `eventname` varchar(20) default NULL,
  `eventdata` varchar(80) default NULL,
  `gline` varchar(20) default NULL,
  `pigid` varchar(16) default NULL,
  `sex` varchar(6) default NULL,
  `servtime1` time default NULL,
  `servtime2` time default NULL,
  `servtime3` time default NULL,
  `servtime4` time default NULL,
  `servtime5` time default NULL,
  `pigaltid` varchar(21) default NULL,
  `tattoo` varchar(12) default NULL,
  `origin` varchar(16) default NULL,
  `sire` varchar(36) default NULL,
  `dam` varchar(36) default NULL,
  `firstservdate` date default NULL,
  `entryskipheatint` smallint(6) default NULL,
  `skipheat1stservint` smallint(6) default NULL,
  `net_foster` smallint(6) default NULL,
  `remark` varchar(80) default NULL,
  UNIQUE KEY `recno` (`recno`),
  KEY `userid_inserttime` (`userid`,`inserttime`)
) ENGINE=InnoDB AUTO_INCREMENT=22417 DEFAULT CHARSET=latin1;
\endverbatim

\subsection sql_tables_customer SQL tables for a customer database
\subsubsection sql_table_user Table user
\verbatim
CREATE TABLE `user` (
  `recno` mediumint(8) unsigned NOT NULL auto_increment,
  `userid` varchar(16) default NULL,
  `privilege` varchar(10) NOT NULL default 'readonly',
  `farm` varchar(64) default NULL,
  PRIMARY KEY  (`recno`),
  UNIQUE KEY `userid_farm` (`userid`,`farm`),
  KEY `farm` (`farm`)
) ENGINE=InnoDB AUTO_INCREMENT=2218 DEFAULT CHARSET=latin1;
\endverbatim

\subsubsection sql_table_farm Table farm
\verbatim
CREATE TABLE `farm` (
  `farm` varchar(64) NOT NULL default '',
  `contact` varchar(50) NOT NULL default '',
  `farm_name` varchar(64) default NULL,
  `address1` varchar(80) default NULL,
  `address2` varchar(80) default NULL,
  `state` varchar(20) default NULL,
  `zipcode` varchar(10) default NULL,
  `country` varchar(16) NOT NULL default 'US',
  `premiseid` varchar(12) default NULL,
  `workphone` varchar(20) default NULL,
  `cellphone` varchar(20) default NULL,
  `fax` varchar(20) default NULL,
  `backup` enum('Y','N') NOT NULL default 'Y',
  `benchmark` enum('Y','N') NOT NULL default 'Y',
  `ocr` varchar(8) default NULL,
  `license` varchar(20) default NULL,
  `opendate` date NOT NULL default '0000-00-00',
  `payment` decimal(8,2) default NULL,
  `closedate` date default NULL,
  `removedate` date default NULL,
  `flowid` varchar(16) default NULL,
  `remark` varchar(80) default NULL,
  PRIMARY KEY  (`farm`),
  UNIQUE KEY `premiseid` (`premiseid`),
  KEY `country` (`country`),
  KEY `flowid` (`flowid`)
) ENGINE=InnoDB DEFAULT CHARSET=latin1;
\endverbatim

\subsubsection sql_table_farmgroup Table farmgroup
\verbatim
CREATE TABLE `farmgroup` (
  `recno` mediumint(8) unsigned NOT NULL auto_increment,
  `groupid` varchar(40) NOT NULL default '',
  `farm` varchar(64) NOT NULL default '',
  `remark` varchar(80) default NULL,
  PRIMARY KEY  (`recno`),
  UNIQUE KEY `groupid_farm` (`groupid`,`farm`),
  KEY `farm` (`farm`)
) ENGINE=InnoDB AUTO_INCREMENT=360 DEFAULT CHARSET=latin1;
\endverbatim

\subsubsection sql_table_usergroup Table usergroup
\verbatim
CREATE TABLE `usergroup` (
  `recno` mediumint(8) unsigned NOT NULL auto_increment,
  `groupid` varchar(20) NOT NULL default '',
  `userid` varchar(16) NOT NULL default '',
  `remark` varchar(80) default NULL,
  PRIMARY KEY  (`recno`),
  UNIQUE KEY `groupid_userid` (`groupid`,`userid`),
  KEY `userid` (`userid`)
) ENGINE=InnoDB DEFAULT CHARSET=latin1;
\endverbatim

\subsubsection sql_table_benchmark Table benchmark
\verbatim
CREATE TABLE `benchmark` (
  `recno` mediumint(8) unsigned NOT NULL auto_increment,
  `customerid` varchar(16) NOT NULL,
  `farm` varchar(64) NOT NULL default '',
  `lastday` date NOT NULL default '0000-00-00',
  `period` varchar(20) NOT NULL default '',
  `trait` varchar(30) NOT NULL default '',
  `nobs` double(8,0) NOT NULL default '0',
  `total` double(14,2) NOT NULL default '0.00',
  `inventory` int(7) unsigned NOT NULL default '0',
  `region` varchar(16) NOT NULL default 'US',
  PRIMARY KEY  (`recno`),
  UNIQUE KEY `cflpt` (`customerid`,`farm`,`lastday`,`period`,`trait`),
  KEY `lastday_period` (`lastday`,`period`),
  KEY `region` (`region`)
) ENGINE=InnoDB AUTO_INCREMENT=104644 DEFAULT CHARSET=latin1;
\endverbatim


\subsubsection sql_table_license_bill Table license_bill
\verbatim
CREATE TABLE `license_bill` (
  `recno` mediumint(8) unsigned NOT NULL auto_increment,
  `farm` varchar(20) NOT NULL default '',
  `bill_date` date NOT NULL default '0000-00-00',
  `license_start_date` date NOT NULL default '0000-00-00',
  `license_end_date` date NOT NULL default '0000-00-00',
  `inventory` int(7) unsigned NOT NULL default '0',
  `license_fee` varchar(20) default '',
  `balance` decimal(8,2) NOT NULL default '0.00',
  `remark` varchar(80) default '',
  PRIMARY KEY  (`recno`),
  KEY `bill_date` (`bill_date`),
  KEY `license_start_date` (`license_start_date`)
) ENGINE=InnoDB AUTO_INCREMENT=1680 DEFAULT CHARSET=latin1;
\endverbatim

\subsubsection sql_table_licensekey Table licensekey
\verbatim
CREATE TABLE `licensekey` (
  `licensekey` char(42) NOT NULL default '',
  PRIMARY KEY  (`licensekey`)
) ENGINE=InnoDB DEFAULT CHARSET=latin1;
\endverbatim

\subsubsection sql_table_motd Table motd
\verbatim
CREATE TABLE `motd` (
  `recno` int(10) unsigned NOT NULL auto_increment,
  `cdate` date NOT NULL default '0000-00-00',
  `message` text,
  PRIMARY KEY  (`recno`),
  KEY `cdate` (`cdate`)
) ENGINE=InnoDB DEFAULT CHARSET=latin1;
\endverbatim

\subsubsection sql_table_sowcard Table sowcard
\verbatim
CREATE TABLE `sowcard` (
  `tag` varchar(16) NOT NULL,
  `farm` varchar(20) NOT NULL,
  `line1` varchar(80) default NULL,
  `line2` varchar(80) default NULL,
  `line3` varchar(80) default NULL,
  PRIMARY KEY  (`farm`,`tag`)
) ENGINE=InnoDB DEFAULT CHARSET=latin1;
\endverbatim

\subsubsection sql_table_fiscal_cal Table fiscal_cal
\verbatim
CREATE TABLE `fiscal_cal` (
  `cdate` date NOT NULL,
  `fm` tinyint(2) NOT NULL default '0',
  `fq` tinyint(2) NOT NULL default '0',
  `fy` mediumint(4) NOT NULL default '0',
  `week` varchar(8) NOT NULL default 'UNKNOWN',
  PRIMARY KEY  (`cdate`),
  KEY `fy` (`fy`),
  KEY `fy_fm` (`fy`,`fm`),
  KEY `fy_fq` (`fy`,`fq`),
  KEY `week` (`week`)
) ENGINE=InnoDB DEFAULT CHARSET=latin1;
\endverbatim


\subsection sql_tables_farm SQL tables for a farm database

\subsubsection sql_table_abortion Table abortion
\verbatim
CREATE TABLE `abortion` (
  `recno` INT(10) UNSIGNED NOT NULL AUTO_INCREMENT,
  `sowid` VARCHAR(16) NOT NULL DEFAULT '',
  `abortdate` DATE NOT NULL DEFAULT '0000-00-00',
  `aborttime` TIME DEFAULT NULL,
  `aborttype` VARCHAR(10) NOT NULL DEFAULT 'NATURAL',
  `reason` VARCHAR(80) DEFAULT NULL,
  `servdate` DATE DEFAULT NULL,
  `parity` TINYINT(2) UNSIGNED DEFAULT NULL,
  `own` ENUM('Y','N') NOT NULL DEFAULT 'Y',
  `ts` TIMESTAMP DEFAULT CURRENT_TIMESTAMP ON UPDATE CURRENT_TIMESTAMP,
  PRIMARY KEY (`recno`),
  UNIQUE KEY `sowid_abortdate` (`sowid`,`abortdate`),
  KEY `abortdate` (`abortdate`),
  KEY `aborttype` (`aborttype`),
  KEY `own` (`own`)
) ENGINE=InnoDB DEFAULT CHARSET=latin1;
\endverbatim

\subsubsection sql_table_boarherd Table boarherd
\verbatim
CREATE TABLE `boarherd` (
  `recno` INT(10) UNSIGNED NOT NULL AUTO_INCREMENT UNIQUE,
  `boarid` VARCHAR(16) NOT NULL DEFAULT '',
  `altid` VARCHAR(36) DEFAULT NULL,
  `tattoo` VARCHAR(12) DEFAULT NULL,
  `gline` VARCHAR(20) DEFAULT NULL,
  `location` VARCHAR(13) DEFAULT NULL,
  `pstatus` VARCHAR(13) NOT NULL DEFAULT '',
  `gstatus` VARCHAR(13) NOT NULL DEFAULT 'NONE',
  `stocktype` VARCHAR(13) DEFAULT NULL,
  `birthdate` DATE DEFAULT NULL,
  `entrydate` DATE NOT NULL DEFAULT '0000-00-00',
  `removedate` DATE DEFAULT NULL,
  `removereason1` VARCHAR(30) DEFAULT NULL,
  `removereason2` VARCHAR(30) DEFAULT NULL,
  `removetype` VARCHAR(10) DEFAULT NULL,
  `quota` SMALLINT(5) UNSIGNED DEFAULT NULL,
  `matings` SMALLINT(5) UNSIGNED DEFAULT NULL,
  `origin` VARCHAR(16) DEFAULT NULL,
  `pstatusdate` DATE DEFAULT NULL,
  `entrygroup` VARCHAR(9) DEFAULT NULL,
  `sire` VARCHAR(21) DEFAULT NULL,
  `dam` VARCHAR(21) DEFAULT NULL,
  `trueentrydate` CHAR(1) DEFAULT NULL,
  `begindate`   DATE NOT NULL DEFAULT '0000-00-00',
  `remark` VARCHAR(80) DEFAULT NULL,
  `user1` VARCHAR(80) DEFAULT NULL,
  `user2` VARCHAR(80) DEFAULT NULL,
  `removetime` DOUBLE(16,6) DEFAULT NULL,
  `ts` TIMESTAMP DEFAULT CURRENT_TIMESTAMP ON UPDATE CURRENT_TIMESTAMP,
  PRIMARY KEY (`boarid`),
  KEY `entrydate` (`entrydate`),
  KEY `removedate` (`removedate`),
  KEY `gline` (`gline`),
  KEY `pstatusdate` (`pstatusdate`),
  KEY `pstatus` (`pstatus`),
  KEY `entrygroup` (`entrygroup`),
  KEY `removetime` (`removetime`),
  KEY `tattoo` (`tattoo`),
  KEY `begindate` (`begindate`)
) ENGINE=InnoDB DEFAULT CHARSET=latin1;
\endverbatim

\subsubsection sql_table_conditions Table conditions
\verbatim
CREATE TABLE IF NOT EXISTS `conditions`  (
  `recno` INT(10) UNSIGNED NOT NULL AUTO_INCREMENT,
  `sowid` VARCHAR(16) NOT NULL DEFAULT '',
  `eventdate` DATE NOT NULL DEFAULT '0000-00-00',
  `eventhour` TINYINT(2) NOT NULL DEFAULT 1,
  `score` DECIMAL(6,1) DEFAULT NULL,
  `weight` FLOAT(10,2) DEFAULT NULL,
  `back_fat` FLOAT(7,3) DEFAULT NULL,
  `loin_depth` FLOAT(7,3) DEFAULT NULL,
  `remark` VARCHAR(80) DEFAULT NULL,
  `own` ENUM('Y','N') NOT NULL DEFAULT 'Y',
  `ts` TIMESTAMP DEFAULT CURRENT_TIMESTAMP ON UPDATE CURRENT_TIMESTAMP,
  PRIMARY KEY (`recno`),
  KEY `sowid` (`sowid`),
  KEY `eventdate` (`eventdate`),
  KEY `own` (`own`)
) ENGINE=InnoDB DEFAULT CHARSET=latin1;
\endverbatim

\subsubsection sql_table_dictionary Table dictionary
\verbatim
CREATE TABLE IF NOT EXISTS `dictionary` (
  `recno` INT(10) UNSIGNED NOT NULL AUTO_INCREMENT,
  `category` VARCHAR(30) NOT NULL DEFAULT '',
  `item` VARCHAR(50) NOT NULL DEFAULT '',
  `synonym` VARCHAR(30) DEFAULT NULL,
  `active` ENUM('Y','N') NOT NULL DEFAULT 'Y',
  `remark` VARCHAR(80) DEFAULT NULL,
  `ts` TIMESTAMP DEFAULT CURRENT_TIMESTAMP ON UPDATE CURRENT_TIMESTAMP,
  PRIMARY KEY (`recno`),
  UNIQUE `category_item` (`category`,`item`)
) ENGINE=InnoDB DEFAULT CHARSET=latin1;
\endverbatim

\subsubsection sql_table_farrow Table farrow
\verbatim
CREATE TABLE IF NOT EXISTS `farrow` (
  `recno` INT(10) UNSIGNED NOT NULL AUTO_INCREMENT,
  `sowid` VARCHAR(16) NOT NULL DEFAULT '',
  `farrowdate` DATE NOT NULL DEFAULT '0000-00-00',
  `farrowtime` TIME DEFAULT NULL,
  `parity` TINYINT(2) UNSIGNED NOT NULL DEFAULT 0,
  `liveborn` TINYINT(2) UNSIGNED NOT NULL DEFAULT 0,
  `stillborn` TINYINT(2) UNSIGNED NOT NULL DEFAULT 0,
  `mummies` TINYINT(2) UNSIGNED NOT NULL DEFAULT 0,
  `birthwt` FLOAT(4,1) DEFAULT NULL,
  `maleborn` TINYINT(2) UNSIGNED DEFAULT NULL,
  `femaleborn` TINYINT(2) UNSIGNED DEFAULT NULL,
  `barn` VARCHAR(4) DEFAULT NULL,
  `room` VARCHAR(4) DEFAULT NULL,
  `pen` VARCHAR(4) DEFAULT NULL,
  `litterid` VARCHAR(16) DEFAULT NULL,
  `color` VARCHAR(6) DEFAULT NULL,
  `induced` TINYINT(1) UNSIGNED DEFAULT NULL,
  `assisted` TINYINT(1) UNSIGNED DEFAULT NULL,
  `condition` TINYINT(3) DEFAULT NULL,
  `servdate` DATE DEFAULT NULL,
  `own` ENUM('Y','N') NOT NULL DEFAULT 'Y',
  `remark` VARCHAR(80) DEFAULT NULL,
  `ts` TIMESTAMP DEFAULT CURRENT_TIMESTAMP ON UPDATE CURRENT_TIMESTAMP,
  PRIMARY KEY (`recno`),
  UNIQUE KEY `sowid_parity` (`sowid`,`parity`),
  KEY `farrowdate` (`farrowdate`),
  KEY `parity` (`parity`),
  KEY `liveborn` (`liveborn`),
  KEY `litterid` (`litterid`),
  KEY `own` (`own`)
) ENGINE=InnoDB DEFAULT CHARSET=latin1;
\endverbatim

\subsubsection sql_table_doa Table doa
\verbatim
CREATE TABLE IF NOT EXISTS `doa` (
  `recno` INT(10) UNSIGNED NOT NULL AUTO_INCREMENT,
  `deathdate` DATE NOT NULL DEFAULT '0000-00-00',
  `doa` SMALLINT(5) UNSIGNED NOT NULL DEFAULT 0,
  `received` INT(10) UNSIGNED DEFAULT NULL,
  `ticket` VARCHAR(12) DEFAULT NULL,
  `destination` VARCHAR(16) DEFAULT NULL,
  `remark` VARCHAR(80) DEFAULT NULL,
  `ts` TIMESTAMP DEFAULT CURRENT_TIMESTAMP ON UPDATE CURRENT_TIMESTAMP,
  PRIMARY KEY (`recno`),
  KEY `deathdate` (`deathdate`),
  KEY `ticket` (`ticket`)
) ENGINE=InnoDB DEFAULT CHARSET=latin1;
\endverbatim

\subsubsection sql_table_feed Table feed
\verbatim
CREATE TABLE IF NOT EXISTS `feed` (
  `recno` INT(10) UNSIGNED NOT NULL AUTO_INCREMENT,
  `eventdate` DATE NOT NULL DEFAULT '0000-00-00',
  `eventhour` TINYINT(2) NOT NULL DEFAULT 1,
  `eventname` VARCHAR(16) NOT NULL DEFAULT '',
  `feedid` VARCHAR(40) DEFAULT NULL,
  `ticket` VARCHAR(15) DEFAULT NULL,
  `groupid` VARCHAR(16) NOT NULL DEFAULT '',
  `feedbin` VARCHAR(15) NOT NULL DEFAULT '',
  `weight` FLOAT(10,2) NOT NULL DEFAULT 0.0,
  `cost` DECIMAL(10,2) DEFAULT NULL,
  `meditype` VARCHAR(40) DEFAULT NULL,
  `mediprice` DECIMAL(7,2) DEFAULT NULL,
  `mediperfeed` FLOAT(8,2) DEFAULT NULL,
  `medicost` DECIMAL(8,2) DEFAULT NULL,
  `remark` VARCHAR(80) DEFAULT NULL,
  `ts` TIMESTAMP DEFAULT CURRENT_TIMESTAMP ON UPDATE CURRENT_TIMESTAMP,
  PRIMARY KEY (recno),
  KEY `eventname` (`eventname`),
  KEY `eventdate` (`eventdate`),
  KEY `groupid` (`groupid`),
  KEY `feedid` (`feedid`),
  KEY `feedbin` (`feedbin`)
) ENGINE=InnoDB DEFAULT CHARSET=latin1;
\endverbatim

\subsubsection sql_table_general Table general
\verbatim
CREATE TABLE IF NOT EXISTS `general` (
  `recno` INT(10) UNSIGNED NOT NULL AUTO_INCREMENT,
  `pigid` VARCHAR(16) NOT NULL DEFAULT '',
  `eventdate` DATE NOT NULL DEFAULT '0000-00-00',
  `eventtime` TIME DEFAULT NULL,
  `sex` CHAR(1) NOT NULL DEFAULT '',
  `eventtype` VARCHAR(12) NOT NULL DEFAULT '',
  `own` ENUM('Y','N') NOT NULL DEFAULT 'Y',
  `remark` VARCHAR(80) DEFAULT NULL,
  `user1` INT(11) DEFAULT NULL,
  `user2` float DEFAULT NULL,
  `ts` TIMESTAMP DEFAULT CURRENT_TIMESTAMP ON UPDATE CURRENT_TIMESTAMP,
  PRIMARY KEY (`recno`),
  KEY `pigid` (`pigid`),
  KEY `sex` (`sex`),
  KEY `eventdate` (`eventdate`),
  KEY `eventtype` (`eventtype`),
  KEY `own` (`own`)
) ENGINE=InnoDB DEFAULT CHARSET=latin1;
\endverbatim


\subsubsection sql_table_grower Table grower
\verbatim
CREATE TABLE IF NOT EXISTS `grower` (
  `recno` INT(10) UNSIGNED NOT NULL AUTO_INCREMENT,
  `eventdate` DATE NOT NULL DEFAULT '0000-00-00',
  `eventtime` TIME NOT NULL DEFAULT '01:00:00',
  `eventname` VARCHAR(12) NOT NULL DEFAULT '',
  `reason` VARCHAR(80) DEFAULT NULL,
  `groupid` VARCHAR(16) NOT NULL DEFAULT '',
  `barn` VARCHAR(8) NOT NULL DEFAULT '',
  `room` VARCHAR(6) DEFAULT NULL,
  `pen` VARCHAR(6) DEFAULT NULL,
  `npigs` MEDIUMINT(6) NOT NULL DEFAULT 0,
  `weight` FLOAT(10,4) DEFAULT NULL,
  `ccwt` FLOAT(10,2) DEFAULT NULL,
  `dvalue` DECIMAL(10,2) DEFAULT NULL,
  `age` DECIMAL(5,1) DEFAULT NULL,
  `male` VARCHAR(60) DEFAULT NULL,
  `female` VARCHAR(60) DEFAULT NULL,
  `barrow` MEDIUMINT(6) NOT NULL DEFAULT 0,
  `nonsel` MEDIUMINT(6) NOT NULL DEFAULT 0,
  `piginv` MEDIUMINT(6) NOT NULL DEFAULT 0,
  `originfarm` VARCHAR(12) DEFAULT NULL,
  `origingid` VARCHAR(7) DEFAULT NULL,
  `ticket` VARCHAR(12) DEFAULT NULL,
  `client` VARCHAR(12) DEFAULT NULL,
  `destination` VARCHAR(50) DEFAULT NULL,
  `driver` VARCHAR(50) DEFAULT NULL,
  `truck` VARCHAR(24) DEFAULT NULL,
  `invoice` VARCHAR(12) DEFAULT NULL,
  `exit_order` VARCHAR(12) DEFAULT NULL,
  `accounting_invoice` VARCHAR(12) DEFAULT NULL,
  `total_weight` FLOAT(10,3) DEFAULT NULL,
  `net_weight` FLOAT(10,3) DEFAULT NULL,
  `remark` VARCHAR(80) DEFAULT NULL,
  `ts` TIMESTAMP DEFAULT CURRENT_TIMESTAMP ON UPDATE CURRENT_TIMESTAMP,
  PRIMARY KEY (`recno`),
  KEY `groupid` (`groupid`),
  KEY `barn` (`barn`),
  KEY `ticket` (`ticket`),
  KEY `eventdate_time` (`eventdate`,`eventtime`),
  KEY `eventname` (`eventname`),
  KEY `client` (`client`),
  KEY `eventname_client` (`eventname`,`client`),
  KEY `invoice` (`invoice`),
  KEY `exit_order` (`exit_order`),
  KEY `driver` (`driver`),
  KEY `truck` (`truck`),
  KEY `accounting_invoice` (`accounting_invoice`)
) ENGINE=InnoDB DEFAULT CHARSET=latin1;
\endverbatim


\subsubsection sql_table_location Table location
\verbatim
CREATE TABLE IF NOT EXISTS `location` (
  `recno` INT(10) UNSIGNED NOT NULL AUTO_INCREMENT,
  `eventdate` DATE NOT NULL DEFAULT '0000-00-00',
  `eventtime` time NOT NULL default '01:00:00',
  `eventname` VARCHAR(12) NOT NULL DEFAULT '',
  `reason` VARCHAR(80) DEFAULT NULL,
  `barn` VARCHAR(16) NOT NULL DEFAULT '',
  `room` VARCHAR(6) DEFAULT NULL,
  `pen` VARCHAR(6) DEFAULT NULL,
  `npigs` MEDIUMINT(6) NOT NULL DEFAULT 0,
  `weight` FLOAT(10,4) DEFAULT NULL,
  `ccwt` FLOAT(10,2) DEFAULT NULL,
  `dvalue` DECIMAL(10,2) DEFAULT NULL,
  `age` DECIMAL(5,1) DEFAULT NULL,
  `piginv` MEDIUMINT(6) NOT NULL DEFAULT 0,
  `originfarm` VARCHAR(12) DEFAULT NULL,
  `ticket` varchar(12) default NULL,
  `client` varchar(12) default NULL,
  `destination` varchar(50) default NULL,
  `driver` varchar(50) default NULL,
  `truck` varchar(24) default NULL,
  `invoice` varchar(12) default NULL,
  `exit_order` varchar(12) default NULL,
  `accounting_invoice` VARCHAR(12) DEFAULT NULL,
  `total_weight` FLOAT(10,3) DEFAULT NULL,
  `net_weight` FLOAT(10,3) DEFAULT NULL,
  `remark` VARCHAR(80) DEFAULT NULL,
  `ts` TIMESTAMP DEFAULT CURRENT_TIMESTAMP ON UPDATE CURRENT_TIMESTAMP,
  PRIMARY KEY (`recno`),
  KEY `eventdate` (`eventdate`),
  KEY `eventname` (`eventname`),
  KEY `barn` (`barn`),
  KEY `ticket` (`ticket`),
  KEY `client` (`client`),
  KEY `eventname_client` (`eventname`,`client`),
  KEY `invoice` (`invoice`),
  KEY `exit_order` (`exit_order`),
  KEY `driver` (`driver`),
  KEY `truck` (`truck`),
  KEY `eventdate_time` (`eventdate`,`eventtime`),
  KEY `accounting_invoice` (`accounting_invoice`)
) ENGINE=InnoDB DEFAULT CHARSET=latin1;
\endverbatim


\subsubsection sql_table_piglet Table piglet
\verbatim
CREATE TABLE IF NOT EXISTS `piglet` (
  `recno` INT(10) UNSIGNED NOT NULL AUTO_INCREMENT,
  `sowid` VARCHAR(16) NOT NULL DEFAULT '',
  `eventdate` DATE NOT NULL DEFAULT '0000-00-00',
  `eventhour` TINYINT(2) NOT NULL DEFAULT 1,
  `eventname` VARCHAR(10) NOT NULL DEFAULT '',
  `npigs` INT(3) NOT NULL DEFAULT 0,
  `weight` FLOAT(5,1) DEFAULT NULL,
  `reason` VARCHAR(80) DEFAULT NULL,
  `sowloc` VARCHAR(12) DEFAULT NULL,
  `remark` VARCHAR(80) DEFAULT NULL,
  `parity` TINYINT(2) UNSIGNED NOT NULL DEFAULT 0,
  `own` ENUM('Y','N') NOT NULL DEFAULT 'Y',
  `ts` TIMESTAMP DEFAULT CURRENT_TIMESTAMP ON UPDATE CURRENT_TIMESTAMP,
  PRIMARY KEY (`recno`),
  KEY `sowid_parity` (`sowid`,`parity`),
  KEY `eventdate_hour` (`eventdate`,`eventhour`),
  KEY `eventname` (`eventname`),
  KEY `own` (`own`)
) ENGINE=InnoDB DEFAULT CHARSET=latin1;
\endverbatim

\subsubsection sql_table_pregexam Table pregexam
\verbatim
CREATE TABLE IF NOT EXISTS `pregexam` (
  `recno` INT(10) UNSIGNED NOT NULL AUTO_INCREMENT,
  `sowid` VARCHAR(16) NOT NULL DEFAULT '',
  `examdate` DATE NOT NULL DEFAULT '0000-00-00',
  `examresult` TINYINT(2) NOT NULL DEFAULT 0,
  `servdate` DATE DEFAULT NULL,
  `parity` TINYINT(2) UNSIGNED DEFAULT NULL,
  `own` ENUM('Y','N') NOT NULL DEFAULT 'Y',
  `remark` VARCHAR(80) DEFAULT NULL,
  `ts` TIMESTAMP DEFAULT CURRENT_TIMESTAMP ON UPDATE CURRENT_TIMESTAMP,
  PRIMARY KEY (`recno`),
  UNIQUE KEY `sowid_examdate` (`sowid`,`examdate`),
  KEY `examdate` (`examdate`),
  KEY `own` (`own`)
) ENGINE=InnoDB DEFAULT CHARSET=latin1;
\endverbatim

\subsubsection sql_table_rare Table rare
\verbatim
CREATE TABLE IF NOT EXISTS `rare` (
  `recno` INT(10) UNSIGNED NOT NULL AUTO_INCREMENT,
  `sowid` VARCHAR(16) NOT NULL DEFAULT '',
  `eventdate` DATE NOT NULL DEFAULT '0000-00-00',
  `eventtime` TIME DEFAULT NULL,
  `eventname` VARCHAR(12) NOT NULL DEFAULT '',
  `parity` TINYINT(2) UNSIGNED DEFAULT NULL,
  `own` ENUM('Y','N') NOT NULL DEFAULT 'Y',
  `remark` VARCHAR(80) DEFAULT NULL,
  `ts` TIMESTAMP DEFAULT CURRENT_TIMESTAMP ON UPDATE CURRENT_TIMESTAMP,
  PRIMARY KEY (`recno`),
  KEY `sowid` (`sowid`),
  KEY `eventdate` (`eventdate`),
  KEY `eventname` (`eventname`),
  KEY `own` (`own`)
) ENGINE=InnoDB DEFAULT CHARSET=latin1;
\endverbatim

\subsubsection sql_table_service Table service
\verbatim
CREATE TABLE IF NOT EXISTS `service` (
  `recno` INT(10) UNSIGNED NOT NULL AUTO_INCREMENT,
  `sowid` VARCHAR(16) NOT NULL DEFAULT '',
  `parity` TINYINT(2) UNSIGNED NOT NULL DEFAULT 0,
  `servgroup` VARCHAR(8) NOT NULL DEFAULT 'UNKNOWN',
  `servloc` VARCHAR(12) DEFAULT NULL,
  `servdate` DATE NOT NULL DEFAULT '0000-00-00',
  `servtime` TIME DEFAULT NULL,
  `boarid` VARCHAR(16) DEFAULT NULL,
  `technician` VARCHAR(5) DEFAULT NULL,
  `servscore` TINYINT(2) DEFAULT NULL,
  `servdate2` DATE DEFAULT NULL,
  `servtime2` TIME DEFAULT NULL,
  `boarid2` VARCHAR(16) DEFAULT NULL,
  `technician2` VARCHAR(5) DEFAULT NULL,
  `servscore2` TINYINT(2) DEFAULT NULL,
  `servdate3` DATE DEFAULT NULL,
  `servtime3` TIME DEFAULT NULL,
  `boarid3` VARCHAR(16) DEFAULT NULL,
  `technician3` VARCHAR(5) DEFAULT NULL,
  `servscore3` TINYINT(2) DEFAULT NULL,
  `servdate4` DATE DEFAULT NULL,
  `servtime4` TIME DEFAULT NULL,
  `boarid4` VARCHAR(16) DEFAULT NULL,
  `technician4` VARCHAR(5) DEFAULT NULL,
  `servscore4` TINYINT(2) DEFAULT NULL,
  `servdate5` DATE DEFAULT NULL,
  `servtime5` TIME DEFAULT NULL,
  `boarid5` VARCHAR(16) DEFAULT NULL,
  `technician5` VARCHAR(5) DEFAULT NULL,
  `servscore5` TINYINT(2) DEFAULT NULL,
  `lmtgdate` DATE DEFAULT NULL,
  `servtype` VARCHAR(6) DEFAULT NULL,
  `semenage1` TINYINT(2) UNSIGNED DEFAULT NULL,
  `semenage2` TINYINT(2) UNSIGNED DEFAULT NULL,
  `semenage3` TINYINT(2) UNSIGNED DEFAULT NULL,
  `semenage4` TINYINT(2) UNSIGNED DEFAULT NULL,
  `semenage5` TINYINT(2) UNSIGNED DEFAULT NULL,
  `servno` TINYINT(3) UNSIGNED NOT NULL DEFAULT 0,
  `servresult` VARCHAR(14) DEFAULT NULL,
  `dodate` DATE DEFAULT NULL,
  `own` ENUM('Y','N') NOT NULL DEFAULT 'Y',
  `nmates` TINYINT(3) UNSIGNED NOT NULL DEFAULT 0,
  `nboars` TINYINT(3) UNSIGNED DEFAULT NULL,
  `remark` VARCHAR(80) DEFAULT NULL,
  `ts` TIMESTAMP DEFAULT CURRENT_TIMESTAMP ON UPDATE CURRENT_TIMESTAMP,
  PRIMARY KEY (`recno`),
  UNIQUE KEY `sowid_servdate` (`sowid`,`servdate`),
  KEY `servdate` (`servdate`),
  KEY `parity` (`parity`),
  KEY `boarid` (`boarid`),
  KEY `boarid2` (`boarid2`),
  KEY `boarid3` (`boarid3`),
  KEY `boarid4` (`boarid4`),
  KEY `boarid5` (`boarid5`),
  KEY `servloc` (`servloc`),
  KEY `servgroup` (`servgroup`),
  KEY `own` (`own`)
) ENGINE=InnoDB DEFAULT CHARSET=latin1;
\endverbatim

\subsubsection sql_table_sowherd Table sowherd
\verbatim
CREATE TABLE IF NOT EXISTS `sowherd` (
  `recno` INT(10) UNSIGNED NOT NULL AUTO_INCREMENT unique,
  `sowid` VARCHAR(16) NOT NULL DEFAULT '',
  `altid` VARCHAR(36) DEFAULT NULL,
  `tattoo` VARCHAR(12) DEFAULT NULL,
  `gline` VARCHAR(20) DEFAULT NULL,
  `pstatus` VARCHAR(23) NOT NULL DEFAULT '',
  `gstatus` VARCHAR(13) NOT NULL DEFAULT 'NONE',
  `stocktype` VARCHAR(13) DEFAULT NULL,
  `birthdate` DATE DEFAULT NULL,
  `entrydate` DATE NOT NULL DEFAULT '0000-00-00',
  `entryparity` TINYINT(2) UNSIGNED NOT NULL DEFAULT 0,
  `removedate` DATE DEFAULT NULL,
  `removereason1` VARCHAR(30) DEFAULT NULL,
  `removereason2` VARCHAR(30) DEFAULT NULL,
  `removetype` VARCHAR(10) DEFAULT NULL,
  `removeweight` FLOAT(6,1) DEFAULT NULL,
  `servgroup` VARCHAR(8) DEFAULT NULL,
  `quota` SMALLINT(5) UNSIGNED DEFAULT NULL,
  `currentparity` TINYINT(2) UNSIGNED NOT NULL DEFAULT 0,
  `currentloc` VARCHAR(16) DEFAULT NULL,
  `origin` VARCHAR(16) DEFAULT NULL,
  `pstatusdate` DATE DEFAULT NULL,
  `entrygroup` VARCHAR(9) DEFAULT NULL,
  `sire` VARCHAR(21) DEFAULT NULL,
  `dam` VARCHAR(21) DEFAULT NULL,
  `trueentrydate` CHAR(1) DEFAULT NULL,
  `begindate` DATE NOT NULL DEFAULT '0000-00-00',
  `beginparity` TINYINT(2) UNSIGNED NOT NULL DEFAULT 0,
  `remark` VARCHAR(80) DEFAULT NULL,
  `user1` VARCHAR(80) DEFAULT NULL,
  `user2` VARCHAR(80) DEFAULT NULL,
  `removetime` DOUBLE(16,6) DEFAULT NULL,
  `ts` TIMESTAMP DEFAULT CURRENT_TIMESTAMP ON UPDATE CURRENT_TIMESTAMP,
  PRIMARY KEY (`sowid`),
  KEY `entrydate` (`entrydate`),
  KEY `removedate` (`removedate`),
  KEY `gline` (`gline`),
  KEY `servgroup` (`servgroup`),
  KEY `currentparity` (`currentparity`),
  KEY `pstatusdate` (`pstatusdate`),
  KEY `pstatus` (`pstatus`),
  KEY `entrygroup` (`entrygroup`),
  KEY `removetime` (`removetime`),
  KEY `tattoo` (`tattoo`),
  KEY `begindate` (`begindate`)
) ENGINE=InnoDB DEFAULT CHARSET=latin1;
\endverbatim

\subsubsection sql_table_treatments Table treatments
\verbatim
CREATE TABLE IF NOT EXISTS `treatments` (
  `recno` INT(10) UNSIGNED NOT NULL AUTO_INCREMENT,
  `pigid` VARCHAR(16) NOT NULL DEFAULT '',
  `treatdate` DATE NOT NULL DEFAULT '0000-00-00',
  `treattime` TIME DEFAULT NULL,
  `sex` CHAR(1) NOT NULL DEFAULT '',
  `treatment` VARCHAR(80) DEFAULT NULL,
  `own` ENUM('Y','N') NOT NULL DEFAULT 'Y',
  `ts` TIMESTAMP DEFAULT CURRENT_TIMESTAMP ON UPDATE CURRENT_TIMESTAMP,
  PRIMARY KEY (`recno`),
  KEY `pigid` (`pigid`),
  KEY `treatdate` (`treatdate`),
  KEY `sex` (`sex`),
  KEY `own` (`own`)
) ENGINE=InnoDB DEFAULT CHARSET=latin1;
\endverbatim


\subsubsection sql_table_contempgroup Table contempgroup
\verbatim
CREATE TABLE IF NOT EXISTS `contempgroup` (
  `recno` INT(10) UNSIGNED NOT NULL AUTO_INCREMENT,
  `begindate` DATE NOT NULL DEFAULT '0000-00-00',
  `enddate` DATE NOT NULL DEFAULT '0000-00-00',
  `liveborn_litters` INT NOT NULL DEFAULT 0,
  `liveborn_average` DOUBLE (8,1) NOT NULL DEFAULT 0,
  `adj21daywt_litters` INT DEFAULT 0,
  `adj21daywt_average` DOUBLE (8,1) DEFAULT 0,
  `ts` TIMESTAMP DEFAULT CURRENT_TIMESTAMP ON UPDATE CURRENT_TIMESTAMP,
  PRIMARY KEY (`recno`),
  KEY begindate (`begindate`),
  KEY `enddate` (`enddate`),
  UNIQUE `period` (`begindate`,`enddate`)
) ENGINE=InnoDB DEFAULT CHARSET
\endverbatim


\subsubsection sql_table_batch Table batch
\verbatim
CREATE TABLE IF NOT EXISTS `batch` (
  `recno` INT(10) UNSIGNED NOT NULL AUTO_INCREMENT,
  `batchname` VARCHAR(30) NOT NULL DEFAULT '',
  `batchtype` VARCHAR(12) NOT NULL DEFAULT '',
  `batchdata` VARCHAR(255) NOT NULL DEFAULT '',
  PRIMARY KEY (`recno`),
  KEY `batchname` (`batchname`),
  KEY `batchtype` (`batchtype`)
) ENGINE=InnoDB DEFAULT CHARSET=latin1;
\endverbatim

\subsubsection sql_table_idchange Table idchange
\verbatim
CREATE TABLE IF NOT EXISTS `idchange` (
  `recno` INT(10) UNSIGNED NOT NULL AUTO_INCREMENT,
  `changedate` DATE NOT NULL DEFAULT '0000-00-00',
  `idtype` VARCHAR(12) NOT NULL DEFAULT '',
  `currentid` VARCHAR(20) NOT NULL DEFAULT '',
  `newid` VARCHAR(20) NOT NULL DEFAULT '',
  `oldid` VARCHAR(20) NOT NULL DEFAULT '',
  `own` ENUM('Y','N') NOT NULL DEFAULT 'Y',
  `ts` TIMESTAMP DEFAULT CURRENT_TIMESTAMP ON UPDATE CURRENT_TIMESTAMP,
  PRIMARY KEY (`recno`),
  KEY `changedate` (`changedate`),
  KEY `idtype` (`idtype`),
  KEY `currentid` (`currentid`),
  KEY `newid` (`newid`),
  KEY `oldid` (`oldid`),
  KEY own (own)
) ENGINE=InnoDB DEFAULT CHARSET=latin1;
\endverbatim


\subsubsection sql_table_pedigree Table pedigree
\verbatim
CREATE TABLE IF NOT EXISTS `pedigree` (
  `recno` INT(10) UNSIGNED NOT NULL AUTO_INCREMENT,
  `gline` VARCHAR(20) NOT NULL DEFAULT '',
  `pigid` VARCHAR(36) NOT NULL DEFAULT '',
  `sire` VARCHAR(36) DEFAULT NULL,
  `dam` VARCHAR(36) DEFAULT NULL,
  `sex` CHAR(1) NOT NULL DEFAULT 'F',
  `birthdate` DATE NOT NULL DEFAULT '0000-00-00',
  `birthwt` FLOAT(4,1) DEFAULT NULL,
  `altid` VARCHAR(36) DEFAULT NULL,
  `tattoo` VARCHAR(12) DEFAULT NULL,
  `litterid` VARCHAR(16) DEFAULT NULL,
  `gstatus` VARCHAR(13) DEFAULT NULL,
  `origin` VARCHAR(16) DEFAULT NULL,
  `remark` VARCHAR(80) DEFAULT NULL,
  `ts` TIMESTAMP DEFAULT CURRENT_TIMESTAMP ON UPDATE CURRENT_TIMESTAMP,
  PRIMARY KEY (`recno`),
  UNIQUE gline_pigid (gline,pigid),
  KEY gline_sire (gline,sire),
  KEY gline_dam (gline,dam),
  KEY `pigid` (`pigid`),
  KEY `sire` (`sire`),
  KEY `dam` (`dam`),
  KEY `sex` (`sex`),
  KEY `birthdate` (`birthdate`),
  KEY `altid` (`altid`),
  KEY `tattoo` (`tattoo`),
  KEY `litterid` (`litterid`),
  KEY `gstatus` (`gstatus`),
  KEY `origin` (`origin`)
) ENGINE=InnoDB DEFAULT CHARSET=latin1;
\endverbatim

\subsubsection sql_table_userevent Table userevent
\verbatim
CREATE TABLE IF NOT EXISTS `userevent` (
  `recno` INT(10) UNSIGNED NOT NULL AUTO_INCREMENT,
  `pigid` VARCHAR(16) NOT NULL DEFAULT '',
  `eventname` VARCHAR(20) NOT NULL DEFAULT '',
  `eventdate` DATE NOT NULL DEFAULT '0000-00-00',
  `eventdata` VARCHAR(80) NOT NULL DEFAULT '',
  `sex` CHAR(1) NOT NULL DEFAULT '',
  `gline` VARCHAR(20) DEFAULT NULL,
  `remark` VARCHAR(80) DEFAULT NULL,
  `ts` TIMESTAMP DEFAULT CURRENT_TIMESTAMP ON UPDATE CURRENT_TIMESTAMP,
  PRIMARY KEY (`recno`),
  UNIQUE KEY `gline_sex_pigid` (`gline`,`sex`,`pigid`),
  KEY `pigid` (`pigid`),
  KEY `eventname` (`eventname`),
  KEY `eventdate` (`eventdate`),
  KEY `sex` (`sex`)
) ENGINE=InnoDB DEFAULT CHARSET=latin1;
\endverbatim

\subsubsection sql_table_ration Table ration
\verbatim
CREATE TABLE IF NOT EXISTS `ration` (
  `recno` INT(10) UNSIGNED NOT NULL AUTO_INCREMENT,
  `ration` VARCHAR(16) NOT NULL DEFAULT '',
  `eventname` VARCHAR(16) NOT NULL DEFAULT '',
  `eventdata` VARCHAR(30) NOT NULL DEFAULT '',
  `barn` VARCHAR(6) DEFAULT NULL,
  `groupid` VARCHAR(16) DEFAULT NULL,
  `remark` VARCHAR(80) DEFAULT NULL,
  `ts` TIMESTAMP DEFAULT CURRENT_TIMESTAMP ON UPDATE CURRENT_TIMESTAMP,
  PRIMARY KEY (`recno`),
  KEY `eventname` (`eventname`),
  KEY `barn` (`barn`),
  KEY `groupid` (`groupid`),
  KEY `ration` (`ration`)
) ENGINE=InnoDB DEFAULT CHARSET=latin1;
\endverbatim

\subsubsection sql_table_sowcard Table sowcard
\verbatim
CREATE TABLE IF NOT EXISTS `sowcard` (
  `sowid` VARCHAR(16) NOT NULL DEFAULT '',
  `line1` VARCHAR(80) DEFAULT NULL,
  `line2` VARCHAR(80) DEFAULT NULL,
  `line3` VARCHAR(80) DEFAULT NULL,
  PRIMARY KEY (`sowid`)
) ENGINE=InnoDB DEFAULT CHARSET=latin1;
\endverbatim

\subsubsection sql_table_grouptab Table grouptab
\verbatim
CREATE TABLE IF NOT EXISTS  `grouptab` (
  `recno` INT(10) UNSIGNED NOT NULL AUTO_INCREMENT,
  `sowid` VARCHAR(16) NOT NULL DEFAULT '',
  `eventdate` DATE NOT NULL DEFAULT '0000-00-00',
  `groupid` VARCHAR(16) NOT NULL DEFAULT '',
  `remark` VARCHAR(80) DEFAULT NULL,
  `ts` TIMESTAMP DEFAULT CURRENT_TIMESTAMP ON UPDATE CURRENT_TIMESTAMP,
  PRIMARY KEY (`recno`),
  KEY `sowid` (`sowid`),
  UNIQUE KEY `groupid_sowid` (`groupid`,`sowid`)
) ENGINE=InnoDB DEFAULT CHARSET=latin1;
\endverbatim


\subsubsection sql_table_ocr Table ocr
\verbatim
CREATE TABLE IF NOT EXISTS `ocr` (
  `recno` INT(10) UNSIGNED NOT NULL AUTO_INCREMENT,
  `batchname` VARCHAR(20) NOT NULL DEFAULT '',
  `imagename` VARCHAR(30) NOT NULL DEFAULT '',
  `faxname` VARCHAR(40) DEFAULT NULL,
  `formname` VARCHAR(16) NOT NULL DEFAULT '',
  `sowid` VARCHAR(16) NOT NULL DEFAULT '',
  `entrydate` VARCHAR(10) DEFAULT NULL,
  `altid` VARCHAR(36) DEFAULT NULL,
  `gline` VARCHAR(20) DEFAULT NULL,
  `origin` VARCHAR(20) DEFAULT NULL,
  `birthdate` VARCHAR(10) DEFAULT NULL,
  `entrygroup` VARCHAR(9) DEFAULT NULL,
  `servgroup` VARCHAR(8) DEFAULT NULL,
  `servdate1` VARCHAR(10) DEFAULT NULL,
  `boar1` VARCHAR(16) DEFAULT NULL,
  `tech1` VARCHAR(6) DEFAULT NULL,
  `servdate2` VARCHAR(10) DEFAULT NULL,
  `boar2` VARCHAR(16) DEFAULT NULL,
  `tech2` VARCHAR(6) DEFAULT NULL,
  `servdate3` VARCHAR(10) DEFAULT NULL,
  `boar3` VARCHAR(16) DEFAULT NULL,
  `tech3` VARCHAR(6) DEFAULT NULL,
  `farrowdate` VARCHAR(10) DEFAULT NULL,
  `liveborn` CHAR(3) DEFAULT NULL,
  `stillborn` CHAR(3) DEFAULT NULL,
  `mummies` CHAR(3) DEFAULT NULL,
  `room` VARCHAR(10) DEFAULT NULL,
  `crate` VARCHAR(10) DEFAULT NULL,
  `farrowflag` VARCHAR(16) DEFAULT NULL,
  `eventdate` VARCHAR(10) DEFAULT NULL,
  `eventname` VARCHAR(10) DEFAULT NULL,
  `npigs` CHAR(3) DEFAULT NULL,
  `weight` VARCHAR(6) DEFAULT NULL,
  `reason` VARCHAR(10) DEFAULT NULL,
  PRIMARY KEY (`recno`),
  KEY `batchname` (`batchname`),
  KEY `imagename` (`imagename`),
  KEY `formname` (`formname`)
) ENGINE=InnoDB DEFAULT CHARSET=latin1;
\endverbatim

\subsubsection sql_table_weaner Table weaner
\verbatim
CREATE TABLE IF NOT EXISTS `weaner` (
  `recno` INT(10) UNSIGNED NOT NULL AUTO_INCREMENT unique,
  `pigid` VARCHAR(16) NOT NULL DEFAULT '',
  `altid` VARCHAR(36) DEFAULT NULL,
  `gline` VARCHAR(20) DEFAULT NULL,
  `birthdate` DATE DEFAULT NULL,
  `entrydate` DATE NOT NULL DEFAULT '0000-00-00',
  `sex` CHAR(1) NOT NULL DEFAULT '',
  `origin` VARCHAR(16) DEFAULT NULL,
  `sire` VARCHAR(21) DEFAULT NULL,
  `dam` VARCHAR(21) DEFAULT NULL,
  `pstatus` VARCHAR(16) NOT NULL DEFAULT '',
  `pstatusdate` DATE NOT NULL DEFAULT '0000-00-00',
  `remark` VARCHAR(80) DEFAULT NULL,
  `ts` TIMESTAMP DEFAULT CURRENT_TIMESTAMP ON UPDATE CURRENT_TIMESTAMP,
  PRIMARY KEY (`pigid`),
  KEY `entrydate` (`entrydate`),
  KEY `birthdate` (`birthdate`),
  KEY `gline` (`gline`),
  KEY `pstatus` (`pstatus`),
  KEY `pstatusdate` (`pstatusdate`),
  KEY `sex` (`sex`)
) ENGINE=InnoDB DEFAULT CHARSET=latin1;
\endverbatim

\subsubsection sql_table_piggydeck Table piggydeck
\verbatim
CREATE TABLE IF NOT EXISTS `piggydeck` (
  `recno` INT(10) UNSIGNED NOT NULL AUTO_INCREMENT,
  `eventdate` DATE NOT NULL DEFAULT '0000-00-00',
  `eventhour` TINYINT(2) NOT NULL DEFAULT 1,
  `eventname` VARCHAR(12) NOT NULL DEFAULT '',
  `npigs` MEDIUMINT(6) NOT NULL DEFAULT 0,
  `weight` FLOAT(10,2) DEFAULT NULL,
  `reason` VARCHAR(80) DEFAULT NULL,
  `age` DECIMAL(5,1) DEFAULT NULL,
  `piginv` MEDIUMINT(6) NOT NULL DEFAULT 0,
  `remark` VARCHAR(80) DEFAULT NULL,
  `ts` TIMESTAMP DEFAULT CURRENT_TIMESTAMP ON UPDATE CURRENT_TIMESTAMP,
  PRIMARY KEY (`recno`),
  KEY `eventdate` (`eventdate`),
  KEY `eventname` (`eventname`)
) ENGINE=InnoDB DEFAULT CHARSET=latin1;
\endverbatim

\subsubsection sql_table_killsheet Table killsheet
\verbatim
CREATE TABLE IF NOT EXISTS `killsheet` (
  `recno` INT(10) UNSIGNED NOT NULL AUTO_INCREMENT,
  `groupid` VARCHAR(16) NOT NULL DEFAULT '',
  `killdate` DATE NOT NULL DEFAULT '0000-00-00',
  `npigs` MEDIUMINT(6) NOT NULL DEFAULT 0,
  `pct_lean` FLOAT(6,2) DEFAULT NULL,
  `back_fat` FLOAT(6,2) DEFAULT NULL,
  `loin_depth` FLOAT(6,2) DEFAULT NULL,
  `live_weight` FLOAT(10,2) DEFAULT NULL,
  `carcass_weight` FLOAT(10,2) DEFAULT NULL,
  `carcass_value` FLOAT(10,2) DEFAULT NULL,
  `tattoo` VARCHAR(12) DEFAULT NULL,
  `remark` VARCHAR(80) DEFAULT NULL,
  `ts` TIMESTAMP DEFAULT CURRENT_TIMESTAMP ON UPDATE CURRENT_TIMESTAMP,
  PRIMARY KEY (`recno`),
  KEY `groupid` (`groupid`),
  KEY `killdate` (`killdate`)
) ENGINE=InnoDB DEFAULT CHARSET=latin1;
\endverbatim

\subsubsection sql_table_sowsales Table sowsales
\verbatim
CREATE TABLE IF NOT EXISTS `sowsales` (
  `recno` INT(10) UNSIGNED NOT NULL AUTO_INCREMENT unique,
  `sowid` VARCHAR(16) NOT NULL DEFAULT '',
  `salesdate` DATE NOT NULL DEFAULT '0000-00-00',
  `salestime` TIME NOT NULL DEFAULT '01:00:00',
  `dvalue` DECIMAL(10,2) DEFAULT NULL,
  `ticket` VARCHAR(12) DEFAULT NULL,
  `client` VARCHAR(12) DEFAULT NULL,
  `destination` VARCHAR(50) DEFAULT NULL,
  `driver` VARCHAR(50) DEFAULT NULL,
  `truck` VARCHAR(24) DEFAULT NULL,
  `invoice` VARCHAR(12) DEFAULT NULL,
  `exit_order` VARCHAR(12) DEFAULT NULL,
  `salestype` VARCHAR(13) DEFAULT NULL,
  `weight` FLOAT(10,4) DEFAULT NULL,
  `accounting_invoice` VARCHAR(12) DEFAULT NULL,
  `net_weight` FLOAT(10,3) DEFAULT NULL,
  `remark` VARCHAR(80) DEFAULT NULL,
  `ts` TIMESTAMP DEFAULT CURRENT_TIMESTAMP ON UPDATE CURRENT_TIMESTAMP,
  PRIMARY KEY (`sowid`),
  KEY `salesdate` (`salesdate`),
  KEY `ticket` (`ticket`),
  KEY `client` (`client`),
  KEY `invoice` (`invoice`),
  KEY `exit_order` (`exit_order`),
  KEY `driver` (`driver`),
  KEY `truck` (`truck`),
  KEY `salestype` (`salestype`),
  KEY `accounting_invoice` (`accounting_invoice`)
) ENGINE=InnoDB DEFAULT CHARSET=latin1;
\endverbatim

\subsubsection sql_table_boarsales Table boarsales
\verbatim
CREATE TABLE IF NOT EXISTS `boarsales` (
  `recno` INT(10) UNSIGNED NOT NULL AUTO_INCREMENT unique,
  `boarid` VARCHAR(16) NOT NULL DEFAULT '',
  `salesdate` DATE NOT NULL DEFAULT '0000-00-00',
  `salestime` TIME NOT NULL DEFAULT '00:00:00',
  `dvalue` DECIMAL(10,2) DEFAULT NULL,
  `ticket` VARCHAR(12) DEFAULT NULL,
  `client` VARCHAR(12) DEFAULT NULL,
  `destination` VARCHAR(50) DEFAULT NULL,
  `driver` VARCHAR(50) DEFAULT NULL,
  `truck` VARCHAR(24) DEFAULT NULL,
  `invoice` VARCHAR(12) DEFAULT NULL,
  `exit_order` VARCHAR(12) DEFAULT NULL,
  `salestype` VARCHAR(13) DEFAULT NULL,
  `weight` FLOAT(10,4) DEFAULT NULL,
  `accounting_invoice` VARCHAR(12) DEFAULT NULL,
  `net_weight` FLOAT(10,3) DEFAULT NULL,
  `remark` VARCHAR(80) DEFAULT NULL,
  `ts` TIMESTAMP DEFAULT CURRENT_TIMESTAMP ON UPDATE CURRENT_TIMESTAMP,
  PRIMARY KEY (`boarid`),
  KEY `salesdate` (`salesdate`),
  KEY `ticket` (`ticket`),
  KEY `client` (`client`),
  KEY `invoice` (`invoice`),
  KEY `exit_order` (`exit_order`),
  KEY `driver` (`driver`),
  KEY `truck` (`truck`),
  KEY `salestype` (`salestype`),
  KEY `accounting_invoice` (`accounting_invoice`)
) ENGINE=InnoDB DEFAULT CHARSET=latin1;
\endverbatim

*/
