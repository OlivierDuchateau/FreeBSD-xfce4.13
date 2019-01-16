--- src/x-server.c.orig	2018-03-21 23:13:29 UTC
+++ src/x-server.c
@@ -142,10 +142,10 @@ x_server_connect_session (DisplayServer *display_serve
         g_autofree gchar *tty_text = NULL;
         g_autofree gchar *vt_text = NULL;
 
-        tty_text = g_strdup_printf ("/dev/tty%d", vt);
+        tty_text = g_strdup_printf ("/dev/ttyv%d", vt - 1);
         session_set_tty (session, tty_text);
 
-        vt_text = g_strdup_printf ("%d", vt);
+        vt_text = g_strdup_printf ("%d", vt - 1);
         session_set_env (session, "XDG_VTNR", vt_text);
     }
     else
