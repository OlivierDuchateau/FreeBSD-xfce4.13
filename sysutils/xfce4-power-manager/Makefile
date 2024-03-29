# Created by: J.R. Oldroyd <fbsd@opal.com>
# $FreeBSD: head/sysutils/xfce4-power-manager/Makefile 507600 2019-07-29 21:36:40Z madpilot $

PORTNAME=	xfce4-power-manager
PORTVERSION=	1.6.5
CATEGORIES=	sysutils xfce
MASTER_SITES=	XFCE
DIST_SUBDIR=	xfce4

MAINTAINER=	xfce@FreeBSD.org
COMMENT=	Power manager for the Xfce Desktop

LICENSE=	GPLv2

LIB_DEPENDS=	libnotify.so:devel/libnotify \
		libupower-glib.so:sysutils/upower

USES=		gettext-tools gmake gnome libtool pkgconfig tar:bzip2 xfce
USE_GNOME=	cairo glib20 gtk30 intltool
USE_XFCE=	panel
USE_XORG=	ice sm xrandr x11 xext xtst xscrnsaver

GNU_CONFIGURE=	yes
INSTALLS_ICONS=	yes
CONFIGURE_ARGS=	--disable-network-manager \
		--enable-polkit \
		--enable-xfce4panel
INSTALL_TARGET=	install-strip

OPTIONS_DEFINE=		NLS
OPTIONS_SUB=		yes

NLS_CONFIGURE_ENABLE=	nls
NLS_USES=		gettext-runtime

.include <bsd.port.pre.mk>

.if defined(WITH_DEBUG)
CONFIGURE_ARGS+=	--enable-debug
.endif

.include <bsd.port.post.mk>
