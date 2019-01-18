# Created by: Martin Wilke (miwi@FreeBSD.org)
# $FreeBSD: head/audio/thunar-media-tags-plugin/Makefile 412344 2016-04-01 13:29:15Z mat $

PORTNAME=	thunar-media-tags-plugin
PORTVERSION=	0.3.0
CATEGORIES=	audio xfce
MASTER_SITES=	XFCE/src/thunar-plugins/${PORTNAME}/${PORTVERSION:R}
DIST_SUBDIR=	xfce4

MAINTAINER=	xfce@FreeBSD.org
COMMENT=	Media tags plugin

LICENSE=	GPLv2
LICENSE_FILE=	${WRKSRC}/COPYING

LIB_DEPENDS=	libtag.so:audio/taglib

USES=		gettext gmake gnome libtool pkgconfig tar:bzip2 xfce

USE_GNOME=	gtk30 intltool intlhack
USE_XFCE=	thunar

GNU_CONFIGURE=	yes

.include <bsd.port.mk>
