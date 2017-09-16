
Debian
====================
This directory contains files used to package flurbod/flurbo-qt
for Debian-based Linux systems. If you compile flurbod/flurbo-qt yourself, there are some useful files here.

## flurbo: URI support ##


flurbo-qt.desktop  (Gnome / Open Desktop)
To install:

	sudo desktop-file-install flurbo-qt.desktop
	sudo update-desktop-database

If you build yourself, you will either need to modify the paths in
the .desktop file or copy or symlink your flurbo-qt binary to `/usr/bin`
and the `../../share/pixmaps/flurbo128.png` to `/usr/share/pixmaps`

flurbo-qt.protocol (KDE)

