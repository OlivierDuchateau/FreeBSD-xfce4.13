# Created by: Martin Wilke <miwi@FreeBSD.org>
# $FreeBSD: head/graphics/ristretto/Makefile 508480 2019-08-09 20:43:10Z madpilot $

PORTNAME=	ristretto
PORTVERSION=	0.10.0
PORTREVISION=	1
CATEGORIES=	graphics xfce
MASTER_SITES=	XFCE/apps
DIST_SUBDIR=	xfce4

MAINTAINER=	xfce@FreeBSD.org
COMMENT=	Image viewer with Xfce integration

LICENSE=	GPLv2
LICENSE_FILE=	${WRKSRC}/COPYING

LIB_DEPENDS=	libexif.so:graphics/libexif

USES=		desktop-file-utils gettext-tools gmake gnome pkgconfig \
		tar:bzip2 xfce
USE_GNOME=	cairo gtk30 glib20 intltool
USE_XFCE=	libmenu xfconf
USE_XORG=	ice sm x11

GNU_CONFIGURE=	yes
INSTALLS_ICONS=	yes

OPTIONS_DEFINE=		NLS
OPTIONS_SUB=		yes

NLS_USES=		gettext-runtime
NLS_CONFIGURE_ENABLE=   nls

.include <bsd.port.mk>
