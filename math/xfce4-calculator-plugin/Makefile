# Created by: Olivier Duchateau
# $FreeBSD: madpilot-test/math/xfce4-calculator-plugin/Makefile 9131 2019-02-24 22:02:51Z mad $

PORTNAME=	xfce4-calculator-plugin
PORTVERSION=	0.7.0
PORTREEVISION=	1
CATEGORIES=	math xfce
MASTER_SITES=	XFCE/src/panel-plugins/${PORTNAME}/${PORTVERSION:R}
DIST_SUBDIR=	xfce4

MAINTAINER=	xfce@FreeBSD.org
COMMENT=	Simple calculator for the Xfce panel

LICENSE=	GPLv2

LIB_DEPENDS=	libfontconfig.so:x11-fonts/fontconfig \
		libfreetype.so:print/freetype2

USES=		gettext-tools gmake gnome libtool pkgconfig tar:bz2 \
		xfce
USE_GNOME=	cairo gtk30 intltool
USE_XFCE=	panel
USE_XORG=	x11

GNU_CONFIGURE=	yes
INSTALLS_ICONS=	yes
INSTALL_TARGET=	install-strip

OPTIONS_DEFINE=	NLS
OPTIONS_SUB=	yes

NLS_CONFIGURE_ENABLE=	nls
NLS_USES=		gettext-runtime

.include <bsd.port.mk>
