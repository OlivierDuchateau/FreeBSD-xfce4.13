# Created by: Olivier Duchateau <duchateau.olivier@gmail.com>
# $FreeBSD: head/x11-fm/thunar-vfs/Makefile 490953 2019-01-22 14:44:38Z madpilot $

PORTNAME=	thunar-vfs
PORTVERSION=	1.2.0
PORTREVISION=	13
CATEGORIES=	x11-fm xfce
MASTER_SITES=	XFCE/archive
DIST_SUBDIR=	xfce4

MAINTAINER=	xfce@FreeBSD.org
COMMENT=	The virtual filesystem for Thunar

LICENSE=	GPLv2
LICENSE_FILE=	${WRKSRC}/COPYING

LIB_DEPENDS=	libpng.so:graphics/png \
		libfontconfig.so:x11-fonts/fontconfig \
		libfreetype.so:print/freetype2 \
		libgamin-1.so:devel/gamin \
		libdbus-1.so:devel/dbus

USES=		gettext-tools gmake gnome jpeg libtool pathfix \
		perl5 pkgconfig tar:bzip2 xfce:gtk2
USE_GNOME=	cairo gdkpixbuf2 glib20 gtk20 intltool
USE_XFCE=	libexo
USE_XORG=	ice x11 sm
USE_LDCONFIG=	yes

GNU_CONFIGURE=	yes
CONFIGURE_ARGS=	--disable-debug --without-html-dir
INSTALL_TARGET=	install-strip

OPTIONS_DEFINE=		NLS HAL DBUS STARTUP GCONF
OPTIONS_DEFAULT=	HAL DBUS STARTUP
OPTIONS_SUB=		yes

STARTUP_DESC=		Startup notification

DBUS_CONFIGURE_ENABLE=	dbus
DBUS_LIB_DEPENDS=	libdbus-glib-1.so:devel/dbus-glib

GCONF_CONFIGURE_ENABLE=	gnome-thumbnailers
GCONF_USE=		gnome=gconf2

HAL_CONFIGURE_OFF=	--with-volume-manager=freebsd
HAL_CONFIGURE_WITH=	volume-manager=hal
HAL_LIB_DEPENDS=	libhal.so:sysutils/hal

NLS_CONFIGURE_ENABLE=	nls
NLS_USES=		gettext-runtime

STARTUP_CONFIGURE_ENABLE=	startup-notification
STARTUP_LIB_DEPENDS=	libstartup-notification-1.so:x11/startup-notification

.include <bsd.port.mk>
