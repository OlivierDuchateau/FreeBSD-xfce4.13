# Created by: James Earl <jdearl@telus.net>
# $FreeBSD: head/x11-wm/xfce4-panel/Makefile 490953 2019-01-22 14:44:38Z madpilot $

PORTNAME=	xfce4-panel
PORTVERSION=	4.13.4
CATEGORIES=	x11-wm xfce
MASTER_SITES=	XFCE/src/xfce/${PORTNAME}/${PORTVERSION:R}
DIST_SUBDIR=	xfce4

MAINTAINER=	xfce@FreeBSD.org
COMMENT=	Xfce's panel

LICENSE=	GPLv2 LGPL21
LICENSE_COMB=	multi
LICENSE_FILE_GPLv2=	${WRKSRC}/COPYING
LICENSE_FILE_LGPL21=	${WRKSRC}/COPYING.LIB

LIB_DEPENDS=	libdbus-1.so:devel/dbus \
		libdbus-glib-1.so:devel/dbus-glib

USES=		desktop-file-utils gettext-tools gmake gnome libtool pathfix \
		perl5 pkgconfig tar:bzip2
USE_GNOME=	cairo glib20 gtk30 intltool libwnck3
USE_LDCONFIG=	yes
USE_XFCE=	garcon libexo
USE_XORG=	ice sm x11 xext

GNU_CONFIGURE=	yes
INSTALLS_ICONS=	yes
INSTALL_TARGET=	install-strip
CONFIGURE_ARGS+=--enable-gio-unix --without-html-dir

OPTIONS_DEFINE=		GIR GTK2 NLS
OPTIONS_DEFAULT=	GTK2
OPTIONS_SUB=		yes

GIR_DESC=		Use Gobject Introspection

GIR_BUILD_DEPENDS=	vapigen:lang/vala
GIR_USE=		gnome=introspection:build
GIR_CONFIGURE_ON=       --enable-introspection=yes
GIR_CONFIGURE_OFF=      --enable-introspection=no

GTK2_USES=		xfce:gtk2
GTK2_USE=		gnome=gtk20
GTK2_CONFIGURE_ENABLE=	gtk2
GTK2_USES_OFF=		xfce

NLS_CONFIGURE_ENABLE=	nls
NLS_USES=		gettext-runtime

.include <bsd.port.mk>
