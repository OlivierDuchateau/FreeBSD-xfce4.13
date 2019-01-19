# Created by: Thorsten Greiner <thorsten.greiner@web.de>
# $FreeBSD: head/sysutils/xfce4-battery-plugin/Makefile 490257 2019-01-14 14:12:47Z madpilot $

PORTNAME=	xfce4-battery-plugin
PORTVERSION=	1.1.2
PORTREVISION=	1
CATEGORIES=	sysutils xfce
MASTER_SITES=	XFCE/src/panel-plugins/${PORTNAME}/${PORTVERSION:R}
DIST_SUBDIR=	xfce4

MAINTAINER=	xfce@FreeBSD.org
COMMENT=	Battery monitor panel plugin for Xfce4

LICENSE=	GPLv2

ONLY_FOR_ARCHS=	amd64 i386

USES=		alias gettext-tools gmake gnome libtool pkgconfig \
		tar:bzip2 xfce
USE_GNOME=	gtk30 glib20 intltool cairo
USE_XFCE=	panel
USE_LDCONFIG=	yes

SSP_UNSAFE=	yes
GNU_CONFIGURE=	yes
INSTALLS_ICONS=	yes
INSTALL_TARGET=	install-strip

OPTIONS_DEFINE=		NLS
OPTIONS_SUB=		yes

NLS_USES=		gettext-runtime
NLS_CONFIGURE_ENABLE=	nls

.include <bsd.port.mk>
