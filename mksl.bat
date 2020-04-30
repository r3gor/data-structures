@echo off
ECHO creating lib/static/sdatastructures.lib ...
ar rcs lib/static/sdatastructures.lib build/iterator.o build/linked_list.o
ECHO lib/static/sdatastructures.lib created, contains:
ar -t lib/static/sdatastructures.lib