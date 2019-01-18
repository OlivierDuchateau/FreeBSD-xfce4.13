# Created by: Sergey V. Dyatko <sergey.dyatko@gmail.com>
# $FreeBSD: head/devel/thunar-vcs-plugin/Makefile 417861 2016-07-01 03:43:57Z olivierd $

PORTNAME=	thunar-vcs-plugin
PORTVERSION=	0.2.0
CATEGORIES=	devel xfce
MASTER_SITES=	XFCE/src/thunar-plugins/${PORTNAME}/${PORTVERSION:R}
DIST_SUBDIR=	xfce4

MAINTAINER=	sergey.dyatko@gmail.com
COMMENT=	Version Control System plugin for Thunar

USES=		gettext-tools gmake gnome libtool localbase pkgconfig tar:bzip2 \
		xfce
USE_GNOME=	cairo gtk30 glib20 intltool intlhack
USE_XFCE=	libexo thunar

GNU_CONFIGURE=	yes
INSTALLS_ICONS=	yes
INSTALL_TARGET=	install-strip

OPTIONS_DEFINE=		NLS GIT SVN
OPTIONS_DEFAULT=	SVN
OPTIONS_SUB=		yes

GIT_DESC=		Git support

NLS_USES=		gettext-runtime
NLS_CONFIGURE_ENABLE=	nls

GIT_RUN_DEPENDS=	git:devel/git
GIT_CONFIGURE_ENABLE=	git

SVN_LIB_DEPENDS=	libsvn_client-1.so:devel/subversion \
			libapr-1.so:devel/apr1
SVN_CONFIGURE_ENABLE=	subversion

.include <bsd.port.mk>
