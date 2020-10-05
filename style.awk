/for/ {f += 1}
/while/ {w += 1}
/if/ {i += 1}
/else/ {e += 1}
/&&/ {a += 1}
/||/ {o += 1}
/!/ {n += 1}
{ if (len < length($0)) len = length($0) }
END { print "The maximum line length is " len ; print "The estimated cyclomatic complexity is " f + w + i + e + a + o + n}
