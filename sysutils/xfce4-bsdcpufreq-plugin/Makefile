# Created by: Thomas Zander <riggs@FreeBSD.org>
# $FreeBSD: head/sysutils/xfce4-bsdcpufreq-plugin/Makefile 493169 2019-02-17 15:25:59Z riggs $
#

PORTNAME=	xfce4-bsdcpufreq-plugin
PORTVERSION=	0.2
PORTREVISION=	3
CATEGORIES=	sysutils xfce

MAINTAINER=	riggs@FreeBSD.org
COMMENT=	Displays the current CPU clock frequency in the panel

LICENSE=	BSD2CLAUSE
LICENSE_FILE=	${WRKSRC}/LICENSE

LIB_DEPENDS=	libfontconfig.so:x11-fonts/fontconfig \
		libfreetype.so:print/freetype2

USES=		pkgconfig xfce:gtk2
USE_XFCE=	panel
USE_GNOME=	cairo gdkpixbuf2 gtk20

PLIST_FILES=	lib/xfce4/panel/plugins/libbsdcpufreq.so \
		share/xfce4/panel/plugins/bsdcpufreq.desktop

USE_GITHUB=	yes
GH_ACCOUNT=	riggs-
GH_TAGNAME=	be17b3a

do-install:
	${MKDIR} ${STAGEDIR}${PREFIX}/lib/xfce4/panel/plugins
	${MKDIR} ${STAGEDIR}${PREFIX}/share/xfce4/panel/plugins
	${INSTALL_LIB} ${WRKSRC}/libbsdcpufreq.so ${STAGEDIR}${PREFIX}/lib/xfce4/panel/plugins
	${INSTALL_DATA} ${WRKSRC}/bsdcpufreq.desktop ${STAGEDIR}${PREFIX}/share/xfce4/panel/plugins

.include <bsd.port.mk>
