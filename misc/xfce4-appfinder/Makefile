# Created by: Oliver Lehmann <oliver@FreeBSD.org>
# $FreeBSD: head/misc/xfce4-appfinder/Makefile 490953 2019-01-22 14:44:38Z madpilot $

PORTNAME=	xfce4-appfinder
PORTVERSION=	4.13.3
CATEGORIES=	misc xfce
MASTER_SITES=	XFCE
DIST_SUBDIR=	xfce4

MAINTAINER=	xfce@FreeBSD.org
COMMENT=	Application launcher and finder

LICENSE=	GPLv2

LIB_DEPENDS=	libdbus-glib-1.so:devel/dbus-glib \
		libdbus-1.so:devel/dbus

USES=		gettext-tools gmake gnome pkgconfig tar:bzip2 xfce
USE_GNOME=	cairo gdkpixbuf2 glib20 gtk30 intltool
USE_XFCE=	garcon

GNU_CONFIGURE=	yes

OPTIONS_DEFINE=		NLS
OPTIONS_SUB=		yes

NLS_CONFIGURE_ENABLE=	nls
NLS_USES=		gettext-runtime

post-patch:
	${REINPLACE_CMD} -e 's|=gtk-find|=system-search|' \
		${WRKSRC}/data/xfce4-appfinder.desktop.in
	${REINPLACE_CMD} -e 's|=gtk-execute|=system-run|' \
		${WRKSRC}/data/xfce4-run.desktop.in

.include <bsd.port.mk>
