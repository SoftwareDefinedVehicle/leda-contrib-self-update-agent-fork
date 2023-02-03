#!/bin/sh

cd 3rdparty/glib
meson subprojects download
meson setup --wipe -Dwrap_mode=forcefallback --default-library static ../../build_amd64/glib
meson compile -C ../../build_amd64/glib
