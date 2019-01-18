# Created by: Martin Wilke (miwi@FreeBSD.org)
# $FreeBSD: head/audio/xfmpc/Makefile 417862 2016-07-01 04:36:36Z olivierd $

PORTNAME=	xfmpc
PORTVERSION=	0.2.3
PORTREVISION=	1
CATEGORIES=	audio xfce
MASTER_SITES=	XFCE/src/apps/${PORTNAME}/${PORTVERSION:R}
DIST_SUBDIR=	xfce4

MAINTAINER=	xfce@FreeBSD.org
COMMENT=	Graphical MPD client focusing on low footprint

LICENSE=	GPLv2

BUILD_DEPENDS=	valac:lang/vala
LIB_DEPENDS=	libmpd.so:audio/libmpd

USES=		gettext-tools gmake gnome pkgconfig tar:bzip2 xfce:gtk2
USE_GNOME=	gtk20 intltool intlhack
USE_XFCE=	libmenu

INSTALLS_ICONS=	yes
GNU_CONFIGURE=	yes
INSTALL_TARGET=	install-strip

OPTIONS_DEFINE=	NLS
OPTIONS_SUB=	yes

NLS_USES=		gettext-runtime
NLS_CONFIGURE_ENABLE=	nls

.include <bsd.port.mk>
