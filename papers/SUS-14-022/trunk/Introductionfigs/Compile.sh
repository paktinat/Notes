pdflatex Diagrams.tex
for f in *.mp; do mpost $f; done
pdflatex Diagrams.tex

pdfcrop --margins '1 5 5 -365' Diagrams.pdf TChipmSlepSnu.pdf
pdfcrop --margins '1 -240 -110 -210' Diagrams.pdf TSlepSlep.pdf

rm -rf *.log
rm -rf *.mp
rm -rf *.*1
rm -rf *.aux
rm -rf Diagrams.pdf

