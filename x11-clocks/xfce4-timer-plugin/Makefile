# Created by: Martin Wilke (miwi@FreeBSD.org)
# $FreeBSD: head/x11-clocks/xfce4-timer-plugin/Makefile 460005 2018-01-26 15:03:10Z madpilot $

PORTNAME=	xfce4-timer-plugin
PORTVERSION=	1.7.0
PORTREVISION=	2
CATEGORIES=	x11-clocks xfce
MASTER_SITES=	XFCE/src/panel-plugins/${PORTNAME}/${PORTVERSION:R}
DIST_SUBDIR=	xfce4

MAINTAINER=	xfce@FreeBSD.org
COMMENT=	Timer plugin for Xfce

LICENSE=	GPLv2

USES=		gettext-tools gmake gnome libtool pkgconfig tar:bzip2 xfce
USE_GNOME=	cairo gtk30 intltool
USE_XFCE=	panel

INSTALLS_ICONS=	yes
INSTALL_TARGET=	install-strip
GNU_CONFIGURE=	yes

OPTIONS_DEFINE=		NLS
OPTIONS_SUB=		yes

NLS_USES=		gettext-runtime
NLS_CONFIGURE_ENABLE=	nls

.include <bsd.port.mk>
