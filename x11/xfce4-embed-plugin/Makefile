# Created by: Olivier Duchateau
# $FreeBSD: head/x11/xfce4-embed-plugin/Makefile 504557 2019-06-19 16:14:27Z madpilot $

PORTNAME=	xfce4-embed-plugin
PORTVERSION=	1.6.0
PORTREVISION=	2
CATEGORIES=	x11 xfce
MASTER_SITES=	XFCE/panel-plugins
DIST_SUBDIR=	xfce4

MAINTAINER=	xfce@FreeBSD.org
COMMENT=	Embed arbitrary windows into the Xfce panel

LICENSE=	GPLv2

LIB_DEPENDS=	libfontconfig.so:x11-fonts/fontconfig \
		libfreetype.so:print/freetype2

USES=		gettext-tools gmake gnome libtool pkgconfig tar:bzip2 xfce:gtk2
USE_GNOME=	cairo gdkpixbuf2 glib20 gtk20 intltool
USE_XFCE=	panel
USE_XORG=	ice sm x11

GNU_CONFIGURE=	yes
INSTALL_TARGET=	install-strip

OPTIONS_DEFINE=		NLS
OPTIONS_SUB=		yes

NLS_CONFIGURE_ENABLE=	nls
NLS_USES=		gettext-runtime

.include <bsd.port.mk>
