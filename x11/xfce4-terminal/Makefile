# Created by: Matt Lancereau
# $FreeBSD: head/x11/xfce4-terminal/Makefile 473049 2018-06-22 17:18:45Z danilo $

PORTNAME=	xfce4-terminal
PORTVERSION=	0.8.7.4
PORTREVISION=	2
CATEGORIES=	x11 xfce
MASTER_SITES=	XFCE/src/apps/${PORTNAME}/${PORTVERSION:R:R}
DIST_SUBDIR=	xfce4

MAINTAINER=	xfce@FreeBSD.org
COMMENT=	Terminal emulator for the X windowing system

LICENSE=	GPLv2
LICENSE_FILE=	${WRKSRC}/COPYING

LIB_DEPENDS=	libdbus-glib-1.so:devel/dbus-glib

USES=		gettext gmake gnome pkgconfig tar:bzip2 xfce
USE_GNOME=	cairo gdkpixbuf2 glib20 gtk30 intltool libxml2 vte3
USE_XFCE=	libmenu
USE_XORG=	x11

GNU_CONFIGURE=	yes
INSTALL_TARGET=	install-strip
SUB_FILES=	pkg-message
CONFIGURE_ARGS=	--without-gnome-default-appsdir

OPTIONS_DEFINE=		NLS
OPTIONS_SUB=		yes

NLS_USES=		gettext-runtime
NLS_CONFIGURE_ENABLE=	nls

.include <bsd.port.mk>
