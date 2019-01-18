# $FreeBSD: head/deskutils/xfce4-xkb-plugin/Makefile 450048 2017-09-18 15:33:08Z madpilot $

PORTNAME=	xfce4-xkb-plugin
PORTVERSION=	0.8.1
PORTREVISION=	1
CATEGORIES=	deskutils xfce
MASTER_SITES=	XFCE/src/panel-plugins/${PORTNAME}/${PORTVERSION:R}

MAINTAINER=	xfce@FreeBSD.org
COMMENT=	Keyboard layout switching plugin for the Xfce panel

LICENSE=	GPLv2

LIB_DEPENDS=	libxklavier.so:x11/libxklavier

USES=		gettext-tools gmake gnome libtool pkgconfig tar:bzip2 xfce
USE_GNOME=	gtk30 intltool librsvg2 libwnck3 cairo
USE_XFCE=	panel
USE_XORG=	x11

GNU_CONFIGURE=	yes
INSTALL_TARGET=	install-strip

OPTIONS_DEFINE=	NLS
OPTIONS_SUB=	yes

NLS_USES=		gettext-runtime
NLS_CONFIGURE_ENABLE=	nls

# Downgrade libxklavier
post-patch:
	@${REINPLACE_CMD} -e 's|5.4|5.3|g' ${WRKSRC}/configure

.include <bsd.port.mk>
