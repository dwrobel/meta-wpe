# WPE Framework common
HOMEPAGE = "https://github.com/WebPlatformForEmbedded"
SECTION = "wpe"

PV = "3.0+git${SRCPV}"

PACKAGECONFIG ??= ""

S = "${WORKDIR}/git"

inherit cmake pkgconfig

TOOLCHAIN = "gcc"

EXTRA_OECMAKE += "-DCMAKE_BUILD_TYPE=Debug"
EXTRA_OECMAKE += "-DCMAKE_SYSROOT=${STAGING_DIR_HOST}"
