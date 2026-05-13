TARGET = ex8_11_nim
SRC_DIR = src
NIMC = nim
NIMFLAGS = c -d:release --out:./src/a.out

all: $(TARGET)

$(TARGET): $(SRC_DIR)/$(TARGET).nim
	$(NIMC) $(NIMFLAGS) $<

debug: $(SRC_DIR)/$(TARGET).nim
	$(NIMC) c -d:debug --out:./src/a.out $<

clean:
	rm -f $(TARGET)
	rm -rf nimcache
