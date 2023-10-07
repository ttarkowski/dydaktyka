%.svg: %.dot
	dot -Tsvg $< > $@

.PHONY: clean
clean:
	@ rm -rfv `find . -type f -name "*~"`
