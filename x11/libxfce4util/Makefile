# Created by: James Earl <jdearl@telus.net>
# $FreeBSD: head/x11/libxfce4util/Makefile 490953 2019-01-22 14:44:38Z madpilot $

PORTNAME=	libxfce4util
PORTVERSION=	4.14.0
CATEGORIES=	x11 xfce
MASTER_SITES=	XFCE
DIST_SUBDIR=	xfce4

MAINTAINER=	xfce@FreeBSD.org
COMMENT=	Extension library for the Xfce desktop environment

LICENSE=	GPLv2

USES=		gettext-tools gmake gnome libtool pathfix perl5 pkgconfig \
		tar:bzip2 xfce
USE_GNOME=	glib20 intltool
USE_LDCONFIG=	yes

GNU_CONFIGURE=	yes
INSTALL_TARGET=	install-strip
CONFIGURE_ARGS=	--without-html-dir

PORTSCOUT=	limitw:1,even

OPTIONS_DEFINE=		GIR NLS
OPTIONS_SUB=		yes

GIR_DESC=		Use Gobject Introspection

GIR_BUILD_DEPENDS=	vapigen:lang/vala
GIR_USE=		gnome=introspection:build
GIR_CONFIGURE_ON=       --enable-introspection=yes
GIR_CONFIGURE_OFF=      --enable-introspection=no

NLS_CONFIGURE_ENABLE=	nls
NLS_USES=		gettext-runtime

.include <bsd.port.mk>
