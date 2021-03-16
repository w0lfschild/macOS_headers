# macOS Headers

This repository is a class dump of *most* Apple Applications and Frameworks on macOS. This could be useful to someone for learning/reversing a program or writing a [MacForge](https://github.com/w0lfschild/MacForge) plugin. This can also be used to check what has been updated between macOS releases.

Included in this repository are dumps of binaries found in:

```
/Applications
/Applications/Utilities

/System/Applications
/System/Applications/Utilities

/System/Library/Frameworks
/System/Library/PrivateFrameworks
/System/Library/CoreServices
/System/Library/CoreServices/Applications

/System/iOSSupport/System/Library/Frameworks
/System/iOSSupport/System/Library/PrivateFrameworks
```

The rundown of each folder is as follows:
- The log folder contains: Log files with a list of all items that had a different build number in that build.
- The macOS folder contains: All the header dumps organized by folder
- The tools folder contains: Bash scripts used to automate quickly dumping the system.
