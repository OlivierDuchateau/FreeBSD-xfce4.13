# Created by: Olivier Duchateau <duchateau.olivier@gmail.com>
# $FreeBSD: head/sysutils/xfce4-mount-plugin/Makefile 504557 2019-06-19 16:14:27Z madpilot $

PORTNAME=	xfce4-mount-plugin
PORTVERSION=	1.1.3
PORTREVISION=	1
CATEGORIES=	sysutils xfce
MASTER_SITES=	XFCE/panel-plugins
DIST_SUBDIR=	xfce4

MAINTAINER=	xfce@FreeBSD.org
COMMENT=	Mount and umount utility for the Xfce4 panel

LICENSE=	GPLv2

USES=		gettext-tools gmake gnome libtool pkgconfig tar:bzip2 xfce
USE_GNOME=	cairo gtk30 intltool
USE_LDCONFIG=	yes
USE_XFCE=	panel

GNU_CONFIGURE=	yes
INSTALLS_ICONS=	yes
INSTALL_TARGET=	install-strip

OPTIONS_DEFINE=		NLS
OPTIONS_SUB=		yes

NLS_CONFIGURE_ENABLE=	nls
NLS_USES=		gettext-runtime

.include <bsd.port.mk>
