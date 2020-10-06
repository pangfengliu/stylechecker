/\<for\>/ {f += 1; print "for in" $0}
/\<while\>/ {w += 1; print "while in" $0}
/\<if\>/ {i += 1; print "if in" $0}
/\<case\>/ {c += 1; print "case in" $0}
/\?/ {q += 1; print "? in" $0}
/&&/ {a += 1; print "&& in" $0}
/\|\|/ {o += 1; print "|| in" $0}
/!(?!=)/ {n += 1; ; print "! in" $0}
{ if (len < length($0)) len = length($0) }
END { print "The maximum line length is " len ; print "The estimated cyclomatic complexity is " f + w + i + c + q + a + o + n}
