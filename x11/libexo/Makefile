# Created by: Matt Lancereau
# $FreeBSD: head/x11/libexo/Makefile 507596 2019-07-29 21:34:10Z madpilot $

PORTNAME=	libexo
PORTVERSION=	0.12.8
CATEGORIES=	x11 xfce
MASTER_SITES=	XFCE
DISTNAME=	exo-${DISTVERSIONFULL}
DIST_SUBDIR=	xfce4

MAINTAINER=	xfce@FreeBSD.org
COMMENT=	Application library for the Xfce desktop environment

LICENSE=	GPLv2 LGPL21
LICENSE_COMB=	multi
LICENSE_FILE_GPLv2=	${WRKSRC}/COPYING
LICENSE_FILE_LGPL21=	${WRKSRC}/COPYING.LIB

LIB_DEPENDS=	libfontconfig.so:x11-fonts/fontconfig \
		libfreetype.so:print/freetype2
BUILD_DEPENDS=	p5-URI>=1.70:net/p5-URI
RUN_DEPENDS=	p5-URI>=1.70:net/p5-URI

USES=		desktop-file-utils gettext-tools gmake gnome libtool pathfix \
		perl5 pkgconfig tar:bzip2 xfce
USE_GNOME=	cairo glib20 gtk30 intltool
USE_LDCONFIG=	yes
USE_XFCE=	libmenu
USE_XORG=	ice sm x11

WRKSRC=		${WRKDIR}/${DISTNAME}
GNU_CONFIGURE=	yes
INSTALLS_ICONS=	yes
INSTALL_TARGET=	install-strip
CONFIGURE_ARGS=	--without-html-dir --disable-silent-rules

OPTIONS_DEFINE=	GTK2 NLS
OPTIONS_DEFAULT=	GTK2
OPTIONS_SUB=	yes

GTK2_USE=	gnome=gtk20
GTK2_CONFIGURE_ENABLE=	gtk2

NLS_CONFIGURE_ENABLE=	nls
NLS_USES=		gettext-runtime

.include <bsd.port.mk>
