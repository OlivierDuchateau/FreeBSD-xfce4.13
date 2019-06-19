# Created by: Martin Wilke (miwi@FreeBSD.org)
# $FreeBSD: head/mail/xfce4-mailwatch-plugin/Makefile 490953 2019-01-22 14:44:38Z madpilot $

PORTNAME=	xfce4-mailwatch-plugin
PORTVERSION=	1.2.0
PORTREVISION=	10
CATEGORIES=	mail xfce
MASTER_SITES=	XFCE/panel-plugins
DIST_SUBDIR=	xfce4

MAINTAINER=	xfce@FreeBSD.org
COMMENT=	Mail notification applet for the Xfce panel

LIB_DEPENDS=	libgnutls.so:security/gnutls \
		libgcrypt.so:security/libgcrypt \
		libgpg-error.so:security/libgpg-error \
		libfontconfig.so:x11-fonts/fontconfig \
		libfreetype.so:print/freetype2

USES=		gettext-tools gmake gnome libtool pkgconfig tar:bzip2 xfce:gtk2
USE_GNOME=	cairo glib20 gtk20 intltool
USE_XFCE=	panel
USE_XORG=	x11

GNU_CONFIGURE=	yes
INSTALLS_ICONS=	yes
INSTALL_TARGET=	install-strip

CONFIGURE_ARGS=--enable-ipv6

OPTIONS_DEFINE=	NLS
OPTIONS_SUB=	yes

NLS_USES=		gettext-runtime
NLS_CONFIGURE_ENABLE=	nls

post-patch:
	${REINPLACE_CMD} -e 's|xfce-mail|mail-send|' \
		${WRKSRC}/panel-plugin/mailwatch-plugin.c

.include <bsd.port.mk>
