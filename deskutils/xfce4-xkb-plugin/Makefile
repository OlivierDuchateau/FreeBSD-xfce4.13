# $FreeBSD: head/deskutils/xfce4-xkb-plugin/Makefile 504557 2019-06-19 16:14:27Z madpilot $

PORTNAME=	xfce4-xkb-plugin
PORTVERSION=	0.8.1
PORTREVISION=	2
CATEGORIES=	deskutils xfce
MASTER_SITES=	XFCE/panel-plugins

MAINTAINER=	xfce@FreeBSD.org
COMMENT=	Keyboard layout switching plugin for the Xfce panel

LICENSE=	GPLv2

LIB_DEPENDS=	libxklavier.so:x11/libxklavier

USES=		gettext-tools gmake gnome libtool pkgconfig tar:bzip2 xfce
USE_GNOME=	cairo gtk30 intltool librsvg2 libwnck3
USE_XFCE=	panel
USE_XORG=	x11

GNU_CONFIGURE=	yes
INSTALL_TARGET=	install-strip

OPTIONS_DEFINE=		NLS
OPTIONS_SUB=		yes

NLS_CONFIGURE_ENABLE=	nls
NLS_USES=		gettext-runtime

# Downgrade libxklavier
post-patch:
	@${REINPLACE_CMD} -e 's|5.4|5.3|g' ${WRKSRC}/configure

.include <bsd.port.mk>
