# Created by: DaJoob
# $FreeBSD: head/x11/xfce4-taskmanager/Makefile 496710 2019-03-24 09:48:51Z madpilot $

PORTNAME=	xfce4-taskmanager
PORTVERSION=	1.2.2
PORTREVISION=	2
CATEGORIES=	x11 xfce
MASTER_SITES=	XFCE/apps
DIST_SUBDIR=	xfce4

MAINTAINER=	xfce@FreeBSD.org
COMMENT=	Task manager for the Xfce desktop

LICENSE=	GPLv2
LICENSE_FILE=	${WRKSRC}/COPYING

USES=		gettext-tools gmake gnome localbase pkgconfig tar:bzip2
USE_GNOME=	cairo gdkpixbuf2 glib20 gtk30 intltool libwnck3
USE_XORG=	ice sm x11 xmu xt

GNU_CONFIGURE=	yes
INSTALLS_ICONS=	yes

CONFIGURE_ARGS+=	--disable-silent-rules --disable-gksu \
			--enable-wnck3 --disable-wnck --disable-gtk2

OPTIONS_DEFINE=		NLS
OPTIONS_SUB=		yes

NLS_CONFIGURE_ENABLE=	nls
NLS_USES=		gettext-runtime

.include <bsd.port.mk>
