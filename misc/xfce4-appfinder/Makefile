# Created by: Oliver Lehmann <oliver@FreeBSD.org>
# $FreeBSD: head/misc/xfce4-appfinder/Makefile 412348 2016-04-01 14:17:44Z mat $

PORTNAME=	xfce4-appfinder
PORTVERSION=	4.13.2
CATEGORIES=	misc xfce
MASTER_SITES=	XFCE/src/xfce/${PORTNAME}/${PORTVERSION:R}
DIST_SUBDIR=	xfce4

MAINTAINER=	xfce@FreeBSD.org
COMMENT=	Application launcher and finder

LICENSE=	GPLv2

LIB_DEPENDS=	libdbus-glib-1.so:devel/dbus-glib

USES=		gettext-tools gmake gnome pkgconfig tar:bzip2 xfce
USE_GNOME=	cairo glib20 gdkpixbuf2 gtk30 intltool intlhack
USE_XFCE=	garcon

GNU_CONFIGURE=	yes

OPTIONS_DEFINE=	NLS
OPTIONS_SUB=	yes

NLS_USES=	gettext-runtime
NLS_CONFIGURE_ENABLE=	nls

post-patch:
	${REINPLACE_CMD} -e 's|=gtk-find|=system-search|' \
		${WRKSRC}/data/xfce4-appfinder.desktop.in
	${REINPLACE_CMD} -e 's|=gtk-execute|=system-run|' \
		${WRKSRC}/data/xfce4-run.desktop.in

.include <bsd.port.mk>
