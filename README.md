# Use [skipDeviceFamilyCheck](https://github.com/dlevi309/skipDeviceFamilyCheck) instead
This code is unnecessarily doing a lot, skipDeviceFamilyCheck is cleaner.


# MIDaemonTweak (MIDaemonConfiguration)
Allows the installation of iPad-only apps on the iPhone (requires that you sync or airdrop the applications from your computer with a tool like iMazing, Apple Configurator, etc)


Note; The classes used to create this tweak were loaded from the MIDaemonConfiguration.h file within /usr/libexec/installd, and as far as I can tell, this was added initially as a means to configure internal features that relate to mobile installation, and was most likely just forgotten about. For anyone interested, some of the other values were as follows;

1. _codeSigningEnforcementIsDisabled
2. _isInternalImageType
3. _skipThinningCheck
4. _allowPatchWithoutSinf
