# Created by: Olivier Duchateau
# $FreeBSD: head/x11-themes/greybird-theme/Makefile 508297 2019-08-07 07:18:19Z madpilot $

PORTNAME=	greybird
PORTVERSION=	3.22.10
DISTVERSIONPREFIX=	v
CATEGORIES=	x11-themes xfce
PKGNAMESUFFIX=	-theme

MAINTAINER=	xfce@FreeBSD.org
COMMENT=	Gtk and xfwm4 themes for the Xfce Desktop

LICENSE=	GPLv2 CC-BY-SA-3.0
LICENSE_COMB=	dual

RUN_DEPENDS=	gtk-murrine-engine>=0.98.1:x11-themes/gtk-murrine-engine

PORTSCOUT=	limit:^3\.22\.

GH_ACCOUNT=	shimmerproject
GH_PROJECT=	Greybird

USE_GITHUB=	yes
NO_BUILD=	yes

OPTIONS_DEFINE=		NOTIFYD
OPTIONS_DEFAULT=	NOTIFYD
OPTIONS_SUB=		yes

NOTIFYD_DESC=	Install xfce4-notifyd theme

post-patch:
	@${RM} ${WRKSRC}/gtk-?.0/*.orig

do-install:
	@${MKDIR} ${STAGEDIR}${PREFIX}/share/themes/Greybird
.for dir in gtk-2.0 gtk-3.0 plank xfwm4
	@cd ${WRKSRC} && \
		${COPYTREE_SHARE} ${dir} ${STAGEDIR}${PREFIX}/share/themes/Greybird
.endfor

do-install-NOTIFYD-on:
	@cd ${WRKSRC} && \
		${COPYTREE_SHARE} xfce-notify-4.0/ \
		${STAGEDIR}${PREFIX}/share/themes/Greybird

.include <bsd.port.mk>
