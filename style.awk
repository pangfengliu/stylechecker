BEGIN {f = 0; w = 0; i = 0; q = 0; a = 0; o = 0; c = 0}
/\yfor\y/ {print "for in" $0; f += gsub("for", "")}
/\ywhile\y/ {print "while in" $0; w += gsub("while", "")}
/\yif\y/ {i += 1; print "if in" $0}
/\ycase\y/ {c += 1; print "case in" $0}
/\?/ {q += 1; print "? in" $0}
/&&/ {print "&& in" $0; a += gsub("&&", "")}
/\|\|/ {print "|| in" $0; o += gsub("||", "")}
{ if (len < length($0)) len = length($0) }
END { print "The maximum line length is " len ;
    print "The number of for is " f;
    print "The number of while is " w;
    print "The number of if is " i;
    print "The number of case is " c;
    print "The number of ? is " q;
    print "The number of && is " a;
    print "The number of || is " o;
    print "The estimated cyclomatic complexity is " f + w + i + c + q + a + o}
