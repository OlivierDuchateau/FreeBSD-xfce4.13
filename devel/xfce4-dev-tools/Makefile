# Created by: Oliver Lehmann <oliver@FreeBSD.org>
# $FreeBSD: head/devel/xfce4-dev-tools/Makefile 472376 2018-06-14 12:47:58Z tijl $

PORTNAME=	xfce4-dev-tools
PORTVERSION=	4.14.0
CATEGORIES=	devel xfce
MASTER_SITES=	XFCE
DIST_SUBDIR=	xfce4

MAINTAINER=	xfce@FreeBSD.org
COMMENT=	Xfce development tools

LICENSE=	GPLv2
LICENSE_FILE=	${WRKSRC}/COPYING

RUN_DEPENDS=	autoconf>=2.69:devel/autoconf \
		automake>=1.15:devel/automake \
		libtoolize:devel/libtool \
		bash:shells/bash

USES=		pkgconfig tar:bzip2 xfce
USE_GNOME=	glib20

GNU_CONFIGURE=	yes

PORTSCOUT=	limitw:1,even

.include <bsd.port.mk>
