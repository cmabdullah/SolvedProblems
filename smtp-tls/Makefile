APPNAME = smtp-tls
CXXFLAGS =	-O2 -g -Wall -fmessage-length=0

OBJS =		${APPNAME}.o

LIBS = -lcurl
ifeq "$(APPNAME)" "SpaceShip"
LDFLAGS =  -L/usr/bin -lcurl
CFLAGS += -D__APPLE__
endif  
$(APPNAME):	$(OBJS)
	g++ -o $(APPNAME) $(OBJS) $(LIBS) $(LDFLAGS) 

all:	$(APPNAME)

clean:
	rm -f $(OBJS) $(APPNAME)
