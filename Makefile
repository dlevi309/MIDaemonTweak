GO_EASY_ON_ME=1

ARCHS = armv7 arm64 arm64e

include $(THEOS)/makefiles/common.mk

TWEAK_NAME = MIDaemonTweak
MIDaemonTweak_FILES = Tweak.xm
MIDaemonTweak_FRAMEWORKS = CoreFoundation

include $(THEOS_MAKE_PATH)/tweak.mk

after-install::
	install.exec "killall -9 backboardd"