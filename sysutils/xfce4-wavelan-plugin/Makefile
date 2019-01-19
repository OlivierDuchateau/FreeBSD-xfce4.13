# Created by: Manuel Rabade Garica <mig@mig-29.net>
# $FreeBSD: head/sysutils/xfce4-wavelan-plugin/Makefile 455225 2017-11-30 20:36:35Z madpilot $

PORTNAME=	xfce4-wavelan-plugin
PORTVERSION=	0.6.0
PORTREVISION=	2
CATEGORIES=	sysutils xfce
MASTER_SITES=	XFCE/src/panel-plugins/${PORTNAME}/${PORTVERSION:R}
DIST_SUBDIR=	xfce4

MAINTAINER=	xfce@FreeBSD.org
COMMENT=	Displays various information about a WaveLAN device

LICENSE=	BSD3CLAUSE

USES=		gettext-tools gmake gnome libtool pkgconfig tar:bzip2 xfce
USE_GNOME=	cairo gdkpixbuf2 glib20 gtk30 intltool
USE_XFCE=	panel

GNU_CONFIGURE=	yes
INSTALL_TARGET=	install-strip

OPTIONS_DEFINE=		NLS
OPTIONS_SUB=		yes

NLS_USES=		gettext-runtime
NLS_CONFIGURE_ENABLE=	nls

.include <bsd.port.mk>
