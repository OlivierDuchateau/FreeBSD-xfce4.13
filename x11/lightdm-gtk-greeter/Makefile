# Created by: Ben Woods <woodsb02@FreeBSD.org>
# $FreeBSD: head/x11/lightdm-gtk-greeter/Makefile 500496 2019-04-30 14:26:31Z pkubaj $

PORTNAME=	lightdm-gtk-greeter
PORTVERSION=	2.0.6
CATEGORIES=	x11
MASTER_SITES=	https://launchpad.net/${PORTNAME}/${PORTVERSION:R}/${PORTVERSION}/+download/

MAINTAINER=	woodsb02@FreeBSD.org
COMMENT=	GTK+ greeter for LightDM

LICENSE=	GPLv3
LICENSE_FILE=	${WRKSRC}/COPYING

LIB_DEPENDS=	liblightdm-gobject-1.so:x11/lightdm

USES=		gettext gmake gnome localbase pkgconfig xfce
USE_CSTD=	c99
USE_GNOME=	cairo gdkpixbuf2 gtk30 intltool
USE_XFCE=	libexo
USE_XORG=	x11

GNU_CONFIGURE=	yes
INSTALLS_ICONS=	yes

OPTIONS_DEFINE=	DOCS

post-install:
	(cd ${STAGEDIR}${PREFIX}/etc/lightdm && ${MV} lightdm-gtk-greeter.conf \
		lightdm-gtk-greeter.conf.sample)

.include <bsd.port.mk>
