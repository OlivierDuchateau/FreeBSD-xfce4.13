# Created by: Thorsten Greiner <thorsten.greiner@web.de>
# $FreeBSD: head/deskutils/xfce4-notes-plugin/Makefile 412346 2016-04-01 14:00:51Z mat $

PORTNAME=	xfce4-notes-plugin
PORTVERSION=	1.8.1
PORTREVISION=	1
CATEGORIES=	deskutils xfce
MASTER_SITES=	XFCE/src/panel-plugins/${PORTNAME}/${PORTVERSION:R}
DIST_SUBDIR=	xfce4

MAINTAINER=	xfce@FreeBSD.org
COMMENT=	Notes plugin for the Xfce panel

LICENSE=	GPLv2

LIB_DEPENDS=	libunique-1.0.so:x11-toolkits/unique

USES=		gettext-tools gmake gnome libtool pkgconfig \
		tar:bzip2 xfce:gtk2

USE_GNOME=	glib20 gtk20 intltool intlhack
USE_XFCE=	panel
USE_XORG=	x11

INSTALLS_ICONS=	yes
GNU_CONFIGURE=	yes
INSTALL_TARGET=	install-strip

OPTIONS_DEFINE=	NLS
OPTIONS_SUB=	yes

NLS_USES=		gettext-runtime
NLS_CONFIGURE_ENABLE=	nls

.include <bsd.port.mk>
