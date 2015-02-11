prefix ?= /usr/local
install_location = $(prefix)/include

install:
	cp fcunit.h $(install_location)

.PHONY: install
