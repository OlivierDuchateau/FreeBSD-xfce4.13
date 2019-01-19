# Created by: Oliver Lehmann <oliver@FreeBSD.org>
# $FreeBSD: head/x11/libxfce4menu/Makefile 456540 2017-12-17 15:35:36Z madpilot $

PORTNAME=	libxfce4menu
PORTVERSION=	4.13.4
CATEGORIES=	x11 xfce
MASTER_SITES=	XFCE/src/xfce/libxfce4ui/${PORTVERSION:R}
DISTNAME=	libxfce4ui-${PORTVERSION}
DIST_SUBDIR=	xfce4

MAINTAINER=	xfce@FreeBSD.org
COMMENT=	Widgets library for the Xfce desktop environment

LICENSE=	GPLv2

LIB_DEPENDS=	libfontconfig.so:x11-fonts/fontconfig \
		libfreetype.so:print/freetype2

#PORTSCOUT=	limit:^4\.12\.

USES=		gettext-tools gmake libtool pathfix pkgconfig \
		tar:bzip2 xfce
USE_GNOME=	cairo glib20 gtk30 intltool intlhack
USE_LDCONFIG=	yes
USE_XFCE=	xfconf
USE_X11=	ice sm x11

GNU_CONFIGURE=	yes
INSTALLS_ICONS=	yes

CONFIGURE_ARGS=	--with-vendor-info=${OPSYS} --without-html-dir

OPTIONS_DEFINE=		GIR GLADE GTK2 NLS STARTUP
OPTIONS_DEFAULT=	GTK2 STARTUP
OPTIONS_SUB=		yes

GIR_DESC=		Use Gobject Introspection

GIR_BUILD_DEPENDS=	vapigen:lang/vala
GIR_USE=		gnome=introspection:build
GIR_CONFIGURE_ON=	--enable-introspection=yes
GIR_CONFIGURE_OFF=	--enable-introspection=no

GLADE_LIB_DEPENDS=	libgladeui-2.so:devel/glade
GLADE_CONFIGURE_ENABLE=	gladeui

GTK2_USE=		gnome=gtk20
GTK2_CONFIGURE_ENABLE=	gtk2

NLS_USES=		gettext-runtime
NLS_CONFIGURE_ENABLE=	nls

STARTUP_DESC=		Startup notification
STARTUP_LIB_DEPENDS=	libstartup-notification-1.so:x11/startup-notification
STARTUP_CONFIGURE_ENABLE=	startup-notification

.include <bsd.port.mk>
