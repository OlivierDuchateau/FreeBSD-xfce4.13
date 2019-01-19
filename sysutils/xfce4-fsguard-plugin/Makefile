# Created by: Matt Lancereau <matt@rimasec.net>
# $FreeBSD: head/sysutils/xfce4-fsguard-plugin/Makefile 434852 2017-02-26 09:58:48Z olivierd $

PORTNAME=	xfce4-fsguard-plugin
PORTVERSION=	1.1.0
PORTREVISION=	1
CATEGORIES=	sysutils xfce
MASTER_SITES=	XFCE/src/panel-plugins/${PORTNAME}/${PORTVERSION:R}
DIST_SUBDIR=	xfce4

MAINTAINER=	xfce@FreeBSD.org
COMMENT=	Panel plugin which displays free space of mountpoint

# COPYING file is wrong compared to license header
LICENSE=	BSD2CLAUSE

USES=		gettext-tools gmake gnome libtool pkgconfig tar:bzip2 xfce
USE_GNOME=	gtk30 intltool cairo
USE_XFCE=	panel
USE_XORG=	x11

GNU_CONFIGURE=	yes
INSTALLS_ICONS=	yes
INSTALL_TARGET=	install-strip

OPTIONS_DEFINE=		NLS
OPTIONS_SUB=		yes

NLS_USES=		gettext-runtime
NLS_CONFIGURE_ENABLE=	nls

.include <bsd.port.mk>
