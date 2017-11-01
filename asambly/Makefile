CXXFLAGS =	-O2 -g -Wall -fmessage-length=0

TARGET =	asambly
OBJS =		$(TARGET).o
NASMFLAGS = -f macho64 -o
LDFLAGS =  -L/usr/local/bin/gdb
$(TARGET):	$(OBJS)
	nasm $(NASMFLAGS) $(OBJS) $(TARGET).asm $(LDFLAGS)
	ld -o $(TARGET) $(OBJS)
all:
	$(TARGET)
clean:
	rm -f $(OBJS) $(TARGET)