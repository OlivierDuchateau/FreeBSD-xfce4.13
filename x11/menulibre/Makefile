# $FreeBSD: head/x11/menulibre/Makefile 504183 2019-06-14 12:45:45Z madpilot $

PORTNAME=	menulibre
PORTVERSION=	2.2.1
CATEGORIES=	x11
MASTER_SITES=	https://launchpad.net/menulibre/${PORTVERSION:R}/${PORTVERSION}/+download/
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	madpilot@FreeBSD.org
COMMENT=	Advanced menu editor

LICENSE=	GPLv3

BUILD_DEPENDS=	${PYTHON_PKGNAMEPREFIX}python-distutils-extra>=2.38:devel/py-python-distutils-extra@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}psutil>=2.0:sysutils/py-psutil@${PY_FLAVOR}
LIB_DEPENDS=	libgnome-menu-3.so:x11/gnome-menus
RUN_DEPENDS=	xdg-open:devel/xdg-utils \
		${PYTHON_PKGNAMEPREFIX}psutil>=2.0:sysutils/py-psutil@${PY_FLAVOR}

USES=		desktop-file-utils gettext gnome python:3.4+
USE_GNOME=	intltool pygobject3
USE_PYTHON=	distutils

INSTALLS_ICONS=	yes

OPTIONS_DEFINE=	DOCS

.include <bsd.port.pre.mk>

PYDISTUTILS_INSTALLARGS:=	${PYDISTUTILS_INSTALLARGS:N--single-version-externally-managed}

post-install:
	${MV} ${STAGEDIR}${PREFIX}/share/man/man1 ${STAGEDIR}${PREFIX}/man
	${RMDIR} ${STAGEDIR}${PREFIX}/share/man
	${GZIP_CMD} ${STAGEDIR}${PREFIX}/man/man1/*

.include <bsd.port.post.mk>
