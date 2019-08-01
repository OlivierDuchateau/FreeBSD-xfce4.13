# Created by: James Earl <jdearl@telus.net>
# $FreeBSD: head/x11-wm/xfce4-desktop/Makefile 490953 2019-01-22 14:44:38Z madpilot $

PORTNAME=	xfce4-desktop
PORTVERSION=	4.13.6
CATEGORIES=	x11-wm xfce
MASTER_SITES=	XFCE
DISTNAME=	xfdesktop-${DISTVERSIONFULL}
DIST_SUBDIR=	xfce4

MAINTAINER=	xfce@FreeBSD.org
COMMENT=	Xfce's desktop manager

LICENSE=	GPLv2
LICENSE_FILE=	${WRKSRC}/COPYING

LIB_DEPENDS=	libdbus-1.so:devel/dbus \
		libdbus-glib-1.so:devel/dbus-glib \
		libnotify.so:devel/libnotify

USES=		gettext-tools gmake gnome pkgconfig tar:bzip2 xfce
USE_GNOME=	cairo glib20 gtk30 intltool libwnck3
USE_XFCE=	garcon libexo
USE_XORG=	ice sm x11

GNU_CONFIGURE=	yes
INSTALLS_ICONS=	yes
INSTALL_TARGET=	install-strip

PORTSCOUT=	limitw:1,even

CONFIGURE_ARGS=	--enable-gio-unix \
		--enable-notifications

OPTIONS_DEFINE=			NLS THUNAR
OPTIONS_DEFAULT=		THUNAR
OPTIONS_SUB=			yes

THUNAR_DESC=			Thunar file manager support

NLS_CONFIGURE_ENABLE=		nls
NLS_USES=			gettext-runtime

THUNAR_CONFIGURE_ENABLE=	thunarx
THUNAR_CONFIGURE_WITH=		file-manager-fallback=Thunar
THUNAR_USE=			xfce=thunar

.include <bsd.port.mk>
