# $FreeBSD: head/sysutils/xfce4-places-plugin/Makefile 284387 2011-10-26 20:27:27Z rene $

PORTNAME=	xfce4-places-plugin
PORTVERSION=	1.8.0
CATEGORIES=	sysutils xfce
MASTER_SITES=	XFCE/src/panel-plugins/${PORTNAME}/${PORTVERSION:R}
DIST_SUBDIR=	xfce4

MAINTAINER=	xfce@FreeBSD.org
COMMENT=	File browser launcher for Xfce4 panel plugin

LICENSE=	GPLv2
LICENSE_FILE=	${WRKSRC}/COPYING

LIB_DEPENDS=	libnotify.so:devel/libnotify \
		libdbus-glib-1.so:devel/dbus-glib \
		libdbus-1.so:devel/dbus

USES=		gettext-tools gmake gnome libtool pkgconfig \
		tar:bzip2 xfce
USE_GNOME=	cairo gdkpixbuf2 gtk30 intltool
USE_XFCE=	panel thunar
USE_XORG=	ice sm x11

GNU_CONFIGURE=	yes
INSTALL_TARGET=	install-strip

OPTIONS_DEFINE=	NLS
OPTIONS_SUB=	yes

NLS_USES=	gettext-runtime

# exo_url_show function is still missing
#post-patch:
#	@${REINPLACE_CMD} -e 's|--libs "libxfce4panel-1.0"|& "libxfcegui4-1.0"|g; \
#		s|--cflags "libxfce4panel-1.0"|& "libxfcegui4-1.0"|g; \
#		s|exo-0.3|exo-1|g' \
#		${WRKSRC}/configure

.include <bsd.port.mk>
