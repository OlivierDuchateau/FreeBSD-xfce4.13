# Created by: Emanuel Haupt <ehaupt@FreeBSD.org>
# $FreeBSD: head/deskutils/xfce4-notifyd/Makefile 504557 2019-06-19 16:14:27Z madpilot $
#
# !!!NOTE!!! Update of x11-toolkits/gtk30 (specially >= 3.20.x) must be
# accompanied by PORTREVISION bumps of this port.
# Support of GTK+ is checked at compile time and themes directories too.

PORTNAME=	xfce4-notifyd
PORTVERSION=	0.4.4
PORTREVISION=	1
CATEGORIES=	deskutils xfce
MASTER_SITES=	XFCE/apps
DIST_SUBDIR=	xfce4

MAINTAINER=	ehaupt@FreeBSD.org
COMMENT=	Visually-appealing notification daemon for Xfce

LICENSE=	GPLv3

LIB_DEPENDS=	libnotify.so:devel/libnotify

USES=		gettext-tools gmake gnome libtool pkgconfig tar:bzip2 xfce
USE_GNOME=	cairo glib20 gtk30 intltool
USE_XFCE=	libutil panel
USE_XORG=	ice sm x11

GNU_CONFIGURE=	yes
INSTALLS_ICONS=	yes
INSTALL_TARGET=	install-strip

OPTIONS_DEFINE=		NLS
OPTIONS_SUB=		yes

NLS_CONFIGURE_ENABLE=	nls
NLS_USES=		gettext-runtime

.include <bsd.port.mk>
