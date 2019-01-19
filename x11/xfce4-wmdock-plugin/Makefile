# Created by: Martin Wilke <miwi@FreeBSD.org>
# $FreeBSD: head/x11/xfce4-wmdock-plugin/Makefile 489673 2019-01-08 11:54:12Z tobik $

PORTNAME=	xfce4-wmdock-plugin
PORTVERSION=	0.6.0
PORTREVISION=	3
CATEGORIES=	x11 xfce
MASTER_SITES=	XFCE/src/panel-plugins/xfce4-wmdock-plugin/0.6
DIST_SUBDIR=	xfce4

MAINTAINER=	xfce@FreeBSD.org
COMMENT=	WMdock plugin for Xfce

USES=		gettext-tools gmake gnome libtool pkgconfig tar:bzip2 xfce:gtk2
USE_GNOME=	gtk20 intltool intlhack libwnck
USE_XFCE=	libgui panel
USE_XORG=	x11

GNU_CONFIGURE=	yes
INSTALLS_ICONS=	yes

OPTIONS_DEFINE=		NLS
OPTIONS_SUB=		yes

NLS_USES=		gettext-runtime
NLS_CONFIGURE_ENABLE=	nls

.include <bsd.port.mk>
