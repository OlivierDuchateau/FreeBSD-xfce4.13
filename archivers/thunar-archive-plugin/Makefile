# Created by: ports@c0decafe.net <ports@c0decafe.net>
# $FreeBSD: head/archivers/thunar-archive-plugin/Makefile 490953 2019-01-22 14:44:38Z madpilot $

PORTNAME=	thunar-archive-plugin
PORTVERSION=	0.4.0
CATEGORIES=	archivers xfce
MASTER_SITES=	XFCE/thunar-plugins
DIST_SUBDIR=	xfce4

MAINTAINER=	xfce@FreeBSD.org
COMMENT=	Archive plugin for the Thunar File Manager

LICENSE=	GPLv2
LICENSE_FILE=	${WRKSRC}/COPYING

USES=		gettext-tools gmake gnome libtool pkgconfig tar:bzip2 xfce
USE_GNOME=	cairo gtk30 intltool
USE_XFCE=	libexo thunar

GNU_CONFIGURE=	yes
INSTALLS_ICONS=	yes
INSTALL_TARGET=	install-strip

OPTIONS_DEFINE=		NLS
OPTIONS_SUB=		yes

NLS_CONFIGURE_ENABLE=	nls
NLS_USES=		gettext-runtime

.include <bsd.port.mk>
