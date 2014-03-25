set r / 
r7
/; 

set j / 
Q 
j46
j47
j48
j49
j50
j51
j52
j53
j54
S 
/; 

set t /t0*t33/; 

VN(h,j)=no; 
VN('Q','j46')=yes;
VN('j46','S')=yes;
VN('Q','j47')=yes;
VN('j47','S')=yes;
VN('Q','j48')=yes;
VN('j48','S')=yes;
VN('Q','j49')=yes;
VN('j49','S')=yes;
VN('Q','j50')=yes;
VN('j50','S')=yes;
VN('Q','j51')=yes;
VN('j51','S')=yes;
VN('Q','j52')=yes;
VN('j52','S')=yes;
VN('Q','j53')=yes;
VN('j53','S')=yes;
VN('Q','j54')=yes;
VN('j54','S')=yes;

VN('j46','j47')=yes; 
VN('j46','j48')=yes; 
VN('j47','j49')=yes; 
VN('j48','j52')=yes; 
VN('j49','j50')=yes; 
VN('j49','j51')=yes; 
VN('j50','j53')=yes; 
VN('j50','j54')=yes; 
VN('j51','j52')=yes; 
VN('j52','j54')=yes; 

parameter 
d(j) / 
Q   0
S   0
j46   2
j47   4
j48   3
j49   7
j50   2
j51   1
j52   5
j53   2
j54   7
/
FEZ(j) /
Q   0
S   0
j46   2
j47   6
j48   5
j49   13
j50   15
j51   14
j52   19
j53   17
j54   26
/
SEZ(j) /
Q   0
S 33
j46   2
j47   6
j48   14
j49   13
j50   19
j51   14
j52   19
j53   26
j54   26
/
Kap(r) /
r7   9
/;

k(j,r)=0;
k('j46','r7')=1;
k('j47','r7')=2;
k('j48','r7')=6;
k('j49','r7')=1;
k('j50','r7')=1;
k('j51','r7')=2;
k('j52','r7')=2;
k('j53','r7')=1;
k('j54','r7')=8;
