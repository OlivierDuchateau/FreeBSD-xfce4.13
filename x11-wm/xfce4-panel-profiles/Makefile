# $FreeBSD: head/x11-wm/xfce4-panel-profiles/Makefile 507606 2019-07-29 22:17:57Z madpilot $

PORTNAME=	xfce4-panel-profiles
PORTVERSION=	1.0.9
CATEGORIES=	x11-wm xfce
MASTER_SITES=	XFCE/apps
DIST_SUBDIR=	xfce4

MAINTAINER=	xfce@FreeBSD.org
COMMENT=	Xfce's panel multiple layouts manager

LICENSE=	GPLv3

USES=		gettext gmake gnome python:3.3+ shebangfix tar:bz2
USE_GNOME=	gtk30 intltool
USE_XFCE=	panel

NO_ARCH=	yes
HAS_CONFIGURE=	yes
SHEBANG_FILES=	xfce4-panel-profiles/xfce4-panel-profiles.py \
		xfce4-panel-profiles/panelconfig.py

OPTIONS_DEFINE=	DOCS

post-install:
	${RLN} ${STAGEDIR}${PREFIX}/share/locale ${STAGEDIR}${PREFIX}/share/${PORTNAME}/locale

.include <bsd.port.mk>
