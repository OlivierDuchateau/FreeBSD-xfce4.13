# Created by: Matt Lancereau <matt@rimasec.net>
# $FreeBSD: head/x11/xfce4-clipman-plugin/Makefile 504557 2019-06-19 16:14:27Z madpilot $

PORTNAME=	xfce4-clipman-plugin
PORTVERSION=	1.4.3
PORTREVISION=	2
CATEGORIES=	x11 xfce
MASTER_SITES=	XFCE/panel-plugins
DIST_SUBDIR=	xfce4

MAINTAINER=	xfce@FreeBSD.org
COMMENT=	Clipboard manager for the Xfce panel

LICENSE=	GPLv2

USES=		gettext-tools gmake gnome libtool pkgconfig tar:bzip2 xfce
USE_GNOME=	cairo glib20 gtk30 intltool
USE_XFCE=	panel
USE_XORG=	ice sm x11 xorgproto xtst

GNU_CONFIGURE=	yes
INSTALLS_ICONS=	yes
INSTALL_TARGET=	install-strip

OPTIONS_DEFINE=		NLS QRCODE
OPTIONS_SUB=		yes

QRCODE_DESC=		QR Code support

NLS_USES=		gettext-runtime
NLS_CONFIGURE_ENABLE=	nls

QRCODE_LIB_DEPENDS=	libqrencode.so:graphics/libqrencode
QRCODE_CONFIGURE_ENABLE=libqrencode

.include <bsd.port.mk>
