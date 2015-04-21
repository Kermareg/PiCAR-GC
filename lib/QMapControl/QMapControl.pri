win32 {
LIBS += -L../bin -lqmapcontrol0
#LIBS += -Lbin -lqmapcontrol0
}
else {
LIBS += -L../bin -lqmapcontrol
#LIBS += -Lbin -lqmapcontrol
}
INCLUDEPATH += ../../src/

QT += network
