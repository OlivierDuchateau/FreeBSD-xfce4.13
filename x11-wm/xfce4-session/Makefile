# Created by: Matt Lancereau <matt@rimasec.net>
# $FreeBSD: head/x11-wm/xfce4-session/Makefile 490953 2019-01-22 14:44:38Z madpilot $

PORTNAME=	xfce4-session
PORTVERSION=	4.13.4
CATEGORIES=	x11-wm xfce
MASTER_SITES=	XFCE
DIST_SUBDIR=	xfce4

MAINTAINER=	xfce@FreeBSD.org
COMMENT=	Xfce's session manager

LICENSE=	GPLv2

BUILD_DEPENDS=	iceauth:x11/iceauth
RUN_DEPENDS=	iceauth:x11/iceauth \
		console-kit-daemon:sysutils/consolekit2
LIB_DEPENDS=	libupower-glib.so:sysutils/upower \
		libpolkit-gobject-1.so:sysutils/polkit

USES=		gettext-tools gmake gnome libtool pathfix pkgconfig \
		tar:bzip2 xfce

USE_GNOME=	cairo gtk30 glib20 intltool libwnck3
USE_LDCONFIG=	yes
USE_XFCE=	libmenu
USE_XORG=	ice sm x11

GNU_CONFIGURE=	yes
INSTALLS_ICONS=	yes
CONFIGURE_ARGS=	--enable-legacy-sm \
		--with-xsession-prefix=${PREFIX}
SUB_FILES=	pkg-message
INSTALL_TARGET=	install-strip

PORTSCOUT=	limitw:1,even

OPTIONS_DEFINE=		NLS
OPTIONS_SUB=		yes

NLS_CONFIGURE_ENABLE=	nls
NLS_USES=		gettext-runtime

post-patch:
	@${REINPLACE_CMD} -e 's|%%LOCALBASE%%|${LOCALBASE}|g' \
		${WRKSRC}/scripts/xflock4

.include <bsd.port.mk>
