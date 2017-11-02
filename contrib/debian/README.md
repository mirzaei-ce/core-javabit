
Debian
====================
This directory contains files used to package javabitd/javabit-qt
for Debian-based Linux systems. If you compile javabitd/javabit-qt yourself, there are some useful files here.

## javabit: URI support ##


javabit-qt.desktop  (Gnome / Open Desktop)
To install:

	sudo desktop-file-install javabit-qt.desktop
	sudo update-desktop-database

If you build yourself, you will either need to modify the paths in
the .desktop file or copy or symlink your javabit-qt binary to `/usr/bin`
and the `../../share/pixmaps/javabit128.png` to `/usr/share/pixmaps`

javabit-qt.protocol (KDE)

