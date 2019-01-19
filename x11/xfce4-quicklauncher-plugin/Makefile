# Created by: Martin Wilke (miwi@FreeBSD.org)
# $FreeBSD: head/x11/xfce4-quicklauncher-plugin/Makefile 384919 2015-04-28 17:01:46Z bdrewery $

PORTNAME=	xfce4-quicklauncher-plugin
PORTVERSION=	1.9.4
PORTREVISION=	18
CATEGORIES=	x11 xfce
MASTER_SITES=	XFCE/src/panel-plugins/${PORTNAME}/${PORTVERSION:R}
DIST_SUBDIR=	xfce4

MAINTAINER=	xfce@FreeBSD.org
COMMENT=	Quicklauncher plugin for Xfce

LICENSE=	GPLv2

USES=		gettext gmake gnome libtool pkgconfig tar:bzip2 xfce:gtk2
USE_GNOME=	gtk20 intltool intlhack
USE_XFCE=	libgui panel

SSP_UNSAFE=	yes
GNU_CONFIGURE=	yes

.include <bsd.port.mk>
