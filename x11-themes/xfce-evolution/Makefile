# $FreeBSD: head/x11-themes/xfce-evolution/Makefile 505150 2019-06-26 11:52:23Z rene $

PORTNAME=	xfce-evolution
DISTVERSION=	6.0.4
CATEGORIES=	x11-themes
MASTER_SITES=	SF/${PORTNAME}

MAINTAINER=	fbsd@opal.com
COMMENT=	Complete Xfce Evolution Gtk2, Gtk3, Qt5, wxWidgets, Xfce themes

LICENSE=	GPLv2
LICENSE_FILE=	${WRKSRC}/GPL-v2

RUN_DEPENDS=	fontconfig>0:x11-fonts/fontconfig \
		gtk-murrine-engine>0:x11-themes/gtk-murrine-engine \
		qt5-style-plugins>0:x11-themes/qt5-style-plugins

USES=		shebangfix gnome zip
USE_GNOME=	gtk20

NO_BUILD=	yes
NO_ARCH=	yes
SHEBANG_REGEX=	00.[0-4]0
bash_CMD=	/bin/sh

EXTRACT_AFTER_ARGS=	-d ${DISTNAME}

EXTRADIRS=	TOOLS/SETUP

do-install:
	@${MKDIR} ${STAGEDIR}${PREFIX}/share/themes
	@cd ${WRKSRC} && \
		${COPYTREE_SHARE} "Xfce*" ${STAGEDIR}${PREFIX}/share/themes
	@${MKDIR} ${STAGEDIR}${PREFIX}/etc/fonts/conf.avail ${STAGEDIR}${PREFIX}/etc/fonts/conf.d
	@${CP} ${STAGEDIR}${PREFIX}/share/themes/Xfce\ Evolution/TOOLS/SETUP/lib/90-xfce-evolution_qt5fontfix.conf \
		${STAGEDIR}${PREFIX}/etc/fonts/conf.avail/90-xfce-evolution_qt5fontfix.conf
	@${RLN} ${STAGEDIR}${PREFIX}/etc/fonts/conf.avail/90-xfce-evolution_qt5fontfix.conf \
		${STAGEDIR}${PREFIX}/etc/fonts/conf.d/90-xfce-evolution_qt5fontfix.conf
	@cd ${STAGEDIR}${PREFIX}/share/themes/Xfce\ Evolution && ${RM} -r ${EXTRADIRS}

.include <bsd.port.mk>
