# FreeBSD ports overlay to test xfce 4.13

**These are experimental ports, not ready for production use. Use at your own risk.**

This repository contains a [FreeBSD ports](https://www.freebsd.org/doc/en_US.ISO8859-1/books/handbook/ports-using.html) overlay with [XFCE desktop environment](https://xfce.org/) ports updated to version 4.13 of the desktop, which is the development desktop on which the future version 4.14 will be based.

The XFCE people are targeting to [release XFCE 4.14 on 11 August 2019](https://wiki.xfce.org/releng/4.14/roadmap).

This is not intended to be used on production/actual desktop systems. I'm only testing it in virtual machines, compiled with default options and WITH_DEBUG enabled, and gets very light usage.

I can't give any warranties about stability, usability of these packages or future availability of the binary repository described below.

## How to test

### Compiling yourself

Easiest way to use this overlay is through [portshaker](https://www.freshports.org/ports-mgmt/portshaker/).

to grab this repo as a source you can create a file `/usr/local/etc/portshaker.d/xfce413`:

```
. /usr/local/share/portshaker/portshaker.subr
if [ "$1" != '--' ]; then
        err 1 "Extra arguments"
fi
shift
method="git"
git_clone_uri="https://github.com/madpilot78/FreeBSD-xfce4.13.git"
run_portshaker_command $*
```

Configure portshaker to include this overlay in whatever ports tree you need it (I strongly suggest using [poudriere](https://github.com/freebsd/poudriere/wiki)) and compile your own packages.

**NOTE: If you want to compile the sysutils/xfce4-places-plugin port you should manually remove it's line from MOVED after merging the trees. Portshaker will not do this automatically.**

### Binary packages

**These are provided on a best effort basis and no availability warranty is given.**

If you are confident of the binaries I'll provide this will save you time.

Please note that these binaries will be most often built with `WITH_DEBUG` enabled.

I'm periodically building a package set for FreeBSD 12.0 (amd64) from these ports which can be found at https://pkg.madpilot.net/120amd64-xfce413

These packages are signed with an RSA key, you should use the following cert to verify the signature:

```
-----BEGIN PUBLIC KEY-----
MIICIjANBgkqhkiG9w0BAQEFAAOCAg8AMIICCgKCAgEA2XWrfAxyOnf1cRL/pxr1
6yxBAMlHoJZQQLB9XDF3EaFEtiDsWEQuZFGfLp+LUcifCgfb7MzEsOJSImIJ+VXL
/M+Mg1QVtNa3a3Vt9x6u7FNEkpU2Php989J+pgqSJ8LNj4MsaxKSFBDWBYoJZqh7
xd2lsq0gHc4R8LIWehe4PCxHGflBakS6p9+czAosqCs0U5kByofO65ggect+60Zg
KaVbRlatGk1Ec67fTwXujio0QB7mWW29PcdQZxS5SI5N+PIKdx8+Gvm0OUk0fmdh
VOFo/0DkutA67PCOhb7CvbNNJ/kqNXtmludFMrjz9A1oEKFTuIqQvNasWiIbNBdV
LB4iwgWqA0NDPPKaHPEXUtMIfO9o/b7ila619b4KQ9TftGnDXofmmOHejHsR6GWH
LHaZJ6GC0qMzK8MAk0N5rr+3qvX7tnkKj0w8H6ICFLfQDxQl0FYeLE98RrANaBCp
lRhd+RC9IjG0h14hKw87lGeCgn30WTOciAjU0G6hoI/+lmahOsb5j2bOyA0oXqBJ
oBhiTqjQ0rohnfPgah73JvRWrIoGDGqkzTdxiRoGMmmQrZ34I4qauK8mqYU2tKWP
pV5ij9BTkYKsHQvWH6ufVeMdjcwvxzRe9HNek54mxbdT3qBjCRebdlCSrqF+2Gfc
9mFT6ITogO5AxJkLfDje+ucCAwEAAQ==
-----END PUBLIC KEY-----
```

(changed on 2019-05-01)

I'll assume you saved the cert in `/usr/local/etc/pkg/xfce413.cert`.

Since the repo I'm building is only partial best way to use it is to configure it alongside the "latest" official packages repo with an higher priority, so you could add to `/usr/local/etc/pkg/repos/xfce413.conf`:

```
xfce413: {
  url: https://pkg.madpilot.net/120amd64-xfce413,
  mirror_type: none,
  signature_type: pubkey,
  pubkey: /usr/local/etc/pkg/xfce413.cert,
  enabled: yes,
  priority: 1
}

FreeBSD: {
  url: "pkg+http://pkg.freebsd.org/${ABI}/latest",
  priority: 0
}
```

after this pkg should install xfce packages from my repo.

NOTE: If changing configuration on a machine which already has xfce packages installed from the official repositories you may need to set CONSERVATIVE_UPGRADE to false in pkg.conf for pkg to switch the already installed packages to my repo.

## Notes

### LightDM

LightDM + GTK Greeter fails to start with default system configuration.

I found out it requires more locked memory than what is allowed in the default login.conf.

Please edit `/etc/login.conf` and in the `daemon:` section raise the `memorylocked` value from `128M` to `256M`:

```
daemon:\
        :memorylocked=256M:\
        :tc=default:
```

After this rebuild the database:

```
# cd /etc
# cap_mkdb login.conf
```

Then reboot. LightDM should now work fine.

### Known issues

These are known issues with these modified ports which need to be worked on:

#### Gobject Introspection support

Some ports have GIR (Gobject Introspection) options, but they don't work properly.

This should be fixed or the options removed eventually.

####  xfce4-mixer

The xfce-mixer port, which has been unsupported upstream since xfce 4.10, now fails to compile.

A quick look at the errors I get makes me think that with some minor fixes it could be made to work even with XFCE 4.13.

#### LightDM

Making LightDM the default display manager for XFCE would be a good thing (IMHO).

Unluckily the problem with failing with the login.conf file shipped by default on FreeBSD prevents this. Also, since we need it to work on all supported releases, even getting a modified login.conf accepted in current would not help.

Some alternative solution is needed.

An option suggested by the LightDM port maintainer is to modify LightDM to reduce it's locked memory usage to the minimum. At present LightDM requires all the memory it allocates to be locked.

### Open bug reports upstream

These are bug reports I have opened upstream about bugs in development versions of the XFCE software.

None at present.
