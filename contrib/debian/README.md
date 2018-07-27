
Debian
====================
This directory contains files used to package managemynoded/managemynode-qt
for Debian-based Linux systems. If you compile managemynoded/managemynode-qt yourself, there are some useful files here.

## managemynode: URI support ##


managemynode-qt.desktop  (Gnome / Open Desktop)
To install:

	sudo desktop-file-install managemynode-qt.desktop
	sudo update-desktop-database

If you build yourself, you will either need to modify the paths in
the .desktop file or copy or symlink your managemynodeqt binary to `/usr/bin`
and the `../../share/pixmaps/managemynode128.png` to `/usr/share/pixmaps`

managemynode-qt.protocol (KDE)

