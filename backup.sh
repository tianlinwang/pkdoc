#!/bin/sh
#
# Sun Sep 27 17:14:39 EDT 2012
# Tianlin WANG
#

cd /home/tianlin/pkdoc
DISTDIR=pkdoc_`date +%Y%m%d`
if [ -d $DISTDIR ]
then
     \rm -fr $DISTDIR
fi

echo "********************* making directories *********************"
mkdir $DISTDIR
mkdir $DISTDIR/administrator_manual
mkdir $DISTDIR/data_entry_manual
mkdir $DISTDIR/developer_manual
mkdir $DISTDIR/misc
mkdir $DISTDIR/mobile_manual
mkdir $DISTDIR/source_code
mkdir $DISTDIR/user_manual

mkdir $DISTDIR/source_code/cmd
mkdir $DISTDIR/source_code/lib
mkdir $DISTDIR/source_code/php
mkdir $DISTDIR/source_code/pklite

cp backup.sh            $DISTDIR/
cp pigknows.bib         $DISTDIR/
cp pigknows_logo.ps     $DISTDIR/
cp pigknows_logo.png    $DISTDIR/

echo "******************** copying administrator_manual *********************"
cp administrator_manual/doxyfile.cfg  $DISTDIR/administrator_manual/
cp administrator_manual/header.tex    $DISTDIR/administrator_manual/
cp administrator_manual/footer.html   $DISTDIR/administrator_manual/
cp administrator_manual/*.c           $DISTDIR/administrator_manual/

echo "******************** copying data_entry_manual *********************"
cp data_entry_manual/*.tex          $DISTDIR/data_entry_manual/

echo "******************** copying developer_manual *********************"
cp developer_manual/doxyfile.cfg  $DISTDIR/developer_manual/
cp developer_manual/header.tex    $DISTDIR/developer_manual/
cp developer_manual/footer.html   $DISTDIR/developer_manual/
cp developer_manual/*.c           $DISTDIR/developer_manual/

echo "******************** copying misc *********************"
cp misc/*.tex                      $DISTDIR/misc/

echo "******************** copying mobile_manual *********************"
cp mobile_manual/*.tex              $DISTDIR/mobile_manual/

echo "******************** copying source_code *********************"
cp source_code/cmd/doxyfile.cfg    $DISTDIR/source_code/cmd/
cp source_code/cmd/header.tex      $DISTDIR/source_code/cmd/
cp source_code/cmd/footer.html     $DISTDIR/source_code/cmd/

cp source_code/lib/doxyfile.cfg    $DISTDIR/source_code/lib/
cp source_code/lib/header.tex      $DISTDIR/source_code/lib/
cp source_code/lib/footer.html     $DISTDIR/source_code/lib/

cp source_code/php/doxyfile.cfg    $DISTDIR/source_code/php/
cp source_code/php/header.tex      $DISTDIR/source_code/php/
cp source_code/php/footer.html     $DISTDIR/source_code/php/

cp source_code/pklite/doxyfile.cfg $DISTDIR/source_code/pklite/
cp source_code/pklite/header.tex   $DISTDIR/source_code/pklite/
cp source_code/pklite/footer.html  $DISTDIR/source_code/pklite/

echo "******************** copying user_manual *********************"
cp user_manual/doxyfile.cfg  $DISTDIR/administrator_manual/
cp user_manual/header.tex    $DISTDIR/administrator_manual/
cp user_manual/refman.tex    $DISTDIR/administrator_manual/
cp user_manual/footer.html   $DISTDIR/administrator_manual/
cp user_manual/*.c           $DISTDIR/user_manual/

if [ -f $DISTDIR.tar.bz2 ]
then
     \rm -f $DISTDIR.tar.bz2
fi

echo " "
echo "*********************** taring and compressing *******************"
tar cf $DISTDIR.tar ./$DISTDIR
bzip2 -9 $DISTDIR.tar

sftp -b - pigknows@pigknows6.com << EOF
cd pkdoc
put $DISTDIR.tar.bz2
EOF

\rm -r ./$DISTDIR
\rm -r ./$DISTDIR.tar.bz2

