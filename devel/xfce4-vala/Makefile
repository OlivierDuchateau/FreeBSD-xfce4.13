# Created by: Olivier Duchateau <olivierd@FreeBSD.org>
# $FreeBSD: head/devel/xfce4-vala/Makefile 490953 2019-01-22 14:44:38Z madpilot $

PORTNAME=	xfce4-vala
PORTVERSION=	4.10.3
PORTREVISION=	5
CATEGORIES=	devel xfce
MASTER_SITES=	XFCE/bindings
DIST_SUBDIR=	xfce4

MAINTAINER=	xfce@FreeBSD.org
COMMENT=	Vala binding for the Xfce core libraries

LICENSE=	LGPL21

DEPRECATED=	EOL, use the VAPI/GIR functionality included in the XFCE ports
EXPIRATION_DATE=2019-09-30

BUILD_DEPENDS=	valac:lang/vala

USES=		gmake gnome pathfix pkgconfig tar:bzip2 xfce
USE_XFCE=	panel

GNU_CONFIGURE=	yes
CONFIGURE_ARGS=	--with-vala-api=0.40

CONFLICTS_INSTALL=	libxfce4util-4.14.*

.include <bsd.port.mk>
