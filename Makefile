
.PHONY: style
style:
	astyle --style=java --add-brackets --lineend=linux --align-pointer=type --align-reference=type \
		--delete-empty-lines --convert-tabs --pad-header --pad-oper --unpad-paren \
		--indent-col1-comments \
		--quiet --recursive '*.?pp'
	sed '/^$$/N;/^\n$$/D' -i `find src -name '*.?pp'`
	sed '/define/!s/\(FOREACH\)(/\1 (/' -i `find src -name '*.?pp'`
	sed '/\(FOREACH\)/s/\(\w\) \([*&]\)/\1\2/' -i `find src -name '*.?pp'`
	sed '$$s@\(.\+\)@\1\n@g' -i `find -name '*.?pp'`

