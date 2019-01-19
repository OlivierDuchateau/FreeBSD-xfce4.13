# Created by: Olivier Duchateau
# $FreeBSD: head/x11/xfce4-embed-plugin/Makefile 392164 2015-07-15 16:02:07Z olivierd $

PORTNAME=	xfce4-embed-plugin
PORTVERSION=	1.6.0
PORTREVISION=	1
CATEGORIES=	x11 xfce
MASTER_SITES=	XFCE/src/panel-plugins/${PORTNAME}/${PORTVERSION:R}
DIST_SUBDIR=	xfce4

MAINTAINER=	xfce@FreeBSD.org
COMMENT=	Embed arbitrary windows into the Xfce panel

LICENSE=	GPLv2

USES=		gettext-tools gmake gnome libtool pkgconfig tar:bzip2 xfce:gtk2
USE_XORG=	x11
USE_GNOME=	glib20 gtk20 intltool intlhack
USE_XFCE=	panel

GNU_CONFIGURE=	yes
INSTALL_TARGET=	install-strip

OPTIONS_DEFINE=	NLS
OPTIONS_SUB=	yes

NLS_USES=		gettext-runtime
NLS_CONFIGURE_ENABLE=	nls

.include <bsd.port.mk>
