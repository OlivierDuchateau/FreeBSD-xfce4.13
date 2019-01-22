# Created by: Oliver Lehmann <oliver@FreeBSD.org>
# $FreeBSD: head/x11/libxfce4menu/Makefile 490953 2019-01-22 14:44:38Z madpilot $

PORTNAME=	libxfce4menu
PORTVERSION=	4.13.4
CATEGORIES=	x11 xfce
MASTER_SITES=	XFCE/src/xfce/libxfce4ui/${PORTVERSION:R}
DISTNAME=	libxfce4ui-${PORTVERSION}
DIST_SUBDIR=	xfce4

MAINTAINER=	xfce@FreeBSD.org
COMMENT=	Widgets library for the Xfce desktop environment

LICENSE=	GPLv2

USES=		gettext-tools gmake gnome libtool pathfix pkgconfig \
		tar:bzip2 xfce
USE_GNOME=	cairo glib20 gtk30 intltool
USE_LDCONFIG=	yes
USE_XFCE=	xfconf
USE_XORG=	ice sm x11

GNU_CONFIGURE=	yes
INSTALLS_ICONS=	yes
CONFIGURE_ARGS=	--with-vendor-info=${OPSYS} --without-html-dir
INSTALL_TARGET=	install-strip

PORTSCOUT=	limit:^4\.12\.

OPTIONS_DEFINE=		GIR GLADE GTK2 NLS STARTUP
OPTIONS_DEFAULT=	GTK2 STARTUP
OPTIONS_SUB=		yes

GIR_DESC=		Use Gobject Introspection

GIR_BUILD_DEPENDS=	vapigen:lang/vala
GIR_USE=		gnome=introspection:build
GIR_CONFIGURE_ON=	--enable-introspection=yes
GIR_CONFIGURE_OFF=	--enable-introspection=no

GLADE_CONFIGURE_ENABLE=	gladeui
GLADE_LIB_DEPENDS=	libgladeui-2.so:devel/glade

GTK2_CONFIGURE_ENABLE=	gtk2
GTK2_USE=		gnome=gtk20

NLS_CONFIGURE_ENABLE=	nls
NLS_USES=		gettext-runtime

STARTUP_CONFIGURE_ENABLE=	startup-notification
STARTUP_DESC=		Startup notification
STARTUP_LIB_DEPENDS=	libstartup-notification-1.so:x11/startup-notification

.include <bsd.port.mk>
