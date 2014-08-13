require binutils-microblaze-${PV}.inc

SRC_URI_append += "file://binutils-uninitialised-warning.patch"
