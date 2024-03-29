# Created by: Oliver Lehmann <oliver@FreeBSD.org>
# $FreeBSD: head/x11/xfce4-conf/Makefile 504557 2019-06-19 16:14:27Z madpilot $

PORTNAME=	xfce4-conf
PORTVERSION=	4.14.1
CATEGORIES=	x11 xfce
MASTER_SITES=	XFCE
DISTNAME=	xfconf-${DISTVERSIONFULL}
DIST_SUBDIR=	xfce4

MAINTAINER=	xfce@FreeBSD.org
COMMENT=	D-Bus-based configuration storage system

LICENSE=	GPLv2

BUILD_DEPENDS=	p5-XML-Parser>=2.44:textproc/p5-XML-Parser

USES=		gettext-tools gmake gnome libtool pathfix perl5 pkgconfig \
		tar:bzip2 xfce
USE_GNOME=	glib20 intltool
USE_LDCONFIG=	yes
USE_PERL5=	build
USE_XFCE=	libutil
USE_XORG=	x11

GNU_CONFIGURE=	yes
INSTALL_TARGET=	install-strip
CONFIGURE_ARGS=	--without-html-dir

PORTSCOUT=	limitw:1,even

OPTIONS_DEFINE=		GIR NLS PERL VAPI
OPTIONS_DEFAULT=	GIR VAPI
OPTIONS_SUB=		yes

GIR_DESC=		Use Gobject Introspection

GIR_USE=		gnome=introspection:build
GIR_CONFIGURE_ON=	--enable-introspection=yes
GIR_CONFIGURE_OFF=	--enable-introspection=no

NLS_CONFIGURE_ENABLE=	nls
NLS_USES=		gettext-runtime

PERL_BUILD_DEPENDS=	p5-ExtUtils-Depends>=0.405:devel/p5-ExtUtils-Depends \
			p5-ExtUtils-PkgConfig>=1.15:devel/p5-ExtUtils-PkgConfig \
			p5-Glib2>=1.321:devel/p5-Glib2
PERL_CONFIGURE_ENABLE=	perl-bindings
PERL_USE=		perl5=run

VAPI_BUILD_DEPENDS=	vapigen:lang/vala
VAPI_CONFIGURE_ENABLE=	vala
VALA_IMPLIES=		GIR

.include <bsd.port.mk>
