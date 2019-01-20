# Created by: Martin Wilke (miwi@FreeBSD.org)
# $FreeBSD: head/x11-clocks/xfce4-timer-out-plugin/Makefile 393429 2015-08-02 15:03:19Z tijl $

PORTNAME=	xfce4-time-out-plugin
PORTVERSION=	1.0.2
PORTREVISION=	2
CATEGORIES=	x11-clocks xfce
MASTER_SITES=	XFCE/src/panel-plugins/${PORTNAME}/${PORTVERSION:R}
DIST_SUBDIR=	xfce4

MAINTAINER=	xfce@FreeBSD.org
COMMENT=	Timer out plugin for Xfce

LICENSE=	GPLv2

LIB_DEPENDS=	libfontconfig.so:x11-fonts/fontconfig \
		libfreetype.so:print/freetype2

USES=		gettext-tools gmake gnome libtool pkgconfig tar:bzip2 xfce:gtk2
USE_GNOME=	cairo gtk20 intltool intlhack
USE_XFCE=	panel
USE_XORG=	x11

GNU_CONFIGURE=	yes
INSTALLS_ICONS=	yes
INSTALL_TARGET=	install-strip

OPTIONS_DEFINE=		NLS
OPTIONS_SUB=		yes

NLS_USES=		gettext-runtime
NLS_CONFIGURE_ENABLE=	nls

.include <bsd.port.mk>
