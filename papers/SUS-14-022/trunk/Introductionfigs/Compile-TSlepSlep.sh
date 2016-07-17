pdflatex Diagram-TSlepSlep.tex
for f in *.mp; do mpost $f; done
pdflatex Diagram-TSlepSlep.tex

pdfcrop --margins '1 0 5 -445' Diagram-TSlepSlep.pdf TSlepSlep.pdf
#pdfcrop --margins '1 -240 -110 -210' Diagram-TSlepSlep.pdf TSlepSlep.pdf


rm -rf *.log
rm -rf *.mp
rm -rf *.*1
rm -rf *.aux
rm -rf Diagram-TSlepSlep.pdf

