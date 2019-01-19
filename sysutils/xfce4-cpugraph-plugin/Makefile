# Created by: Matt Lancereau <matt@rimasec.net>
# $FreeBSD: head/sysutils/xfce4-cpugraph-plugin/Makefile 393429 2015-08-02 15:03:19Z tijl $

PORTNAME=	xfce4-cpugraph-plugin
PORTVERSION=	1.0.5
PORTREVISION=	5
CATEGORIES=	sysutils xfce
MASTER_SITES=	XFCE/src/panel-plugins/${PORTNAME}/${PORTVERSION:R}
DIST_SUBDIR=	xfce4

MAINTAINER=	xfce@FreeBSD.org
COMMENT=	Graphical representation of the CPU load

LICENSE=	GPLv2

USES=		gettext-tools gmake gnome libtool pkgconfig tar:bzip2 xfce:gtk2

USE_GNOME=	gtk20 intltool intlhack
USE_XFCE=	panel

GNU_CONFIGURE=	yes
INSTALLS_ICONS=	yes
INSTALL_TARGET=	install-strip

OPTIONS_DEFINE= 	NLS
OPTIONS_SUB=		yes

NLS_USES=		gettext-runtime
NLS_CONFIGURE_ENABLE=	nls

.include <bsd.port.mk>
