# Created by: ports@c0decafe.net <ports@c0decafe.net>
# $FreeBSD: head/archivers/thunar-archive-plugin/Makefile 384919 2015-04-28 17:01:46Z bdrewery $

PORTNAME=	thunar-archive-plugin
PORTVERSION=	0.4.0
CATEGORIES=	archivers xfce
MASTER_SITES=	XFCE/src/thunar-plugins/${PORTNAME}/${PORTVERSION:R}
DIST_SUBDIR=	xfce4

MAINTAINER=	xfce@FreeBSD.org
COMMENT=	Archive plugin for the Thunar File Manager

USES=		gettext-tools gmake gnome libtool pkgconfig tar:bzip2 xfce
USE_XFCE=	libexo thunar
USE_GNOME=	cairo gtk30 intltool

GNU_CONFIGURE=	yes
INSTALLS_ICONS=	yes
INSTALL_TARGET=	install-strip

OPTIONS_DEFINE=	NLS
OPTIONS_SUB=	yes

NLS_USES=		gettext-runtime
NLS_CONFIGURE_ENABLE=	nls

.include <bsd.port.mk>
