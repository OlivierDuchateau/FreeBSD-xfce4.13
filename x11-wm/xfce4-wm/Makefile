# Created by: James Earl <jdearl@telus.net>
# $FreeBSD: head/x11-wm/xfce4-wm/Makefile 504557 2019-06-19 16:14:27Z madpilot $

PORTNAME=	xfce4-wm
PORTVERSION=	4.14.0
CATEGORIES=	x11-wm xfce
MASTER_SITES=	XFCE
DISTNAME=	xfwm4-${DISTVERSIONFULL}
DIST_SUBDIR=	xfce4

MAINTAINER=	xfce@FreeBSD.org
COMMENT=	Xfce's window manager

LICENSE=	GPLv2

LIB_DEPENDS=	libepoxy.so:graphics/libepoxy

USES=		gettext-tools gmake gnome pkgconfig tar:bzip2 xfce
USE_GNOME=	cairo gtk30 intltool libwnck3
USE_XFCE=	libmenu xfconf
USE_XORG=	ice sm x11 xcomposite xdamage xext xfixes xi xinerama \
		xrandr xrender

CONFIGURE_ARGS=	--enable-xsync \
		--enable-render \
		--enable-randr \
		--enable-compositor \
		--disable-kde-systray
GNU_CONFIGURE=	yes
INSTALLS_ICONS=	yes
DATADIR=	${PREFIX}/share/xfwm4

PORTSCOUT=	limitw:1,even

OPTIONS_DEFINE=		NLS STARTUP
OPTIONS_DEFAULT=	STARTUP
OPTIONS_SUB=		yes

STARTUP_DESC=		Startup notification

NLS_CONFIGURE_ENABLE=	nls
NLS_USES=		gettext-runtime

STARTUP_CONFIGURE_ENABLE=	startup-notification
STARTUP_LIB_DEPENDS=	libstartup-notification-1.so:x11/startup-notification

post-patch:
	@${REINPLACE_CMD} -e 's|Default|Greybird|' \
		${WRKSRC}/settings-dialogs/xfwm4-settings.c

.include <bsd.port.mk>
