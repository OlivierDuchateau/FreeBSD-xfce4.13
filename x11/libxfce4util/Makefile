# Created by: James Earl <jdearl@telus.net>
# $FreeBSD: head/x11/libxfce4util/Makefile 384919 2015-04-28 17:01:46Z bdrewery $

PORTNAME=	libxfce4util
PORTVERSION=	4.13.2
CATEGORIES=	x11 xfce
MASTER_SITES=	XFCE/src/xfce/${PORTNAME}/${PORTVERSION:R}
DIST_SUBDIR=	xfce4

MAINTAINER=	xfce@FreeBSD.org
COMMENT=	Extension library for the Xfce desktop environment

LICENSE=	GPLv2

USES=		gettext-tools gmake gnome libtool pathfix perl5 pkgconfig \
		tar:bzip2 xfce
USE_GNOME=	glib20 intltool intlhack
USE_LDCONFIG=	yes

GNU_CONFIGURE=	yes
INSTALL_TARGET=	install-strip
CONFIGURE_ARGS=	--without-html-dir

OPTIONS_DEFINE=		GIR NLS
OPTIONS_SUB=		yes

GIR_DESC=		Use Gobject Introspection

GIR_BUILD_DEPENDS=	vapigen:lang/vala
GIR_USE=		gnome=introspection:build
GIR_CONFIGURE_ON=       --enable-introspection=yes
GIR_CONFIGURE_OFF=      --enable-introspection=no

NLS_USES=		gettext-runtime
NLS_CONFIGURE_ENABLE=	nls

.include <bsd.port.mk>
