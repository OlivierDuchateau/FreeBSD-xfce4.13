# Created by: Oliver Lehmann <oliver@FreeBSD.org>
# $FreeBSD: head/misc/xfce4-appfinder/Makefile 490953 2019-01-22 14:44:38Z madpilot $

PORTNAME=	xfce4-appfinder
PORTVERSION=	4.14.0
CATEGORIES=	misc xfce
MASTER_SITES=	XFCE
DIST_SUBDIR=	xfce4

MAINTAINER=	xfce@FreeBSD.org
COMMENT=	Application launcher and finder

LICENSE=	GPLv2

USES=		gettext-tools gmake gnome pkgconfig tar:bzip2 xfce
USE_GNOME=	cairo gdkpixbuf2 glib20 gtk30 intltool
USE_XFCE=	garcon xfconf

GNU_CONFIGURE=	yes

PORTSCOUT=	limitw:1,even

OPTIONS_DEFINE=		NLS
OPTIONS_SUB=		yes

NLS_CONFIGURE_ENABLE=	nls
NLS_USES=		gettext-runtime

.include <bsd.port.mk>
