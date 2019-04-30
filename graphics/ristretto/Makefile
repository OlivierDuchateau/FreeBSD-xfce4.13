# Created by: Martin Wilke <miwi@FreeBSD.org>
# $FreeBSD: head/graphics/ristretto/Makefile 498379 2019-04-08 15:30:20Z madpilot $

PORTNAME=	ristretto
PORTVERSION=	0.8.4
CATEGORIES=	graphics xfce
MASTER_SITES=	XFCE/src/apps/${PORTNAME}/${PORTVERSION:R}
DIST_SUBDIR=	xfce4

MAINTAINER=	xfce@FreeBSD.org
COMMENT=	Image viewer with Xfce integration

LICENSE=	GPLv2
LICENSE_FILE=	${WRKSRC}/COPYING

LIB_DEPENDS=	libexif.so:graphics/libexif \
		libdbus-glib-1.so:devel/dbus-glib \
		libdbus-1.so:devel/dbus \
		libfontconfig.so:x11-fonts/fontconfig \
		libfreetype.so:print/freetype2

USES=		desktop-file-utils gettext-tools gmake gnome pkgconfig \
		tar:bzip2 xfce:gtk2
USE_GNOME=	cairo gtk20 glib20 intltool
USE_XFCE=	libmenu
USE_XORG=	ice sm x11

GNU_CONFIGURE=	yes
INSTALLS_ICONS=	yes

OPTIONS_DEFINE=		NLS
OPTIONS_SUB=		yes

NLS_USES=		gettext-runtime
NLS_CONFIGURE_ENABLE=   nls

.include <bsd.port.mk>
