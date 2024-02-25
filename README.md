nordmenu
====================
nordmenu is my fork of dmenu by suckless.

dmenu is an efficient dynamic menu for X.


Requirements
------------
In order to build dmenu you need the Xlib header files.


Installation
------------
### AUR
nordmenu is available in the AUR

```bash
$ paru -S nordmenu
```

### Manual
Edit config.mk to match your local setup (dmenu is installed into
the /usr/local namespace by default).

Afterwards enter the following command to build and install dmenu
(if necessary as root):

    make clean install


Running dmenu
-------------
See the man page for details.

Patches
-------
- nord colours
- border
- case insensitive
- width
- line height
- centered
- number of results
- grid + navigation
- fuzzy search + highlight
